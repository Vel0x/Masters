#!/usr/bin/env python
# -*- coding: utf-8 -*-

import sys
import datetime
import numpy as np
from math import pow  
from math import sqrt  
import numpy as np  
import matplotlib.pyplot as plt  
import cPickle as pickle
import os
from scipy import interpolate, stats, ndimage


from idw import *
from nearest_neighbour import *
from bicubic import *
from bilinear import *
from natural_neighbour import *
from barnes import *



def parse_time(t):
    #2014-02-01T01:13:00
    d,t = t.split("T")
    year,month,day = d.split("-")
    hour,minute,second = t.split(":")
    dt = datetime.datetime(int(year),int(month),int(day),int(hour),int(minute),int(second))
    
    return dt
  
def get_static_data(name):  
    if(os.path.exists(name+".dat")):
        print "Loading data set: " + name
        return pickle.load(open(name+".dat","rb"))
    
    print "Calculating... " + name
    dataset = []
    input = []
    with open(name+".txt", "r") as f:
        input = f.read().replace('\n','\r').replace('\r\r','\r').split("\r")
    for line in input:
        if line[0] == "#":
            continue
        ozone,temp,humidity,timestamp = line.split("\t")
        timestamp = parse_time(timestamp)
        dataset.append({'pollutants':{'ozone':ozone,'temperature':temp,'humidity':humidity},'metadata':{'timestamp':timestamp}})
    dataset.sort(key = lambda x : x['metadata']['timestamp'])
    dataset = dataset[::-1]
    pickle.dump(dataset,open(name+".dat","wb"))
    return dataset

def getparts(parts):
    timestamp = parts[0]
    ozone = float(parts[1])
    temp = int(parts[2])
    humidity = int(parts[3])
    latitude = parts[4]
    longitude = parts[5]
    
    timestamp = datetime.datetime.fromtimestamp(int(float(timestamp)))
    
    latitudeparts = latitude.split(".")
    latdegrees = int(latitudeparts[0][:2])
    latminutes = float(latitudeparts[0][2:] + "." + latitudeparts[1]) / 60.0
    latitude = latdegrees + latminutes
    
    longitudeparts = longitude.split(".")
    londegrees = int(longitudeparts[0][0])
    lonminutes = float(longitudeparts[0][1:] + "." + longitudeparts[1]) / 60.0
    longitude = londegrees + lonminutes

    return {'pollutants':{'ozone':ozone,'temperature':temp,'humidity':humidity},'metadata':{'timestamp':timestamp,'latitude':latitude,'longitude':longitude}}


def get_data_set(run,get_all=False):
    if(os.path.exists("dataset" + str(run) + ".dat")):
        print "Loading data set"
        dataset = pickle.load(open("dataset" + str(run) + ".dat","rb"))
    else:
        global data_start_time
        global data_end_time
        print "Calculating..."
        dataset = []
        with open("data" + str(run) + ".txt") as f:
            for line in f:
                #sys.stdout.write(line)
                if line[0] == "#":
                    continue
                d = getparts(line.split("\t"))
                dataset.append(d)
        dataset.sort(key = lambda x : x['metadata']['timestamp'])
        dataset = dataset[::-1]
        new_data = []
        for data in dataset:
            if(get_all or data['metadata']['timestamp'] > data_start_time and data['metadata']['timestamp'] < data_end_time):
                add = True
                for olddata in new_data:
                    #Check if close to a different point (~100m)
                    if (olddata['metadata']['latitude'] - data['metadata']['latitude'])**2 + (olddata['metadata']['longitude'] - data['metadata']['longitude'])**2 < 0.000001493:
                        add = False
                        break
                if add:
                    new_data.append(data)
        dataset = new_data
        pickle.dump(dataset,open("dataset" + str(run) + ".dat","wb"))
    return dataset

pollutanttitle = {'ozone':'Ozone (ppb)','temperature':'Temperature (°C)','humidity':'Relative Humidity (%)'}

pollutant = 'ozone'

gridx = 200
gridy = 200


data_start_time = datetime.datetime(2014, 2, 3, 23, 0)
data_end_time = datetime.datetime(2014,2,3,23,59)

print "Filtering..."
dataset = get_data_set(2,get_all=True)
        
