//
// Copyright (C) 2000 Institut fuer Telematik, Universitaet Karlsruhe
// Copyright (C) 2004,2011 Andras Varga
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program; if not, see <http://www.gnu.org/licenses/>.
//


#include "UDPBasicApp.h"
#include "IPv4InterfaceData.h"
#include "IInterfaceTable.h"
#include "InterfaceTableAccess.h"
#include "IPvXAddressResolver.h"
#include "NodeOperations.h"
#include "UDPControlInfo_m.h"
#include "DataPacket_m.h"
#include <utility>
#include <string>

#pragma GCC diagnostic ignored "-Wwrite-strings"

Define_Module(UDPBasicApp);

simsignal_t UDPBasicApp::sentPkSignal = SIMSIGNAL_NULL;
simsignal_t UDPBasicApp::rcvdPkSignal = SIMSIGNAL_NULL;

UDPBasicApp::UDPBasicApp()
{
    selfMsg = NULL;
}

UDPBasicApp::~UDPBasicApp()
{
    cancelAndDelete(selfMsg);
    cancelAndDelete(timeoutMsg);
    cancelAndDelete(addData);
    Logger::getInstance().trace("Bus %-3d | %d packets left in queue\n",id,packetQueue.size());
    while(packetQueue.size() > 0){
        DataPacket *p = packetQueue.front();
        packetQueue.pop();
        delete p;
    }
}

void UDPBasicApp::initialize(int stage)
{
    AppBase::initialize(stage);

    // because of IPvXAddressResolver, we need to wait until interfaces are registered,
    // address auto-assignment takes place etc.
    if (stage == 0)
    {
        Logger::getInstance().setLevel(Logger::INFO);
        numSent = 0;
        numDropped = 0;
        numReceived = 0;
        sequenceNumber = 0;
        lastSend = -1;
        insertInOrder = false;
        WATCH(numSent);
        WATCH(numDropped);
        WATCH(numReceived);
        sentPkSignal = registerSignal("sentPk");
        rcvdPkSignal = registerSignal("rcvdPk");

        logLocation = (char*)par("logLocation").stringValue();
        Logger::getInstance().setLocation(logLocation);
        queueSize = par("queueSize");
        localPort = par("localPort");
        destPort = par("destPort");
        startTime = par("startTime").doubleValue();
        stopTime = par("stopTime").doubleValue();
        apTimeStart = -2;
        apTimeEnd = -1;
        if (stopTime >= SIMTIME_ZERO && stopTime < startTime)
            error("Invalid startTime/stopTime parameters");
        selfMsg = new cMessage("sendTimer");
        addData = new cMessage("addData");
        timeoutMsg = new cMessage("timeout");

        cModule* p = this->getParentModule();
        id = p->par("id");
        insertInOrder = p->par("insertInOrder");
    }
}

void UDPBasicApp::finish()
{
    recordScalar("packets generated", numSent);
    recordScalar("packets dropped",numDropped);
    recordScalar("packets received", numReceived);
    AppBase::finish();
}

void UDPBasicApp::setSocketOptions()
{
    int timeToLive = par("timeToLive");
    if (timeToLive != -1){
        apSocket.setTimeToLive(timeToLive);
        busSocket.setTimeToLive(timeToLive);
    }

    int typeOfService = par("typeOfService");
    if (typeOfService != -1){
        apSocket.setTypeOfService(typeOfService);
        busSocket.setTypeOfService(typeOfService);
    }

    const char *multicastInterface = par("multicastInterface");
    if (multicastInterface[0])
    {
        IInterfaceTable *ift = InterfaceTableAccess().get(this);
        InterfaceEntry *ie = ift->getInterfaceByName(multicastInterface);
        if (!ie){
            throw cRuntimeError("Wrong multicastInterface setting: no interface named \"%s\"", multicastInterface);
        }
        apSocket.setMulticastOutputInterface(ie->getInterfaceId());
        busSocket.setMulticastOutputInterface(ie->getInterfaceId());
    }

    apSocket.setBroadcast(false);
    busSocket.setBroadcast(true);

    apSocket.joinLocalMulticastGroups();
    busSocket.joinLocalMulticastGroups();

    busSocket.setMulticastOutputInterface(2);
    apSocket.setMulticastOutputInterface(2);
}

