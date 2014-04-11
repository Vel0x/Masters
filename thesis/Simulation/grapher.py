#!/usr/bin/env python
# -*- coding: utf-8 -*-

import sys
import numpy as np
import math
import matplotlib.pyplot as plt  
from scipy import interpolate, stats



nobustime = [720,104.7272727,36.93886276,11.26613639,2.580568083]
nobusevents = [80,800,2640,9680,54200]
allbustime = [1.11676964,0.888943762,0.819345661,0.709924981,0.37483731]
allbusevents = [127469,145712,166025,211215,369684]

aps = [1,5,10,20,50]



fig = plt.figure()
ax1 = fig.add_subplot(111)

#ax1.set_xscale('log')   
#ax1.set_yscale('log')
ax1.set_ylabel('Events / Second',fontsize="14")

#timeplt = ax1.scatter(aps,nobustime,color="#000000",label="No Buses", marker='o')
#alltimeplt = ax1.scatter(aps,allbustime,color="#000000",label="145 Buses", marker='+',s=[60]*5)

#ax2 = ax1.twinx()
#ax2.set_yscale('log')
#ax2.yaxis.set_ticks(np.arange(0, max(received)+1, 5.0))
#ax2.set_ylabel('Events / Simulated Second',fontsize="14")
eventplt = ax1.scatter(aps,nobusevents,color="#000000",label="No Buses",marker='*',s=[60]*5)
alleventplt = ax1.scatter(aps,allbusevents,color="#000000",label="145 Buses",marker='^',s=[60]*5)

#charts = [timeplt, alltimeplt, eventplt, alleventplt]
#labs = map(lambda x : x.get_label(), charts)

#ax1.legend(charts, labs, loc='upper center')

#box = ax1.get_position()
#ax1.set_position([box.x0, box.y0 + box.height * 0.1, box.width, box.height * 0.9])

#plt.legend(loc='upper center', bbox_to_anchor=(0.5, -0.10),fancybox=True, shadow=True, ncol=5)
plt.legend(loc='upper left')
plt.title('Access Points vs Events/s',fontsize="20")  
ax1.set_xlabel("Number of Access Points",fontsize="14")
plt.show()