#Creating some data, with each coodinate and the values stored in separated lists  
xv = [datum['metadata']['longitude']*1000 for datum in dataset]
yv = [datum['metadata']['latitude']*1000 for datum in dataset]
values = [datum['pollutants'][pollutant] for datum in dataset]


sbsdata = get_static_data("Stampfenbachstrasse2")
ssdata = get_static_data("Schimmelstrasse1")
sbs = map(lambda x : x * 1000,[8.539810,47.386769])
ss = map(lambda x : x * 1000,[8.523560,47.370962])


xv = [sbs[0],ss[0]]+xv
yv = [sbs[1],ss[1]]+yv



minx = min(xv)
maxx = max(xv)
pltminx,pltmaxx = minx,maxx
xdiff = maxx-minx
xv = map(lambda x : x - minx, xv)
xv = map(lambda x : x * (float(gridx)/xdiff), xv)

miny = min(yv)
maxy = max(yv)
pltminy,pltmaxy = miny,maxy
ydiff = maxy - miny
yv = map(lambda y : y - miny, yv)
yv = map(lambda y : y * (float(gridy)/ydiff), yv)


sbs[0] = xv[0]
sbs[1] = yv[0]
ss[0] = xv[1]
ss[1] = yv[1]

print sbs
print ss

xv = xv[2:]
yv = yv[2:]


#Creating the interpolation function and populating the output matrix value  
ZI,title = nearest_neighbour(xv,yv,values,gridx,gridy), "Nearest Neighbour"
ZI = ndimage.gaussian_filter(ZI, sigma=6)
#ZI,title = inv_dist(xv,yv,values,gridx,gridy,power=10), "IDW (power = 10)"
#ZI,title = natural_neighbour(xv,yv,values,gridx,gridy), "Natural Neighbour"
#ZI,title = barnes(xv,yv,values,gridx,gridy,passes=1,L=[2**15]), "Barnes (1 pass, l = $2^{15}$)"
#ZI,title = bilinear(xv,yv,values,gridx,gridy), "Bilinear"
#ZI,title = bicubic(xv,yv,values,gridx,gridy), "Bicubic"
print "Interpolated"

sbsd = np.array([float(datum['pollutants'][pollutant]) for datum in sbsdata])
sbsd = {'mean':np.mean(sbsd),'median':np.median(sbsd),'mode':stats.mode(sbsd)[0][0]}

ssd = np.array([float(datum['pollutants'][pollutant]) for datum in ssdata])
ssd = {'mean':np.mean(ssd),'median':np.median(ssd),'mode':stats.mode(ssd)[0][0]}

print "Stampfenbachstrasse Temp:", sbsd
print "Calculated:",ZI[sbs[1],sbs[0]]
sbsv = ZI[sbs[1],sbs[0]]

print "Schimmelstrasse Temp:",ssd
print "Calculated:",ZI[ss[1],ss[0]]
ssv = ZI[ss[1],ss[0]]

# Plotting the result  
masked = np.ma.array(ZI,mask=np.isnan(ZI))
n = plt.Normalize(min(values), max(values))  
plt.subplot(1, 1, 1)
ti = np.linspace(0, gridx, gridy)  
XI, YI = np.meshgrid(ti, ti)
plt.pcolormesh(XI, YI, masked) 
plt.scatter(xv, yv, 50, values)  


plt.title(title + ", sigma = 6 - " + pollutanttitle[pollutant],fontsize=20)  
plt.xlim(0, gridx)  
plt.ylim(0, gridx)  
plt.colorbar().set_label(pollutanttitle[pollutant],fontsize=14)


ax = plt.gca()

xlabels = map(lambda x : x/1000.0, [pltminx,pltmaxx])
ylabels = map(lambda x : x/1000.0, [pltminy,pltmaxy])

xlabels = list(np.linspace(xlabels[0],xlabels[1],len(ax.get_xticklabels())))
ylabels = list(np.linspace(ylabels[0],ylabels[1],len(ax.get_yticklabels())))

xlabels = map(lambda x : ("%.4f" % x),xlabels)
ylabels = map(lambda x : ("%.4f" % x),ylabels)

ax.set_xticklabels(xlabels)
ax.set_yticklabels(ylabels)

plt.xlabel('Longitude',fontsize=14)
plt.ylabel('Latitude',fontsize=14)

plt.show()  