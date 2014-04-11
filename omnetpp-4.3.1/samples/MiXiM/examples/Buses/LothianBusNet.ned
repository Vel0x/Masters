package org.mixim.examples.Buses;

import inet.nodes.ethernet.EtherSwitch;
import inet.world.radio.ChannelControl;
import ned.DatarateChannel;
import inet.networklayer.autorouting.ipv4.IPv4NetworkConfigurator;
import inet.nodes.inet.Router;
import inet.nodes.ethernet.Eth100M;

channel Eth100M100km extends Eth100M
{
    @display("ls=,0");
    length = 100000m;

}

network LothianBusNet
{
    parameters:
        @display("bgb=30000,20000;");
        double playgroundLatitude = default(56.0); // geographic position of the playground's north-west corner
        double playgroundLongitude = default(-3.4); // geographic position of the playground's north-west corner
        double playgroundWidth @unit("m") = default(30000m);  // the E-W size of playground 
        double playgroundHeight @unit("m") = default(20000m); // the N-S size of playground
        int numHosts; // total number of hosts in the network  
        int numAps = default(1); //total number of APs 


    submodules:
        channelControl: ChannelControl {
            parameters:
                @display("p=61,46");
        }

        configurator: IPv4NetworkConfigurator {
            parameters:
                assignDisjunctSubnetAddresses = false;
                @display("p=0,100");
        }
        ap[numAps]: AP;
        sink: Sink {
            @display("p=6700,7000;i=device/server_l");
        }
        router: Router {
            @display("p=6600,6900");
        }
        bus[numHosts]: Bus;
        switch: EtherSwitch;
    connections allowunconnected:
        for i=0..numAps-1 {
            ap[i].ethg++ <--> Eth100M100km <--> switch.ethg++;
        }
        switch.ethg++ <--> Eth100M <--> router.ethg++;
        sink.ethg++ <--> Eth100M <--> router.ethg++;
}


