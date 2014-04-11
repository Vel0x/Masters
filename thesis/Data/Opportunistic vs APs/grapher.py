#!/usr/bin/env python
# -*- coding: utf-8 -*-

import sys
import numpy as np
import math
import matplotlib.pyplot as plt  
#from scipy import interpolate, stats

def mean((x,y,z)):
    return (x + y + z)/3.0
    
def correct(x):
    if x > 100:
        return x - 100
    x = 1 - (x / 100)
    return -x*100

#fig = plt.figure()
#ax = fig.add_subplot(1, 1, 1)

x = [15,25,30,35]

latency = {}
percent = {}

latency['10'] = [0.47,0.36,0.29,0.28]
latency['30'] = [2.34,1.83,1.51,1.48]
latency['100'] = [13.34,11.07,9.74,9.49]
#latency['1000'] = [193.90,216.09,219.70,211.79]
latency['2000'] = [402.57,429.08,427.53,420.63]

percent['10'] = [26.38,30.21,31.38,32.73]
percent['30'] = [27.74,31.56,32.56,33.9]
percent['100'] = [29.59,35.13,35.72,37.04]
#percent['1000'] = [38.90,52.65,52.93,54.16]
percent['2000'] = [62.81,60.04,60.10,61.10]


plt.scatter(x,latency['10'],color="#FF0000",label="10")
plt.scatter(x,latency['30'],color="#00FF00",label="30")
plt.scatter(x,latency['100'],color="#0000FF",label="100") 
plt.scatter(x,latency['2000'],color="#FF00FF",label="2000")
'''
plt.scatter(x,percent['10'],color="#FF0000",label="10")
plt.scatter(x,percent['30'],color="#00FF00",label="30")
plt.scatter(x,percent['100'],color="#0000FF",label="100") 
plt.scatter(x,percent['2000'],color="#FF00FF",label="2000") 
'''

no_of_latency = {10:0.485136283,30:3.075895053,100:16.72300115,2000:419.8375185}
no_of_percent = {10:14.34,30:16.43,100:21.21,2000:48.29}

no_of_x = [0,5,10,15,20,25,30,35,40,45,50]


plt.plot(no_of_x,[no_of_latency[10]]*len(no_of_x),color="#FF0000")
plt.plot(no_of_x,[no_of_latency[30]]*len(no_of_x),color="#00FF00")
plt.plot(no_of_x,[no_of_latency[100]]*len(no_of_x),color="#0000FF")
plt.plot(no_of_x,[no_of_latency[2000]]*len(no_of_x),color="#FF00FF")
'''
plt.plot(no_of_x,[no_of_percent[10]]*len(no_of_x),color="#FF0000")
plt.plot(no_of_x,[no_of_percent[30]]*len(no_of_x),color="#00FF00")
plt.plot(no_of_x,[no_of_percent[100]]*len(no_of_x),color="#0000FF")
plt.plot(no_of_x,[no_of_percent[2000]]*len(no_of_x),color="#FF00FF")
'''


ax = plt.gca()
ax.grid(True)
ax.set_yscale('log')
ax.set_xlim([0,50])


plt.legend(loc='upper right')
plt.title('OF vs No OF - Latency',fontsize="20")  
plt.xlabel("Number of Access Points",fontsize="14")
plt.ylabel("Latency (s)",fontsize="14")
plt.show()
