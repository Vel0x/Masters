import re
import numpy
from struct import *
import pdb
import sys
from collections import defaultdict
from sets import Set
import cPickle as pickle
import os
import struct


def read(filename):
    line_count = 33628121
    maxtime = 0
    #line_count = 99091
    #with open(filename) as f:
    #    for line in f:
    #        line_count += 1
    with open(filename) as f:
        with open('output.txt','wb') as out:
            for line in f:
                b = None
                try:
                    matchObj = re.match( r'[0-9]*\.[0-9]* \| Bus ([0-9]*) *\| Sending packet with sequence ([0-9]*), origin id ([0-9]*)', line, re.M|re.S)
                    if matchObj:
                        busid = int(matchObj.group(1))
                        b = struct.pack('BBHB',1,busid,int(matchObj.group(2)),int(matchObj.group(3)))
                        out.write(b)
                        continue
                    matchObj = re.match( r'[0-9]*\.[0-9]* \| Bus ([0-9]*) *\| Dropped packet ([0-9]*) from Bus ([0-9]*) *', line, re.M|re.S)
                    if matchObj:
                        busid = int(matchObj.group(1))
                        b = struct.pack('BBHB',2,busid,int(matchObj.group(2)),int(matchObj.group(3)))
                        out.write(b)
                        continue
                    matchObj = re.match( r'([0-9]*)\.[0-9]* \| Bus ([0-9]*) *\| Broadcasting packet with sequence ([0-9]*), origin id ([0-9]*)', line, re.M|re.S)
                    if matchObj:
                        t = int(matchObj.group(1))
                        if t > maxtime:
                            sys.stderr.write(str(t) + "\n")
                            maxtime = t
                        busid = int(matchObj.group(2))
                        b = struct.pack('BBHB',3,busid,int(matchObj.group(2)),int(matchObj.group(3)))
                        out.write(b)
                        continue
                    matchObj = re.match( r'[0-9]*\.[0-9]* \| Bus ([0-9]*) *\| Got a data packet from Bus ([0-9]*)', line, re.M|re.S)
                    if matchObj:
                        busid = int(matchObj.group(1))
                        b = struct.pack('BBB',4,busid,int(matchObj.group(2)))
                        out.write(b)
                        continue
                    matchObj = re.match( r'[0-9]*\.[0-9]* \| Bus ([0-9]*) *\| Discarding data packet from Bus ([0-9]*) *. Time to AP: (-?[0-9]*), Bus ([0-9]*) *time to AP: ([0-9]*)', line, re.M|re.S)
                    if matchObj:
                        busid = int(matchObj.group(1))
                        b = struct.pack('BBBiBI',5,busid,int(matchObj.group(2)),int(matchObj.group(3)),int(matchObj.group(4)) ,int(matchObj.group(5)))
                        out.write(b)
                        continue
                    matchObj = re.match( r'[0-9]*\.[0-9]* \| Bus ([0-9]*) *\| Discarding data packet from Bus ([0-9]*) *. Time to AP: (-?[0-9]*), Queue Capacity: ([0-9]*)', line, re.M|re.S)
                    if matchObj:
                        busid = int(matchObj.group(1))
                        b = struct.pack('BBii',6,busid,int(matchObj.group(2)),int(matchObj.group(3)))
                        out.write(b)
                        continue
                    matchObj = re.match( r'[0-9]*\.[0-9]* \| Bus ([0-9]*) *\| Storing data packet from Bus ([0-9]*) *', line, re.M|re.S)
                    if matchObj:
                        busid = int(matchObj.group(1))
                        b = struct.pack('BBB',7,busid,int(matchObj.group(2)))
                        out.write(b)
                        continue
                    matchObj = re.match( r'[0-9]*\.[0-9]* \| Bus ([0-9]*) *\| Sending response packet with sequence ([0-9]*)', line, re.M|re.S)
                    if matchObj:
                        busid = int(matchObj.group(1))
                        b = struct.pack('BBB',8,busid,int(matchObj.group(2)))
                        out.write(b)
                        continue
                    matchObj = re.match( r'[0-9]*\.[0-9]* \| Bus ([0-9]*) *\| Got response packet from bus', line, re.M|re.S)
                    if matchObj:
                        busid = int(matchObj.group(1))
                        b = struct.pack('BB',9,busid)
                        out.write(b)
                        continue
                    matchObj = re.match( r'[0-9]*\.[0-9]* \| Bus ([0-9]*) *\| Got response packet from AP', line, re.M|re.S)
                    if matchObj:
                        busid = int(matchObj.group(1))
                        b = struct.pack('BB',10,busid)
                        out.write(b)
                        continue
                    matchObj = re.match( r'[0-9]*\.[0-9]* \| AP RECV \| SendingBus: ([0-9]*), Packet: ([0-9]*), OriginBus: ([0-9]*), Timediff: ([0-9]*)', line, re.M|re.S)
                    if matchObj:
                        busid = int(matchObj.group(1))
                        b = struct.pack('BBBHBH',11,255,int(matchObj.group(1)),int(matchObj.group(2)),int(matchObj.group(3)),int(matchObj.group(4)))
                        out.write(b)
                        continue
                    matchObj = re.match( r'[0-9]*\.[0-9]* \| Bus ([0-9]*) *\| Was valid sequence. Timeout cancelled.', line, re.M|re.S)
                    if matchObj:
                        busid = int(matchObj.group(1))
                        b = struct.pack('BB',12,busid)
                        out.write(b)
                        continue
                    sys.stderr.write("ERROR:" + line + "\n")
                except:
                    pass
                    
    return maxtime
                


path = "H:\\tmp\\"
filenames = []



for ap in [15,20,25,30,35]:
    for queue in [10,30,100,1000,2000]:
        filename = "AB" + str(ap) + "APQ" + str(queue) + "-1.txt"
        if os.path.exists(path + filename):
            filenames.append(filename)
        
        
for filename in ['AB15APQ10-1.txt']: #filenames:    
    read(path + filename)
    
  



