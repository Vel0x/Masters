package org.mixim.examples.Buses;

import inet.base.NotificationBoard;
import inet.networklayer.autorouting.ipv4.HostAutoConfigurator;
import inet.networklayer.common.InterfaceTable;
import inet.networklayer.ipv4.RoutingTable;
import inet.transport.udp.UDP;
import inet.transport.tcp.TCP;
import inet.nodes.inet.NetworkLayer;
import inet.linklayer.ieee80211.Ieee80211Nic;

import ned.DatarateChannel; 

module Bus extends inet.nodes.inet.WirelessHost
{
    parameters:
        @display("i=device/wifilaptop");
        @node();
        double startX @unit("") = default(0); // the starting coordinates in meter
        double startY @unit("") = default(0); // the starting coordinates in meter
        int id = default(0); // the id of this bus
        bool insertInOrder = default(false);
		numRadios = 2;
		
		
}


