import math
import numpy as np

#https://code.google.com/p/griddata-python
from griddata import griddata 
    
def natural_neighbour(xv,yv,values,xsize=100,ysize=100):
    '''Interpolates using the natural neighbour 
    interpolation algorithm'''
    x = np.array(xv)
    y = np.array(yv)
    z = np.array(values)
    xi = np.linspace(0,xsize,xsize)
    yi = np.linspace(0,ysize,ysize)
    return griddata(x,y,z,xi,yi)