IPvXAddress UDPBasicApp::chooseDestAddr()
{
    int k = intrand(destAddresses.size());
    return destAddresses[k];
}

void UDPBasicApp::updateTimer(){
    Logger::getInstance().trace("Bus %-3d | Updating timer\n",id);
    int currentTimeInSeconds = simTime().inUnit(SIMTIME_S);
    if(apTimeEnd <= currentTimeInSeconds){
        Logger::getInstance().trace("Bus %-3d | Moved out of range of AP\n",id);
        if(aptimes.size() < 2){
            apTimeStart = 99999999; //Never hits an AP
            apTimeEnd = 99999999;
        } else {
            apTimeStart = aptimes.front();
            aptimes.pop();
            apTimeEnd = aptimes.front();
            aptimes.pop();
        }
    }
    if(apTimeStart <= currentTimeInSeconds && apTimeEnd > currentTimeInSeconds){
        Logger::getInstance().trace("Bus %-3d | In range of AP\n",id);
    } else {
        Logger::getInstance().trace("Bus %-3d | Time to AP: %d\n",id,calculateTimeToAP());
    }
}

int UDPBasicApp::calculateTimeToAP(){
    int currentTimeInSeconds = simTime().inUnit(SIMTIME_S);
    Logger::getInstance().trace("Bus %-3d | Current time: %d\n",id,currentTimeInSeconds);
    if(currentTimeInSeconds >= apTimeStart && currentTimeInSeconds < apTimeEnd){
        return 0;
    }
    int calculatedTimeToAP = apTimeStart - currentTimeInSeconds;
    Logger::getInstance().trace("Bus %-3d | Calculated time to AP: %d\n",id,calculatedTimeToAP);
    return calculatedTimeToAP;
}

DataPacket* UDPBasicApp::createBroadcastPacket(DataPacket * p){
    Logger::getInstance().trace("Bus %-3d | Create Broadcast packet\n",id);
    DataPacket* msg = new DataPacket();
    msg->setDebugMessage("BROADCAST");
    msg->setTimestamp(p->getTimestamp());
    msg->setTemperature(p->getTemperature());
    msg->setBusid(p->getBusid());
    msg->setUuid(p->getUuid());
    msg->setBroadcastPacket(true);
    msg->setIsFromAp(false);
    msg->setTimeToAp(calculateTimeToAP());
    return msg;
}

DataPacket* UDPBasicApp::copyPacket(DataPacket * p){
    Logger::getInstance().trace("Bus %-3d | Copy packet\n",id);
    DataPacket* msg = new DataPacket();
    msg->setDebugMessage(p->getDebugMessage());
    msg->setTimestamp(p->getTimestamp());
    msg->setTemperature(p->getTemperature());
    msg->setBusid(p->getBusid());
    msg->setUuid(p->getUuid());
    msg->setBroadcastPacket(false); //Should always be false unless explicitly set
    msg->setTimeToAp(calculateTimeToAP());
    return msg;
}

DataPacket* UDPBasicApp::generateMessage(char* debugString){
    Logger::getInstance().trace("Bus %-3d | Generating packet\n",id);
    DataPacket* msg = new DataPacket();
    msg->setDebugMessage(debugString);
    msg->setTimestamp(simTime());
    msg->setTemperature(4);
    msg->setBusid(id);
    msg->setUuid(sequenceNumber++);
    msg->setBroadcastPacket(false);
    return msg;
}

