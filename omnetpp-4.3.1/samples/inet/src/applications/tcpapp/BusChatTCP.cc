//
// Copyright (C) 2004 Andras Varga
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


#include "BusChatTCP.h"
#include "NodeOperations.h"
#include "ModuleAccess.h"

#define MSGKIND_CONNECT  0
#define MSGKIND_SEND     1


Define_Module(BusChatTCP);

BusChatTCP::BusChatTCP()
{
    timeoutMsg = NULL;
}

BusChatTCP::~BusChatTCP()
{
    cancelAndDelete(timeoutMsg);
}

void BusChatTCP::initialize(int stage)
{
    BusChatTCPLower::initialize(stage);
    if (stage != 3)
        return;

    cModule* p = this->getParentModule();
    id = p->par("id");

    packetCounter = 0;
    earlySend = false;  // TBD make it parameter
    WATCH(numRequestsToSend);
    WATCH(earlySend);

    startTime = par("startTime");
    stopTime = par("stopTime");
    if (stopTime >= SIMTIME_ZERO && stopTime < startTime)
        error("Invalid startTime/stopTime parameters");

    timeoutMsg = new cMessage("timer");
    nodeStatus = dynamic_cast<NodeStatus *>(findContainingNode(this)->getSubmodule("status"));

    if (isNodeUp()) {
        printf("Scheduling timeout message\n");
        timeoutMsg->setKind(MSGKIND_CONNECT);
        scheduleAt(startTime, timeoutMsg);
    } else {
        printf("Node is down. Not starting TCP\n");
    }
}

bool BusChatTCP::isNodeUp()
{
    return !nodeStatus || nodeStatus->getState() == NodeStatus::UP;
}

bool BusChatTCP::handleOperationStage(LifecycleOperation *operation, int stage, IDoneCallback *doneCallback)
{
    Enter_Method_Silent();
    if (dynamic_cast<NodeStartOperation *>(operation)) {
        if (stage == NodeStartOperation::STAGE_APPLICATION_LAYER) {
            simtime_t now = simTime();
            simtime_t start = std::max(startTime, now);
            if (timeoutMsg && ((stopTime < SIMTIME_ZERO) || (start < stopTime) || (start == stopTime && startTime == stopTime)))
            {
                timeoutMsg->setKind(MSGKIND_CONNECT);
                scheduleAt(start, timeoutMsg);
            }
        }
    }
    else if (dynamic_cast<NodeShutdownOperation *>(operation)) {
        if (stage == NodeShutdownOperation::STAGE_APPLICATION_LAYER) {
            cancelEvent(timeoutMsg);
            if (socket.getState() == TCPSocket::CONNECTED || socket.getState() == TCPSocket::CONNECTING || socket.getState() == TCPSocket::PEER_CLOSED)
                close();
            // TODO: wait until socket is closed
        }
    }
    else if (dynamic_cast<NodeCrashOperation *>(operation)) {
        if (stage == NodeCrashOperation::STAGE_CRASH)
            cancelEvent(timeoutMsg);
    }
    else throw cRuntimeError("Unsupported lifecycle operation '%s'", operation->getClassName());
    return true;
}

DataPacket* BusChatTCP::generateMessage(char* debugString){
    DataPacket* msg = new DataPacket();
    msg->setDebugMessage(debugString);
    msg->setTimestamp(simTime());
    msg->setTemperature(4);
    msg->setBusid(id);
    msg->setUuid(packetCounter++);

    return msg;
}

void BusChatTCP::sendRequest()
{
    printf("Sending Request\n");
    DataPacket *p = generateMessage((char*)"debug");
    sendPacket(p);
}

void BusChatTCP::handleTimer(cMessage *msg)
{
    printf("handleTimer()\n");
    switch (msg->getKind())
    {
        case MSGKIND_CONNECT:
            printf("starting session\n");
            EV << "starting session\n";
            connect(); // active OPEN

            // significance of earlySend: if true, data will be sent already
            // in the ACK of SYN, otherwise only in a separate packet (but still
            // immediately)
            if (earlySend)
                sendRequest();
            break;

        case MSGKIND_SEND:
            printf("Sending Message\n");
           sendRequest();
           numRequestsToSend--;
           // no scheduleAt(): next request will be sent when reply to this one
           // arrives (see socketDataArrived())
           break;

        default:
            throw cRuntimeError("Invalid timer msg: kind=%d", msg->getKind());
    }
}

void BusChatTCP::socketEstablished(int connId, void *ptr)
{
    printf("Socket Established\n");
    BusChatTCPLower::socketEstablished(connId, ptr);

    // determine number of requests in this session
    numRequestsToSend = (long) par("numRequestsPerSession");
    if (numRequestsToSend < 1)
        numRequestsToSend = 1;

    // perform first request if not already done (next one will be sent when reply arrives)
    if (!earlySend)
        sendRequest();

    numRequestsToSend--;
}

void BusChatTCP::rescheduleOrDeleteTimer(simtime_t d, short int msgKind)
{
    printf("rescheduleOrDeleteTimer()\n");
    cancelEvent(timeoutMsg);

    if (stopTime < SIMTIME_ZERO || d < stopTime)
    {
        timeoutMsg->setKind(msgKind);
        scheduleAt(d, timeoutMsg);
    }
    else
    {
        delete timeoutMsg;
        timeoutMsg = NULL;
    }
}

void BusChatTCP::socketDataArrived(int connId, void *ptr, cPacket *msg, bool urgent)
{
    printf("socketDataArrived()\n");
    BusChatTCPLower::socketDataArrived(connId, ptr, msg, urgent);

    if (numRequestsToSend > 0)
    {
        EV << "reply arrived\n";

        if (timeoutMsg)
        {
            simtime_t d = simTime() + (simtime_t) par("thinkTime");
            rescheduleOrDeleteTimer(d, MSGKIND_SEND);
        }
    }
    else if (socket.getState() != TCPSocket::LOCALLY_CLOSED)
    {
        EV << "reply to last request arrived, closing session\n";
        close();
    }
}

void BusChatTCP::socketClosed(int connId, void *ptr)
{
    printf("socketClosed()\n");
    BusChatTCPLower::socketClosed(connId, ptr);

    // start another session after a delay
    if (timeoutMsg)
    {
        simtime_t d = simTime() + (simtime_t) par("idleInterval");
        rescheduleOrDeleteTimer(d, MSGKIND_CONNECT);
    }
}

void BusChatTCP::socketFailure(int connId, void *ptr, int code)
{
    printf("socketFailure()\n");
    BusChatTCPLower::socketFailure(connId, ptr, code);

    // reconnect after a delay
    if (timeoutMsg)
    {
        simtime_t d = simTime() + (simtime_t) par("reconnectInterval");
        rescheduleOrDeleteTimer(d, MSGKIND_CONNECT);
    }
}

