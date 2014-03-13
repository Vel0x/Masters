#!/usr/bin/env python
# -*- coding: utf-8 -*-

import sys
import numpy as np
import math
import matplotlib.pyplot as plt  
from scipy import interpolate, stats


queue = [10,30,100,1000,2000]
#aps = [10,20,30,40,50]
power = [18,19,20,21,22]
#power = map(lambda x : 2**(x/3.0),power)


ofmean =   [0.20, 1.00, 6.98, 184.07, 373.48]
mean = [0.49, 3.08, 16.72, 0.0001, 419.84]
ofreceived = [37.71, 38.67, 42.75, 58.86, 65.60]
received = [14.34, 16.43, 21.21, -10, 48.29]


fig = plt.figure()
ax1 = fig.add_subplot(111)

ax1.set_xscale('log')   
#ax1.set_yscale('log')
ax1.set_ylim([0,70])
ax1.set_ylabel('Packets Received (%)',fontsize="14")

meanplt = ax1.scatter(queue,received,color="#000000",label="% Received", marker='o')
ofmeanplt = ax1.scatter(queue,ofreceived,color="#000000",label="OF % Received", marker='+',s=[60]*5)

#ax2 = ax1.twinx()
#ax2.set_yscale('log')
#ax2.yaxis.set_ticks(np.arange(0, max(received)+1, 5.0))
#ax2.set_ylabel('Percent Received (%)',fontsize="14")
#receivedplt = ax2.scatter(queue,received,color="#000000",label="Non-OF % Received",marker='*',s=[60]*5)
#ofreceivedplt = ax2.scatter(queue,ofreceived,color="#000000",label="OF % Received",marker='^',s=[60]*5)

#charts = [meanplt, ofmeanplt, receivedplt, ofreceivedplt]
#labs = map(lambda x : x.get_label(), charts)

#ax1.legend(charts, labs, loc='upper left')

#box = ax1.get_position()
#ax1.set_position([box.x0, box.y0 + box.height * 0.1, box.width, box.height * 0.9])

#plt.legend(loc='upper center', bbox_to_anchor=(0.5, -0.10),fancybox=True, shadow=True, ncol=5)
plt.legend(loc='upper left')
plt.title('Opportunistic Forwarding with Non-Chronological Queue',fontsize="20")  
ax1.set_xlabel("Queue Size",fontsize="14")
plt.show()