void UDPBasicApp::sendPacket()
{
    Logger::getInstance().trace("Bus %-3d | sendPacket()\n",id);
    if(!packetQueue.empty()){
        DataPacket *p = copyPacket(packetQueue.front());
        Logger::getInstance().info("Bus %-3d | Sending packet with sequence %d, origin id %d\n",id,p->getUuid(),p->getBusid());
        IPvXAddress destAddr = chooseDestAddr();
        lastSend = p->getUuid();
        p->setSendingBusid(id);
        p->removeControlInfo();
        emit(sentPkSignal, p);
        apSocket.sendTo(p, destAddr, destPort);

        //Only send if we are going to run out of space before we get to the next AP (plus 5 minute error zone)
        if((queueSize - packetQueue.size()) < calculateTimeToAP()){
            Logger::getInstance().info("Bus %-3d | Broadcasting packet with sequence %d, origin id %d\n",id,p->getUuid(),p->getBusid());
            DataPacket *q = createBroadcastPacket(p);
            q->setSendingBusid(id);
            q->removeControlInfo();
            busSocket.sendTo(q,broadcastAddress,destPort+1);
        }

        cancelEvent(timeoutMsg);
        scheduleAt(simTime()+0.5,timeoutMsg);
    } else {
        Logger::getInstance().trace("Bus %-3d | Packet queue empty\n",id);
    }
}

void UDPBasicApp::broadcastResponsePacket(DataPacket *p)
{
    Logger::getInstance().trace("Bus %-3d | sendResponsePacket()\n",id);
    Logger::getInstance().info("Bus %-3d | Sending response packet with sequence %d\n",id,p->getUuid());
    p->setSendingBusid(id);
    p->removeControlInfo();
    emit(sentPkSignal, p);
    busSocket.sendTo(p,broadcastAddress,destPort+1);

    //We don't bother checking anything. Duplicates can be found in the database.
}

void UDPBasicApp::processStart()
{
    Logger::getInstance().trace("Bus %-3d | processStart()\n",id);

    IInterfaceTable *inet_ift;
    inet_ift = InterfaceTableAccess().get();

    IPv4Address temp;

    for (int32 i=0; i<inet_ift->getNumInterfaces(); ++i){
        if (inet_ift->getInterface(i)->ipv4Data()!=NULL){
            temp = inet_ift->getInterface(i)->ipv4Data()->getIPAddress();
        }
    }

    apSocket.setOutputGate(gate("udpOut"));
    apSocket.bind(localPort);
    busSocket.setOutputGate(gate("udpOut"));
    busSocket.bind(temp,localPort+1);
    setSocketOptions();

    const char *destAddrs = par("destAddresses");
    cStringTokenizer iptokenizer(destAddrs);
    const char *token;

    IPvXAddressResolver().tryResolve("224.0.0.1", broadcastAddress);
    if(broadcastAddress.isUnspecified()){
        EV << "cannot resolve broadcast address" << endl;
        printf("FAIL\n");
    }

    while ((token = iptokenizer.nextToken()) != NULL) {
        IPvXAddress result;
        IPvXAddressResolver().tryResolve(token, result);
        if (result.isUnspecified())
            EV << "cannot resolve destination address: " << token << endl;
        else
            destAddresses.push_back(result);
    }

    const char* positionstr = par("positions");
    cStringTokenizer lltokenizer(positionstr);

    while ((token = lltokenizer.nextToken()) != NULL) {
        int t = atoi(token);
        aptimes.push(t);
    }
    updateTimer();
}


void UDPBasicApp::processStop()
{
    apSocket.close();
    busSocket.close();
}

void UDPBasicApp::addPacketToQueue(DataPacket *p){
    Logger::getInstance().trace("Bus %-3d | Adding packet to queue\n",id);
    numSent++;

    if(p->getBusid() != id && insertInOrder){
        //Remove everything in the swap queue (just in case)
        while(swapQueue.size()){
            swapQueue.pop();
        }

        //Move everything into the swap queue
        while(packetQueue.size()){
            swapQueue.push(packetQueue.front());
            packetQueue.pop();
        }

        //Move everything back
        if(packetQueue.size() == 0){
            packetQueue.push(p);
        } else {
            while(packetQueue.size()){
                DataPacket* q = swapQueue.front();
                if(p != NULL && p->getTimestamp() < q->getTimestamp()){
                    packetQueue.push(p);
                    p = NULL;
                }
                packetQueue.push(q);
                swapQueue.pop();
            }
        }
    } else {
        packetQueue.push(p);
    }

    if((queueSize != -1) && (packetQueue.size() > queueSize)){
        DataPacket *old = packetQueue.front();
        Logger::getInstance().info("Bus %-3d | Dropped packet %d from Bus %-3d\n",id,old->getUuid(),old->getSendingBusid());
        packetQueue.pop();
        delete old;
        numDropped++;
    }
    if(packetQueue.size() == 1){
        sendPacket();
    }
}


