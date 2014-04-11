package org.mixim.examples.Buses;

import inet.base.NotificationBoard;
import inet.networklayer.autorouting.ipv4.HostAutoConfigurator;
import inet.networklayer.common.InterfaceTable;
import inet.networklayer.ipv4.RoutingTable;
import inet.transport.udp.UDP;
import inet.nodes.inet.NetworkLayer;
import inet.linklayer.ieee80211.Ieee80211Nic;
import inet.linklayer.IWiredNic;

module AP extends inet.nodes.wireless.AccessPoint
{
    parameters:
        @node();
        @labels(node);
        @display("i=device/accesspoint");
        double x @unit("") = default(0); // the starting position
        double y @unit("") = default(0); // the starting position
        int id = default(0); // the id of this AP


		

}




