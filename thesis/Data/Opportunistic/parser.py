import re
import numpy
from struct import *
import pdb
import sys
from collections import defaultdict
from sets import Set
import cPickle as pickle
import os

class AP(object):

    def __init__(self):
        self.packets_received = defaultdict(Set)
        self.latencies = defaultdict(list)
        self.total_received = 0

    def add_latency(self,bus,packet_num,latency):
        key = packet_num * 1000 + bus
        self.latencies[key].append(latency)
    
    def receive(self,originid,packet_num,latency):
        self.total_received += 1
        self.add_latency(originid,packet_num,latency)
        self.packets_received[originid].add(packet_num)
    
    def get_unique_received(self):
        total = 0
        for id,packets in self.packets_received.iteritems():
            total += len(packets)
        return total
    
    def get_received(self):
        return self.total_received
            
    def get_latency(self):
        current_latencies = []
        for k,v in self.latencies.iteritems():
            current_latencies.append(min(v))
        timediffs = numpy.array(current_latencies)
        return (numpy.mean(timediffs), numpy.std(timediffs))

    

class Bus(object):

    def __init__(self,busid):
        self.busid = busid
        self.packets_dropped = 0
        self.packets_sent = 0
        self.packets_broadcast = 0
        self.packets_received = 0
        self.packets_ignored_time = 0
        self.packets_ignored_queue = 0
        self.successful_broadcasts = 0
        self.successful_sends = 0
        self.packets_stored = 0
        self.broadcasts_responded = 0
        self.busid = 0
    
    def get_packets_sent(self):
        return self.packets_sent
        
    def get_received_broadcasts(self):
        return self.packets_received
    
    def get_broadcasts(self):
        return self.packets_broadcast
        
    def get_successful_broadcasts(self):
        return self.successful_broadcasts
    
    def get_successful_sends(self):
        return self.successful_sends
        
    def get_packets_stored(self):
        return self.packets_stored
        
    def get_packets_dropped(self):
        return self.packets_dropped
        
    def get_broadcasts_responded(self):
        return self.broadcasts_responded
        
    def get_ignored_time(self):
        return self.packets_ignored_time
        
    def get_ignored_queue(self):
        return self.packets_ignored_queue
    
    def send(self):
        self.packets_sent += 1
    
    def rec_broadcast(self):
        self.packets_received += 1
    
    def broadcast(self):
        self.packets_broadcast += 1
        
    def successful_broadcast(self):
        self.successful_broadcasts += 1
        
    def successful_send(self):
        self.successful_sends += 1
        
    def store_packet(self):
        self.packets_stored += 1
    
    def drop_packet(self):
        self.packets_dropped += 1
    
    def broadcast_respond(self):
        self.broadcasts_responded += 1
        #This should be the same as packets stored
    
    def ignore_time(self):
        self.packets_ignored_time += 1
        
    def ignore_queue(self):
        self.packets_ignored_time -= 1
        self.packets_ignored_queue += 1
    
    def __str__(self):
        return  str({'id':self.busid})



def read(filename,buses,ap):
    line_count = 33628121
    #line_count = 99091
    #with open(filename) as f:
    #    for line in f:
    #        line_count += 1
    current_line = 0
    with open(filename) as f:
        for line in f:
            if current_line % 10000 == 0:
                sys.stderr.write(str(current_line) + "\t" + str(line_count) + "\n")
            current_line += 1
            matchObj = re.match( r'[0-9]*\.[0-9]* \| Bus ([0-9]*) *\| Sending packet with sequence ([0-9]*), origin id ([0-9]*)', line, re.M|re.S)
            if matchObj:
                busid = int(matchObj.group(1))
                buses[busid].send()
                continue
            matchObj = re.match( r'[0-9]*\.[0-9]* \| Bus ([0-9]*) *\| Dropped packet [0-9]* from Bus [0-9]* *', line, re.M|re.S)
            if matchObj:
                busid = int(matchObj.group(1))
                buses[busid].drop_packet()
                continue
            matchObj = re.match( r'[0-9]*\.[0-9]* \| Bus ([0-9]*) *\| Broadcasting packet with sequence ([0-9]*), origin id ([0-9]*)', line, re.M|re.S)
            if matchObj:
                busid = int(matchObj.group(1))
                buses[busid].broadcast()
                continue
            matchObj = re.match( r'[0-9]*\.[0-9]* \| Bus ([0-9]*) *\| Got a data packet from Bus ([0-9]*)', line, re.M|re.S)
            if matchObj:
                busid = int(matchObj.group(1))
                buses[busid].rec_broadcast()
                continue
            matchObj = re.match( r'[0-9]*\.[0-9]* \| Bus ([0-9]*) *\| Discarding data packet from Bus [0-9]* *. Time to AP: -?[0-9]*, Bus [0-9]* *time to AP: [0-9]*', line, re.M|re.S)
            if matchObj:
                busid = int(matchObj.group(1))
                buses[busid].ignore_time()
                continue
            matchObj = re.match( r'[0-9]*\.[0-9]* \| Bus ([0-9]*) *\| Discarding data packet from Bus ([0-9]*) *. Time to AP: -?[0-9]*, Queue Capacity: [0-9]*', line, re.M|re.S)
            if matchObj:
                busid = int(matchObj.group(1))
                buses[busid].ignore_queue()
                continue
            matchObj = re.match( r'[0-9]*\.[0-9]* \| Bus ([0-9]*) *\| Storing data packet from Bus [0-9]* *', line, re.M|re.S)
            if matchObj:
                busid = int(matchObj.group(1))
                buses[busid].store_packet()
                continue
            matchObj = re.match( r'[0-9]*\.[0-9]* \| Bus ([0-9]*) *\| Sending response packet with sequence [0-9]*', line, re.M|re.S)
            if matchObj:
                busid = int(matchObj.group(1))
                buses[busid].broadcast_respond()
                continue
            matchObj = re.match( r'[0-9]*\.[0-9]* \| Bus ([0-9]*) *\| Got response packet from bus', line, re.M|re.S)
            if matchObj:
                busid = int(matchObj.group(1))
                buses[busid].successful_broadcast()
                continue
            matchObj = re.match( r'[0-9]*\.[0-9]* \| Bus ([0-9]*) *\| Got response packet from AP', line, re.M|re.S)
            if matchObj:
                busid = int(matchObj.group(1))
                buses[busid].successful_send()
                continue
            matchObj = re.match( r'[0-9]*\.[0-9]* \| AP RECV \| SendingBus: ([0-9]*), Packet: ([0-9]*), OriginBus: ([0-9]*), Timediff: ([0-9]*)', line, re.M|re.S)
            if matchObj:
                busid = int(matchObj.group(1))
                ap.receive(int(matchObj.group(3)),int(matchObj.group(2)),int(matchObj.group(4)))
                continue
            matchObj = re.match( r'[0-9]*\.[0-9]* \| Bus ([0-9]*) *\| Was valid sequence. Timeout cancelled.', line, re.M|re.S)
            if matchObj:
                continue
            sys.stderr.write("ERROR:" + line + "\n")
                