void UDPBasicApp::handleMessageWhenUp(cMessage *msg)
{
    Logger::getInstance().trace("Bus %-3d | handleMessage\n", id);
    if (msg->isSelfMessage())
    {
        Logger::getInstance().trace("Bus %-3d | isSelfMessage()\n", id);
        if(msg == selfMsg){
            Logger::getInstance().trace("Bus %-3d | Got self message\n",id);
            switch (selfMsg->getKind()) {
                case START:     processStart(); break;
                case SEND:      sendPacket(); break;
                case STOP:      processStop(); break;
                default: throw cRuntimeError("Bus %-3d | Invalid kind %d in self message", id, (int)selfMsg->getKind());
            }
        } else if (msg == addData) {
            Logger::getInstance().trace("Bus %-3d | Adding data\n",id);
            updateTimer();
            DataPacket *p = generateMessage((char*)"debugstr");
            addPacketToQueue(p);
            scheduleAt(simTime()+1,addData);
            Logger::getInstance().trace("Bus %-3d | Adding data in 1 second\n",id);
        } else if (msg == timeoutMsg){
            Logger::getInstance().trace("Bus %-3d | Packet timed out. Resending\n",id);
            sendPacket();
        } else {
            Logger::getInstance().error("Bus %-3d | GOT WEIRD MESSAGE\n", id);
        }
    }
    else if (msg->getKind() == UDP_I_DATA)
    {
        Logger::getInstance().trace("Bus %-3d | DATA\n", id);
        // process incoming packet
        processPacket(PK(msg));
    }
    else if (msg->getKind() == UDP_I_ERROR)
    {
        Logger::getInstance().error("Bus %-3d | Error\n", id);
        EV << "Ignoring UDP error report\n";
        delete msg;
    }
    else
    {
        error("Unrecognized message (%s)%s", msg->getClassName(), msg->getName());
    }

    if (ev.isGUI())
    {
        char buf[40];
        sprintf(buf, "rcvd: %d pks\nsent: %d pks", numReceived, numSent);
        getDisplayString().setTagArg("t", 0, buf);
    }
}

