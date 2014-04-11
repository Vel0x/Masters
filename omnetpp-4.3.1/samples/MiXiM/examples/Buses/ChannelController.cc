//
// This file is part of an OMNeT++/OMNEST simulation example.
//
// Copyright (C) 2010 OpenSim Ltd.
//
// This file is distributed WITHOUT ANY WARRANTY. See the file
// `license' for details on this and other legal matters.
//

#include "ChannelController.h"

Define_Module(ChannelController);

ChannelController *ChannelController::instance = NULL;

ChannelController::ChannelController()
{
    if (instance)
        error("There can be only one ChannelController instance in the network");
    instance = this;
}

ChannelController::~ChannelController()
{
    instance = NULL;
}

ChannelController *ChannelController::getInstance()
{
    if (!instance)
        throw cRuntimeError("ChannelController::getInstance(): there is no ChannelController module in the network");
    return instance;
}

int ChannelController::findMobileNode(IMobileNode* p)
{
    for (int i=0; i<(int)nodeList.size(); i++)
        if (nodeList[i] == p)
            return i;
    return -1;
}

void ChannelController::addMobileNode(IMobileNode* p)
{
    if (findMobileNode(p) == -1)
        nodeList.push_back(p);
}

void ChannelController::removeMobileNode(IMobileNode* p)
{
    int k = findMobileNode(p);
    if (k != -1)
        nodeList.erase(nodeList.begin()+k);
}

void ChannelController::initialize()
{
    playgroundLat = simulation.getSystemModule()->par("playgroundLatitude");
    playgroundLon = simulation.getSystemModule()->par("playgroundLongitude");
}

void ChannelController::handleMessage(cMessage *msg)
{
    error("This module does not process messages");
}


