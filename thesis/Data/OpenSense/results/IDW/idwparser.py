#!/usr/bin/env python
# -*- coding: utf-8 -*-

import sys
import datetime
import numpy as np
import math 
import numpy as np  
import matplotlib.pyplot as plt  
import matplotlib.cm as cm
import os

def get_data():
    dataset = []
    global locations
    with open("IDW.txt", "r") as f:
        input = f.read().replace('\n','\r').replace('\r\r','\r').split("\r")
    for line in input:
        if line[0] == "#":
            continue
        location,t,pollutant,actual,estimated,power = line.split("\t")
        dataset.append({'location':location,'time':int(t),'pollutant':pollutant,'actual':float(actual),'estimated':float(estimated),'power':int(power)})
    return dataset
    
def correct(x):
    return x
    if x > 100:
        return x - 100
    x = 1 - (x / 100)
    return -x*100

data = get_data()

print "Got data set"
all = []
for p in ['NO','NO2','NOx']:
    current = []
    for d in data:
        if d['pollutant'] == p:
            current.append(d)
        
    print "Initial filter"

    
    ys = []
    xv = [x for x in range(0,20)]
    for power in range(0,20):
        print "Current Power:",power
        yv1 = [100 * math.fabs(d['actual'] - d['estimated']) / d['actual'] for d in current if d['location'] == "Gorgie Road" and d['power'] == power]
        yv2 = [100 * math.fabs(d['actual'] - d['estimated']) / d['actual'] for d in current if d['location'] == "St Johns Road" and d['power'] == power]
        yv3 = [100 * math.fabs(d['actual'] - d['estimated']) / d['actual'] for d in current if d['location'] == "Queen Street" and d['power'] == power]
        y = zip(yv1,yv2,yv3)
        y = map(lambda (x,y,z) : float(x + y + z) / 3.0, y)
        y = map(correct,y)
        ys.append(y)

    newys = []
    for y in ys:
        newys.append(np.mean(y))

    ys = newys
    all.append(ys)



#colors = cm.rainbow(np.linspace(0, 1, len(ys)))
#i = 0
#for y, c in zip(ys, colors):
#    print len(xv),len(y)
#    plt.scatter(xv, y, color=c,label=str(i) + " passes")
#    i += 1

#print xv
#print ys


plt.xlabel('Distance Factor',fontsize=14)
plt.ylabel('Mean difference (%)',fontsize=14)
plt.grid(b=True)
#plt.xscale('log',basex=2)
plt.legend(loc='upper center')
ax = plt.subplot(111)
plt.title("NO Concentration",fontsize=20)  

plt.scatter(xv,all[0],color="#FF0000",label="NO")
plt.scatter(xv,all[1],color="#00FF00",label="NO$_{2}$")
plt.scatter(xv,all[2],color="#0000FF",label="NO$_{X}$")

ax.legend(loc='upper center',ncol=5, fancybox=True, shadow=True)

plt.show()

