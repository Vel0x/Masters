package org.mixim.examples.Buses;

import inet.base.NotificationBoard;
import inet.networklayer.autorouting.ipv4.HostAutoConfigurator;
import inet.networklayer.common.InterfaceTable;
import inet.networklayer.ipv4.RoutingTable;
import inet.transport.udp.UDP;
import inet.nodes.inet.NetworkLayer;
import inet.linklayer.ieee80211.Ieee80211Nic;

module Sink extends inet.nodes.inet.StandardHost
{
    parameters:
        @node();
        @labels(node);
		@display("i=device/pc2");
	

}




