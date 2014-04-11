#!/usr/bin/env python
import random 

def convert(x,y):
    TOPLEFTX = -3.4;
    TOPLEFTY = 56;

    distanceBetweenDegreesLatitude = 111340.01
    distanceBetweenDegreesLongitude = 62473.28
    deltaLongitude = x - TOPLEFTX
    deltaLatitude = TOPLEFTY - y

    p0 = deltaLongitude*distanceBetweenDegreesLongitude
    p1 = deltaLatitude*distanceBetweenDegreesLatitude

    return (p0,p1)

cos = []
with open('APs.txt') as f:
    for line in f:
        sp = line.split("\t")
        cos.append((sp[0],sp[1].replace("\n","")))

cos = map(lambda (a,b) : (float(a),float(b)),cos)

#newcos = []
#for p in cos:
#    if p not in newcos:
#        newcos.append(p)

#cos = map(lambda (a,b) : convert(b,a),newcos)

random.shuffle(cos)

counter = 0

for (a,b) in cos:
    print "**.ap[" + str(counter) + "].id = " + str(counter)
    print "**.ap[" + str(counter) + "].y = " + str(a)
    print "**.ap[" + str(counter) + "].x = " + str(b)
    counter += 1
