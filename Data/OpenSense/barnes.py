import numpy as np
import math
import sys

def w(x,y,p,C,L):
    '''Calculate weighting factor'''
    d = math.sqrt((x - p[0])**2 + (y - p[1])**2)
    return math.exp(float(-(d**2)) / float(L*C))


def barnes(xv,yv,values,xsize=100,ysize=100,passes=25,L=1):
    '''An iterator, returning the grid at each 
    pass of the barnes algorithm'''
    
    known_points = zip(xv,yv,values)
    weighted = np.zeros((xsize,ysize))
    C = 1
    
    #Perform first pass
    
    #Loop over all points        
    for x in range(0,xsize):
        for y in range(0,ysize):

            
            numerator = 0
            denominator = 0
            for p in known_points:
                numerator += w(x,y,p,C,L)*p[2]
                denominator += w(x,y,p,C,L)
                
            #Make sure denominator isn't 0
            if denominator == 0:
                denominator = 1.0/1000000
            
            #Insert new calculated value
            weighted[y,x] = float(numerator)/float(denominator)
            
    yield weighted
    
    C = 0.29
    
    #Perform successive passes
    for i in range(0,passes):
        
        #We need to double buffer this for the calculation
        new_weighted = np.copy(weighted)
        
        #Loop over all points
        for x in range(0,xsize):
            for y in range(0,ysize):
        
                numerator = 0
                denominator = 0
        
                for p in known_points:
                    weight = w(x,y,p,C,L)
                    #Calculate difference between the current value
                    #and our new calculated value
                    diff = (p[2] - weighted[int(p[1]-0.5)][int(p[0]-0.5)])
                    numerator += weight*diff
                    denominator += w(x,y,p,C,L)
        
                #Make sure denominator isn't 0
                if denominator == 0:
                    denominator = 1.0/1000000
        
                #Insert new calculated value
                new_weighted[y,x] += float(numerator)/float(denominator)
        
        weighted = new_weighted
        
        #Yield at the end of each pass before continuing.
        yield weighted 
    
    
