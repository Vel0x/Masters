#!/usr/bin/env python

import sys
from datetime import datetime

with open('rawbusaps.txt') as f:
    buspositions = {x:"" for x in xrange(0,145)}
    
    for line in f:
        vals = line.replace('\n','').replace('\r','').split(' ')
        busid = int(vals[0])
        datestr = vals[1] + " " + vals[2]
        d = (datetime.strptime(datestr,'%Y-%m-%d %H:%M:%S') - datetime(1970,1,1)).total_seconds() - 1376071859
        d = int(d)
        buspositions[busid] += str(d) + " "

for i in range(0,145):
    print "**.bus[" + str(i) + "].udpApp[0].positions = \"" + buspositions[i] + "\""