def get_count(buses, f):
    count = 0
    for i in range(0,126):
        count += f(buses[i])
    return str(count)
path = "H:\\tmp\\"
filenames = []

for pri in ['true','false']:
    for queue in [10,30,100,1000,2000]:
        filename = "AB50APQ" + str(queue) + "IO" + pri + "-1"
        if os.path.exists(path + filename):
            filenames.append(filename)
        
        
for filename in filenames:    
    buses = {}
    ap = AP()
    for i in range(0,126):
        buses[i] = Bus(i)

    if(os.path.exists("ap.bin") and len(filenames) == 1):
        print "Loading binary"
        ap = pickle.load(open("ap.bin","rb"))
        buses = pickle.load(open("buses.bin","rb"))
        print "Load complete"
    else:
        read(path + filename, buses,ap)
        if len(filenames) == 1:
            pickle.dump(ap,open("ap.bin","wb"))
            pickle.dump(buses,open("buses.bin","wb"))
    
    name = filename
    run = int(filename[-1])
    name = name[:-2]
    priorityqueue = True if filename[-4] == 'u' else False
    if priorityqueue == True:
        name = name[:-4]
    else:
        name = name[:-5]
    name = name[:-2]
    queuesize = int(name.replace("AB50APQ",""))
    latency, stddev = ap.get_latency()
    
    #print latency, stddev
    #print "ap_received", ap.get_received()
    #print "ap_unique_received", ap.get_unique_received()
    #print "get_broadcasts()", get_count(buses, lambda b : b.get_broadcasts())
    #print "get_received_broadcasts()", get_count(buses, lambda b : b.get_received_broadcasts())
    #print "get_broadcasts_responded()", get_count(buses, lambda b : b.get_broadcasts_responded())
    #print "get_successful_broadcasts()", get_count(buses, lambda b : b.get_successful_broadcasts())
    #print "get_packets_sent()", get_count(buses, lambda b : b.get_packets_sent())
    #print "get_successful_sends()", get_count(buses, lambda b : b.get_successful_sends())
    #print "get_packets_stored()", get_count(buses, lambda b : b.get_packets_stored())
    #print "get_packets_dropped()", get_count(buses, lambda b : b.get_packets_dropped())
    #print "get_ignored_time()", get_count(buses, lambda b : b.get_ignored_time())
    #print "get_ignored_queue()", get_count(buses, lambda b : b.get_ignored_queue())


    sys.stdout.write(str(queuesize) + "\t")
    sys.stdout.write("50\t")
    if priorityqueue:
        sys.stdout.write("Yes\t")
    else:
        sys.stdout.write("No\t")
    sys.stdout.write(str(latency) + "\t")
    sys.stdout.write(str(stddev) + "\t")
    sys.stdout.write("1250000\t")
    sys.stdout.write(str(ap.get_received()) + "\t")
    sys.stdout.write(str(ap.get_unique_received()) + "\t")
    sys.stdout.write(get_count(buses, lambda b : b.get_broadcasts()) + "\t")
    sys.stdout.write(get_count(buses, lambda b : b.get_received_broadcasts()) + "\t")
    sys.stdout.write("=J3/I3\t")
    sys.stdout.write(get_count(buses, lambda b : b.get_broadcasts_responded()) + "\t")
    sys.stdout.write(get_count(buses, lambda b : b.get_successful_broadcasts()) + "\t")
    sys.stdout.write("=M3/L3\t")
    sys.stdout.write(get_count(buses, lambda b : b.get_packets_sent()) + "\t")
    sys.stdout.write(get_count(buses, lambda b : b.get_successful_sends()) + "\t")
    sys.stdout.write(get_count(buses, lambda b : b.get_packets_stored()) + "\t")
    sys.stdout.write(get_count(buses, lambda b : b.get_packets_dropped()) + "\t")
    sys.stdout.write(get_count(buses, lambda b : b.get_ignored_time()) + "\t")
    sys.stdout.write(get_count(buses, lambda b : b.get_ignored_queue()) + "\t")
    sys.stdout.write("=S3/T3\t")
    sys.stdout.write("=H3/F3\t")
    sys.stdout.write("?\t")
    sys.stdout.write("=1-(V3+W3)")
    sys.stdout.write("\n")



