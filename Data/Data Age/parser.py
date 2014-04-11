import re
import numpy
from struct import *
import pdb
import sys

class Bus(object):

    def __init__(self,busid):
        self.busid = busid
        self.packets_generated = 0
        self.packets_dropped = 0
        self.packets_sent = 0
        self.packets_delivered = 0
        self.busid = 0
        self.packetsReceived = []

    def increment_generated(self):
        self.packets_generated += 1

    def increment_dropped(self):
        self.packets_dropped += 1

    def increment_sent(self):
        self.packets_sent += 1

    def send(self, packetNum):
        self.increment_sent()

    def receive(self,packetNum):
        if packetNum not in self.packetsReceived:
            self.packetsReceived.append(packetNum)

    def get_generated(self):
        return self.packets_generated
    
    def get_sent(self):
        return self.packets_sent

    def get_dropped(self):
        return self.packets_dropped

    def get_delivered(self):
        return len(self.packetsReceived)

    def __str__(self):
        return  "{'id':" + str(self.busid) + ",'generated':" + str(self.get_generated()) + ",'sent':" + str(self.get_sent()) + ",'dropped':" + str(self.get_dropped()) + ",'delivered':" + str(self.get_delivered()) + "}"

def fixid(i):
    if i >= 0:
        return i
    s = pack('b',i)
    s = unpack('B',s)[0]
    return s


def read(filename,buses):
    timediffs = []
    f = open(filename)
    lines = []
    counter = 1
    for line in f:
        lines.append(line)
    for line in lines:
        #print counter,"of", len(lines)
        counter += 1
        matchObj = re.match( r'Bus ([0-9]*) generated packet', line, re.M|re.S)
        if matchObj:
            #print "Generated: " + matchObj.group()
            busid = fixid(int(matchObj.group(1)))
            buses[busid].increment_generated()
            continue
        matchObj = re.match( r'Bus ([0-9]*) Sending packet with sequence ([0-9]*)', line, re.M|re.S)
        if matchObj:
            #print "Sending: " + matchObj.group()
            busid = fixid(int(matchObj.group(1)))
            buses[busid].send(int(matchObj.group(2)))
            continue
        matchObj = re.match( r'Bus ([0-9]*) dropped packet ([0-9]*)',line,re.M|re.S)
        if matchObj:
            #print "Dropped: " + matchObj.group()
            busid = fixid(int(matchObj.group(1)))
            buses[busid].increment_dropped()
            continue
        matchObj = re.match( r'Bus: (-*[0-9]*), Packet: ([0-9]*), Timediff: ([0-9]*)', line, re.M|re.S)
        if matchObj:
            #print "Received: " + matchObj.group()        
            busid = fixid(int(matchObj.group(1)))
            buses[busid].receive(int(matchObj.group(2)))
            timediffs.append(int(matchObj.group(3)))
    if timediffs == []:
        timediffs = [0]
    timediffs = numpy.array(timediffs)
    return (numpy.mean(timediffs), numpy.std(timediffs))

files = []
#AB50APQ2000P18mWMLogNormalShadowingModel-1
files = ['AB50APQ2000-3.txt']

for fname in files:
    try:
        buses = {}
        for i in range(0,146):
            buses[i] = Bus(i)

        (mean,std) = read(fname, buses)
        packets_sent = 0
        packets_received = 0
        packets_dropped = 0
        packets_generated = 0
    
        for i,b in buses.iteritems():
            packets_sent += b.get_sent()
            packets_received += b.get_delivered()
            packets_dropped += b.get_dropped()
            packets_generated += b.get_generated()
            #print b
    
        #print
        #print fname
        print str(mean) + "\t" + str(std) + "\t" + str(packets_generated) + "\t" + str(packets_sent) + "\t" + str(packets_received) + "\t" + str(packets_dropped)
    except:
        try:
            print str(mean) + "\t" + str(std) + "\t" + str(packets_generated) + "\t" + str(packets_sent) + "\t" + str(packets_received) + "\t" + str(packets_dropped)
        except:
            print "FAIL"