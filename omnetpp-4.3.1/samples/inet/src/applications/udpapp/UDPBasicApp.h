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


#ifndef __INET_UDPBASICAPP_H
#define __INET_UDPBASICAPP_H

#include <vector>
#include <queue>

#include "INETDefs.h"

#include "AppBase.h"
#include "UDPSocket.h"
#include "DataPacket_m.h"
#include "Logger.h"


/**
 * UDP application. See NED for more info.
 */
class INET_API UDPBasicApp : public AppBase
{
  protected:
    enum SelfMsgKinds { START = 1, SEND, STOP, TIMEOUT };

    UDPSocket apSocket;
    UDPSocket busSocket;
    int localPort, destPort;
    std::vector<IPvXAddress> destAddresses;
    IPvXAddress broadcastAddress;
    std::queue<DataPacket*> packetQueue;
    std::queue<DataPacket*> swapQueue;
    simtime_t startTime;
    simtime_t stopTime;
    cMessage *selfMsg;
    cMessage *addData;
    cMessage *timeoutMsg;
    bool insertInOrder;
    int lastSend;
    int sequenceNumber;
    int id;
    int queueSize;
    std::queue<int> aptimes;
    char* logLocation;
    int apTimeStart;
    int apTimeEnd;

    // statistics
    int numSent;
    int numReceived;
    int numDropped;

    static simsignal_t sentPkSignal;
    static simsignal_t rcvdPkSignal;

    // chooses random destination address
    virtual IPvXAddress chooseDestAddr();
    virtual void sendPacket();
    virtual void broadcastResponsePacket(DataPacket* p);
    virtual void processPacket(cPacket *msg);
    virtual void setSocketOptions();

  public:
    UDPBasicApp();
    ~UDPBasicApp();

  protected:
    virtual int numInitStages() const {return 4;}
    virtual void initialize(int stage);
    virtual void handleMessageWhenUp(cMessage *msg);
    virtual void finish();
    DataPacket* copyPacket(DataPacket* p);
    DataPacket* createBroadcastPacket(DataPacket * p);
    DataPacket* generateMessage(char* debugString);
    int calculateTimeToAP();
    void updateTimer();
    virtual void processStart();
    virtual void processStop();
    void addPacketToQueue(DataPacket *p);

    //AppBase:
    bool startApp(IDoneCallback *doneCallback);
    bool stopApp(IDoneCallback *doneCallback);
    bool crashApp(IDoneCallback *doneCallback);
};

#endif

