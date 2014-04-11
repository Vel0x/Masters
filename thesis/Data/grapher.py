#!/usr/bin/env python
# -*- coding: utf-8 -*-

import sys
import numpy as np
import math
import matplotlib.pyplot as plt  
from scipy import interpolate, stats

def mean((x,y,z)):
    return (x + y + z)/3.0
    
def correct(x):
    if x > 100:
        return x - 100
    x = 1 - (x / 100)
    return -x*100

#fig = plt.figure()
#ax = fig.add_subplot(1, 1, 1)

x = [x for x in range(1,9)]

#NO = [202.40,200.90,189.34,182.73,189.79,187.60,174.09,166.21,163.23,163.22]
#NO2 = [167.43,166.80,157.71,147.90,145.19,144.66,133.29,127.46,126.20,126.20]
#NOx = [166.89,166.13,156.69,146.44,143.22,142.87,132.21,126.95,125.87,125.87]



#plt.scatter(x,NO,color="#FF0000",label="NO")
#plt.scatter(x,NO2,color="#00FF00",label="NO$_{2}$")
#plt.scatter(x,NOx,color="#0000FF",label="NO$_{X}$") 


#ax = plt.gca()
#ax.grid(True)


plt.legend(loc='upper right')
plt.title('Nearest Neighbour ($\sigma$ = 256)',fontsize="20")  
plt.xlabel("Time Frame",fontsize="14")
plt.ylabel("Percentage Difference (%)",fontsize="14")
plt.show()
