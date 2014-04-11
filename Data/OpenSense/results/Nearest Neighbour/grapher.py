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

NO = [[121.13,145.44,59.07,38.46,46.42,41.47,57.47,31.03],[15.37,51.87,256.38,206.59,505.05,325.62,165.56,237.60],[152.56,93.53,19.46,48.00,62.12,171.29,66.34,99.74]]
NO2 = [[130.32,112.27,71.22,70.61,68.18,69.20,81.88,69.26],[62.92,70.06,85.38,93.15,105.38,111.42,85.16,105.15],[107.15,100.49,84.42,87.44,72.55,88.18,104.13,116.96]]
NOx = [[174.97,120.58,67.02,57.70,54.68,49.49,62.31,36.52],[35.65,64.89,115.89,113.53,194.21,192.81,135.53,187.31],[161.86,97.89,41.44,69.36,66.68,127.21,73.02,103.55]]

NO = map(mean, zip(NO[0],NO[1],NO[2]))
NO2 = map(mean, zip(NO2[0],NO2[1],NO2[2]))
NOx = map(mean, zip(NOx[0],NOx[1],NOx[2]))

print NO
NO = map(correct,NO)
NO2 = map(correct,NO2)
NOx = map(correct,NOx)


plt.scatter(x,NO,color="#FF0000",label="NO")
plt.scatter(x,NO2,color="#00FF00",label="NO$_{2}$")
plt.scatter(x,NOx,color="#0000FF",label="NO$_{X}$") 


#ax = plt.gca()
#ax.grid(True)


plt.legend(loc='upper right')
plt.title('Nearest Neighbour ($\sigma$ = 256)',fontsize="20")  
plt.xlabel("Time Frame",fontsize="14")
plt.ylabel("Percentage Difference (%)",fontsize="14")
plt.show()
