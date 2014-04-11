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
    with open("Barnes.txt", "r") as f:
        input = f.read().replace('\n','\r').replace('\r\r','\r').split("\r")
    for line in input:
        if line[0] == "#":
            continue
        location,t,pollutant,actual,estimated,pas,distance = line.split("\t")
        dataset.append({'location':location,'time':int(t),'pollutant':pollutant,'actual':float(actual),'estimated':float(estimated),'pass':int(pas),'distance':int(distance)})
    return dataset

data = get_data()


current = []
for d in data:
    if d['pollutant'] == "NOx" and d['time'] == 7:
        current.append(d)

    
ys = []
for pas in range(0,25):
    xv = [2**x for x in range(10,20)]
    yv1 = [math.fabs(d['actual'] - d['estimated']) / d['actual'] for d in current if d['location'] == "Gorgie Road" and d['pass'] == pas]
    yv2 = [math.fabs(d['actual'] - d['estimated']) / d['actual'] for d in current if d['location'] == "St Johns Road" and d['pass'] == pas]
    yv3 = [math.fabs(d['actual'] - d['estimated']) / d['actual'] for d in current if d['location'] == "Queen Street" and d['pass'] == pas]
    y = zip(yv1,yv2,yv3)
    y = map(lambda (x,y,z) : float(x + y + z) / 3.0, y)
    y = y[1:]
    ys.append(y)    


colors = cm.rainbow(np.linspace(0, 1, len(ys)))
i = 0
for y, c in zip(ys, colors):
    print len(xv),len(y)
    plt.scatter(xv, y, color=c,label=str(i) + " passes")
    i += 1

plt.title("NO$_{X}$ Concentration",fontsize=20)  
plt.xlabel('Distance Factor',fontsize=14)
plt.ylabel('Mean difference (%)',fontsize=14)
plt.grid(b=True)
plt.xscale('log',basex=2)
#plt.legend(loc='upper center')
ax = plt.subplot(111)
ax.legend(loc='upper center',ncol=5, fancybox=True, shadow=True)
plt.show()

