package org.mixim.examples.Buses;
//
// This file is part of an OMNeT++/OMNEST simulation example.
//
// Copyright (C) 2010 OpenSim Ltd.
//
// This file is distributed WITHOUT ANY WARRANTY. See the file
// `license' for details on this and other legal matters.
//


//
// A mobile node that travels at a constant speed, with the heading
// changing by a random value at each update. Able to display
// its position, trail, transmission range etc. via KML.
//

import inet.mobility.IMobility;

simple BusMobility like IMobility
{
    parameters:
        @display("i=abstract/person");
        double timeStep @unit("s") = default(1s); // the time granularity of movement calculation
}


