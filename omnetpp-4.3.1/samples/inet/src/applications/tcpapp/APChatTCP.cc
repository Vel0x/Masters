//
// Copyright 2004 Andras Varga
//
// This library is free software, you can redistribute it and/or modify
// it under  the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation;
// either version 2 of the License, or any later version.
// The library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
// See the GNU Lesser General Public License for more details.
//


#include "APChatTCP.h"

#include <ModuleAccess.h>
#include <NodeStatus.h>
#include <TCPSocket.h>
#include "DataPacket_m.h"
#include "GenericAppMsg_m.h"



Define_Module(APChatTCP);

simsignal_t APChatTCP::rcvdPkSignal = SIMSIGNAL_NULL;

void APChatTCP::initialize(int stage)
{
    cSimpleModule::initialize(stage);
    if (stage == 0)
    {
        const char *localAddress = par("localAddress");
        int localPort = par("localPort");

        bytesRcvd = 0;
        WATCH(bytesRcvd);
        rcvdPkSignal = registerSignal("rcvdPk");

        //TODO should use IPvXAddressResolver in stage 3
        TCPSocket socket;
        socket.setOutputGate(gate("tcpOut"));
        socket.readDataTransferModePar(*this);
        socket.bind(localAddress[0] ? IPvXAddress(localAddress) : IPvXAddress(), localPort);
        socket.listen();
    }
    else if (stage == 1)
    {
        bool isOperational;
        NodeStatus *nodeStatus = dynamic_cast<NodeStatus *>(findContainingNode(this)->getSubmodule("status"));
        isOperational = (!nodeStatus) || nodeStatus->getState() == NodeStatus::UP;
        if (!isOperational)
            throw cRuntimeError("This module doesn't support starting in node DOWN state");
    }
}

void APChatTCP::handleMessage(cMessage *msg)
{
    printf("Handle Message: ");
    if (msg->getKind() == TCP_I_PEER_CLOSED)
    {
        printf("PEER CLOSED\n");
        // we close too
        msg->setName("close");
        msg->setKind(TCP_C_CLOSE);
        send(msg, "tcpOut");
    }
    else if (msg->getKind() == TCP_I_DATA || msg->getKind() == TCP_I_URGENT_DATA)
    {
        printf("DATA\n");
        //printf("Received packet");
        if(dynamic_cast<GenericAppMsg *>(msg)){
            GenericAppMsg *m = check_and_cast<GenericAppMsg *>(msg);
            printf("Bus: %d\n",m->getBusid());
        } else if(dynamic_cast<DataPacket *>(msg)){
            DataPacket *p = check_and_cast<DataPacket *>(msg);
            printf("SINK RECEIVED MESSAGE %d FROM BUS %d\n",p->getUuid(),p->getBusid());
        } else {
            printf("Packet is unknown\n");
        }

        delete msg;

    }
    else
    {
        printf("Dropping message %d\n",msg->getKind());
        // must be data or some kind of indication -- can be dropped
        delete msg;
    }
}

void APChatTCP::finish()
{
}

