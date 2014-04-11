#!/usr/bin/env python
# -*- coding: utf-8 -*-

import sys
import datetime
import numpy as np
import math
import numpy as np
import scipy.io as sio
import os

#timestamp	ozone_ppb	temperature	humidity	latitude	longitude


def correct_data_point(d):
    timestamp = int(int(d[0])/1000.0 + 0.5)
    latitude = d[1]
    longitude = d[2]
    ozone = d[3]
    latitude = latitude / 100
    longitude = longitude / 100
    latbase = math.floor(latitude)
    lonbase = math.floor(longitude)
    latpart = latitude - latbase
    lonpart = longitude - lonbase
    latitude = latbase + (latpart / 0.6)
    longitude = lonbase + (lonpart / 0.6)
    return {'timestamp':timestamp, 'latitude':latitude, 'longitude':longitude, 'ozone':ozone}
    
def format_line(d):
    return "\t".join(map(str,[d['timestamp'],d['ozone'],0,0,d['latitude'],d['longitude']]))

dataset = {}

data = sio.loadmat('ozone.mat')
data = data['dhead'][0]
for i in range(0,len(data)):
    dataset[i] = data[i][0]

outputdata = []

for i in range(0,len(dataset)):
    print i
    for d in dataset[i]:
        outputdata.append(correct_data_point(d))

with open('data3.txt','w') as f:
    for d in outputdata:
        f.write(format_line(d) + "\n")

