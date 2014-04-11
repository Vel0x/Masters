from scipy.interpolate import griddata
import numpy as np


def bilinear(xv,yv,values,xsize=100,ysize=100):
    '''Interpolates the known points denoted by xv,yv and 
    values into a grid of size xsize * ysize using a bicubic 
    interpolation algorithm'''
    
    #Create a list of points from xv and yv
    points = []
    for x,y in zip(xv,yv):
        points.append((x,y))
    
    #Create the points which need to be interpolated
    grid_x,grid_y = np.mgrid[0:xsize,0:ysize]
    
    #Interpolate (0 means unknown/outside the convex hull)
    data = griddata(points, values, (grid_x, grid_y), method='linear')

    #We need to transpose the data for our data set
    return np.transpose(data)
