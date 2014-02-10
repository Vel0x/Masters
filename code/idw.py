import numpy as np
import math

from math import pow  
from math import sqrt  
import numpy as np  
import matplotlib.pyplot as plt  
  
def pointValue(x,y,power,smoothing,xv,yv,values):  
    nominator=0  
    denominator=0  
    for i in range(0,len(values)):  
        dist = sqrt((x-xv[i])*(x-xv[i])+(y-yv[i])*(y-yv[i])+smoothing*smoothing);  
        #If the point is really close to one of the data points, return the data point value to avoid singularities  
        if(dist<0.0000000001):  
            return values[i]  
        nominator=nominator+(values[i]/pow(dist,power))  
        denominator=denominator+(1/pow(dist,power))  
    #Return NODATA if the denominator is zero  
    if denominator > 0:  
        value = nominator/denominator  
    else:  
        value = -9999  
    return value  
  
def invDist(xv,yv,values,xsize=100,ysize=100,power=2,smoothing=0):  
    valuesGrid = np.zeros((ysize,xsize))  
    for x in range(0,xsize):  
        for y in range(0,ysize):  
            valuesGrid[y][x] = pointValue(x,y,power,smoothing,xv,yv,values)  
    return valuesGrid  
      
  

def dist(x1,y1,x2,y2):
    return math.sqrt((x1 - x2)**2 + (y1 - y2)**2)
    
def idw(width,height,known_points):
    weighted = np.zeros((width,height))
    for x in range(0,width):
        for y in range(0,height):
            value = 0
            for (px,py,v) in known_points:
                if px == x and py == y:
                    value = v
                    break
                d = dist(px,px,x,y)
                value += v*(1.0/float(d))
            weighted[y][x] = value
            print
    print weighted
            
    
    
        
known_points = [(8,8,10),(1,1,0),(6,6,6),(2,9,9),(3,3,3)]

power=1  
smoothing=10

#Creating some data, with each coodinate and the values stored in separated lists  
xv = [x*10 for (x,y,v) in known_points]
yv = [y*10 for (x,y,v) in known_points] 
values = [v for (x,y,v) in known_points] 
  
#Creating the output grid (100x100, in the example)  
ti = np.linspace(0, 100, 100)  
XI, YI = np.meshgrid(ti, ti)  

#Creating the interpolation function and populating the output matrix value  
ZI = invDist(xv,yv,values,100,100,power,smoothing)  


# Plotting the result  
n = plt.normalize(0.0, 100.0)  
plt.subplot(1, 1, 1)  
plt.pcolor(XI, YI, ZI)  
plt.scatter(xv, yv, 100, values)  
plt.title('Inv dist interpolation - power: ' + str(power) + ' smoothing: ' + str(smoothing))  
plt.xlim(0, 100)  
plt.ylim(0, 100)  
plt.colorbar()  

plt.show()  
      