void UDPBasicApp::processPacket(cPacket *pk)
{
    Logger::getInstance().trace("Bus %-3d | processPacket()\n",id);
    emit(rcvdPkSignal, pk);
    EV << "Received packet: " << UDPSocket::getReceivedPacketInfo(pk) << endl;
    if(dynamic_cast<DataPacket *>(pk)){
        DataPacket *p = check_and_cast<DataPacket *>(pk);
        Logger::getInstance().trace("Bus %-3d | Packet -> (UUID,BusId,timeToAP),(%d,%d,%d)\n",id,p->getUuid(),p->getSendingBusid(),p->getTimeToAp());
        if(p->getIsResponsePacket()){
            if(p->getIsFromAp()){
                Logger::getInstance().info("Bus %-3d | Got response packet from AP\n",id);
            } else {
                Logger::getInstance().info("Bus %-3d | Got response packet from bus\n",id);
            }
            numReceived++;
            if(p->getSendingBusid() == id && p->getUuid() == lastSend){
                //This is a response to one of our previous packets
                cancelEvent(timeoutMsg);
                Logger::getInstance().info("Bus %-3d | Was valid sequence. Timeout cancelled.\n",id);
                if (selfMsg){
                    cancelEvent(selfMsg);
                    Logger::getInstance().trace("Bus %-3d | Cancelled self message\n",id);
                }
                if(packetQueue.size() > 0){
                    DataPacket *old = packetQueue.front();
                    packetQueue.pop();
                    delete old;
                    sendPacket();
                }
            } else {
                if(p->getSendingBusid() != id){
                    Logger::getInstance().info("Bus %-3d | Received a response for Bus %-3d\n",id,p->getSendingBusid());
                } else {
                    Logger::getInstance().info("Bus %-3d | Received a response with invalid sequence number.\n",id);
                }
            }
        } else {
            //This is a data packet
            if(p->getBroadcastPacket() && p->getSendingBusid() != id){
                Logger::getInstance().info("Bus %-3d | Got a data packet from Bus %-3d\n",id,p->getSendingBusid());
                int timeToNextAp = calculateTimeToAP();

                //Only accept a packet if we will get there before the other one and we have space.
                //TODO Update this to optimise for packet loss
                if(timeToNextAp < p->getTimeToAp()){
                    if(queueSize - packetQueue.size() > calculateTimeToAP()){
                        Logger::getInstance().info("Bus %-3d | Storing data packet from Bus %-3d\n",id,p->getSendingBusid());
                        DataPacket *storedPacket = copyPacket(p);
                        DataPacket *responsePacket = createBroadcastPacket(p);
                        responsePacket->setIsResponsePacket(true);
                        broadcastResponsePacket(responsePacket);
                        addPacketToQueue(storedPacket);
                    } else {
                        Logger::getInstance().info("Bus %-3d | Discarding data packet from Bus %-3d. Time to AP: %d, Bus %-3d time to AP: %d\n",id,p->getSendingBusid(), timeToNextAp,p->getSendingBusid(),p->getTimeToAp());
                        Logger::getInstance().info("Bus %-3d | Discarding data packet from Bus %-3d. Time to AP: %d, Queue Capacity: %d\n",id,p->getSendingBusid(), timeToNextAp,queueSize - packetQueue.size());
                    }
                } else {
                    Logger::getInstance().info("Bus %-3d | Discarding data packet from Bus %-3d. Time to AP: %d, Bus %-3d time to AP: %d\n",id,p->getSendingBusid(), timeToNextAp,p->getSendingBusid(),p->getTimeToAp());
                }
            } else {
                if(!p->getBroadcastPacket()){
                    Logger::getInstance().trace("Bus %-3d | Received a data packet that was NOT a broadcast packet. THIS SHOULD NEVER HAPPEN.\n",id);
                } else {
                    Logger::getInstance().trace("Bus %-3d | Received its own data packet\n",id);
                }
            }
        }
        p = NULL;
    }
    delete pk;
}

bool UDPBasicApp::startApp(IDoneCallback *doneCallback)
{
    Logger::getInstance().trace("Bus %-3d | startApp()\n",id);
    simtime_t start = std::max(startTime, simTime());
    if ((stopTime < SIMTIME_ZERO) || (start < stopTime) || (start == stopTime && startTime == stopTime))
    {
        selfMsg->setKind(START);
        scheduleAt(start, selfMsg);
        Logger::getInstance().trace("Bus %-3d | Scheduled start\n",id);
    }
    int randomInt = rand();
    float randomFloat = (float)randomInt;
    float randMax = (float)RAND_MAX;
    float randomTime = randomFloat/randMax;
    scheduleAt(start+randomTime, addData);
    Logger::getInstance().trace("Bus %-3d | Scheduled first data gather\n",id);
    return true;
}

bool UDPBasicApp::stopApp(IDoneCallback *doneCallback)
{
    Logger::getInstance().trace("Bus %-3d | stopApp()\n",id);
    if (selfMsg){
        cancelEvent(selfMsg);
        cancelEvent(timeoutMsg);
        cancelEvent(addData);
    }
    //TODO if(socket.isOpened()) socket.close();
    return true;
}

bool UDPBasicApp::crashApp(IDoneCallback *doneCallback)
{
    Logger::getInstance().trace("Bus %-3d | crashApp()\n",id);
    if (selfMsg){
        cancelEvent(selfMsg);
        cancelEvent(timeoutMsg);
        cancelEvent(addData);
    }
    return true;
}

