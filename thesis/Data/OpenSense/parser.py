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

class Unbuffered:
   def __init__(self, stream):
       self.stream = stream
   def write(self, data):
       self.stream.write(data)
       self.stream.flush()
   def __getattr__(self, attr):
       return getattr(self.stream, attr)

locations = {   'St Johns Road':{'latitude':55.942500,'longitude':-3.281111},
                'Glasgow Road':{'latitude':55.939026,'longitude':-3.392727},
                'Salamander St':{'latitude':55.974594,'longitude':-3.161455},
                'St Leonards':{'latitude':55.945589,'longitude':-3.182186},
                'Queen Street':{'latitude':55.953837,'longitude':-3.205481},
                'Gorgie Road':{'latitude':55.937708,'longitude':-3.232267},
                'Queensferry Road':{'latitude':55.960497,'longitude':-3.303250},
                'Currie':{'latitude':55.896909,'longitude':-3.319660}}

def get_local_data(name,time=1):
    dataset = []
    global locations
    with open(name+".csv", "r") as f:
        input = f.read().replace('\n','\r').replace('\r\r','\r').split("\r")
    for line in input:
        if line[0] == "#":
            continue
        location,t,no,no2,nox = line.split(",")
        t = int(t)
        metrics = {'NO':float(no),'NO2':float(no2),'NOx':float(nox)}
        if int(t) == time:
            dataset.append([locations[location],metrics])
    return dataset

sys.stdout=Unbuffered(sys.stdout)

gridx = 200
gridy = 200

pollutanttitle = {'NO':'$NO  (ugm^{-3})$','NO2':'$NO_{2}  (ugm^{-3})$','NOx':'$NO_{x}  (ugm^{-3})$'}

ignore_list = ['St Johns Road']

print "#Location\tTime\tPollutant\tActual\tEstimated"

for ignore in ignore_list:
    for p in ['NO','NO2','NOx']:
        for time in range(1,9):
            alldataset = get_local_data("Edinburgh",time)
            #print alldataset
            dataset = []
            v = None
            if ignore != None:
                for [location,metrics] in alldataset:
                    if location != locations[ignore]:
                        dataset.append([location,metrics])
                    else:
                        v = [location,metrics]
            else:
                dataset = alldataset

            #print "DATASET:",dataset
            #print "V:",v

            xv = [location['longitude']*1000 for [location,metrics] in dataset]
            yv = [location['latitude']*1000 for [location,metrics] in dataset] 
            if ignore != None:
                xv = [v[0]['longitude']*1000] + xv
                yv = [v[0]['latitude']*1000] + yv
            values = [metrics[p] for [location,metrics] in dataset] 

            #print "YV",yv

            minx = min(xv)
            maxx = max(xv)
            pltminx, pltmaxx = minx, maxx
            xdiff = maxx-minx
            xv = map(lambda x : x - minx, xv)
            xv = map(lambda x : x * (float(gridx)/xdiff), xv)

            miny = min(yv)
            maxy = max(yv)
            pltminy, pltmaxy = miny, maxy
            ydiff = maxy - miny
            yv = map(lambda y : y - miny, yv)
            yv = map(lambda y : y * (float(gridy)/ydiff), yv)

            #print "YV",yv



            if ignore != None:
                v[0] = {'longitude':xv[0],'latitude':yv[0]}
                xv = xv[1:]
                yv = yv[1:]

            #print xv
            #Creating the interpolation function and populating the output matrix value  
    

            #l = [1] + [2**i for i in range(10,20)]
            #pas = -1
            
            
            ZI,title = nearest_neighbour(xv,yv,values,gridx,gridy), "Nearest Neighbour"
            #ZI = ndimage.gaussian_filter(ZI, sigma=256)
            #ZI,title = inv_dist(xv,yv,values,gridx,gridy,power=pow), "IDW"
            #ZI,title = natural_neighbour(xv,yv,values,gridx,gridy), "Natural Neighbour"
            #for ZI in barnes(xv,yv,values,gridx,gridy,passes=25,L=l):
                #pas += 1
                #title = "Barnes"

            #ZI,title = bilinear(xv,yv,values,gridx,gridy), "Bilinear"
            #ZI,title = bicubic(xv,yv,values,gridx,gridy), "Bicubic"

            actual = v[1][p]
            estimated = ZI[v[0]['latitude'] - 1,v[0]['longitude'] - 1]


            #outs.append((ignore,p,actual,estimated,str(pow),str(smo)))

            #minval = 0
            #for i in range(0,len(outs)):
            #    (place,pollutant,actual,estimated,power,smoothing) = outs[i]
            #    if math.fabs(estimated - actual) < math.fabs(outs[minval][3] - actual):
            #        minval = i
            #(place,pollutant,actual,estimated,power,smoothing) = outs[minval]
            #print place + "\t" + pollutant + "\t" + str(actual) + "\t" + str(estimated) + "\t" + power + "\t" + smoothing

            print ignore + "\t" + str(time) + "\t" + p + "\t" + str(actual) + "\t" + str(estimated)



            # Plotting the result  
            '''masked = np.ma.array(ZI,mask=np.isnan(ZI))
            n = plt.Normalize(min(values), max(values))  
            plt.subplot(1, 1, 1)
            ti = np.linspace(0, gridx, gridy)  
            XI, YI = np.meshgrid(ti, ti)
            plt.pcolormesh(XI, YI, masked) 
            plt.scatter(xv, yv, 50, values)  


            plt.title(title + " - " + pollutanttitle[p],fontsize=20)  
            plt.xlim(0, gridx)  
            plt.ylim(0, gridy)  
            plt.colorbar().set_label(pollutanttitle[p],fontsize=14)

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
            x = raw_input()
            if "q" in x:
                sys.exit(0)'''