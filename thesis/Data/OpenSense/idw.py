import numpy as np
from math import pow, sqrt 
 

def point_value(x,y,power,xv,yv,values):  
    '''Calculate the value of a single point given the known
    data points'''
    
    numerator, denominator = 0,0  
    
    for i in range(0,len(values)):  
        #Calculate the distance from this point to the current
        #known point    
        dist = sqrt((x-xv[i])**2+(y-yv[i])**2);  
        
        #If the point is close to one of the data points, 
        #return that data point
        if(dist == 0):  
            return values[i] 
            
        numerator += values[i]/pow(dist,power)  
        denominator += 1/pow(dist,power)
    
    #Return nan if the denominator is zero  
    if denominator > 0:  
        return numerator/denominator  
    return np.nan  
  
  
def inv_dist(xv,yv,values,xsize=1,ysize=1,power=2):  
    '''Interpolates the known points denoted by xv,yv and 
    values into a grid of size xsize * ysize using an inverse 
    distance weighting interpolation algorithm'''
    
    #Create a grid to populate
    values_grid = np.zeros((ysize,xsize))  
    
    #Loop over all points in the grid
    for x in range(0,xsize):  
        for y in range(0,ysize): 
            #Insert the calculated value
            values_grid[y][x] = point_value(x,y,power,xv,yv,values)  

    return values_grid  
