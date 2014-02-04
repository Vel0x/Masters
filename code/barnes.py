import numpy as np
import math

def w(x,y,p,C):
    d = math.sqrt((x - p[0])**2 + (y - p[1])**2)
    return math.exp(float(-(d**2)) / float(4*C))
    
def w2(x,y,p,D=3.5,Gamma=0.25):
    R = math.sqrt((x - p[0])**2 + (y - p[1])**2)
    neg4rsquared = float(-(1/Gamma) * (R**2))
    dsquared = float(D**2)
    v = neg4rsquared/dsquared
    v = math.exp(v)
    return v

def barnes(width,height,known_points,passes=25):
    weighted = np.zeros((width,height))
    C = 0.29
    for x in range(0,width):
        for y in range(0,height):
            n = 0
            for p in known_points:
                n += w(x,y,p,C)*p[2]
            d = 0
            for p in known_points:
                d += w(x,y,p,C)
            weighted[y][x] = float(n)/float(d)
    print weighted
    for i in range(0,passes):
        print "Pass",i
        errors = []
        print known_points
        for (x,y,v) in known_points:
            errors.append((x,y,v - weighted[x][y]))
        print errors
        for x in range(0,width):
            for y in range(0,height):
                n = 0
                for i in range(0,len(known_points)):
                    p = known_points[i]
                    E = errors[i]
                    n += w2(x,y,p)*E[2]
                d = 0
                for p in known_points:
                    d += w2(x,y,p)
                weighted[y][x] += float(n)/float(d)
        print weighted
        print
        print
    
    
        
known_points = [(2,2,10),(0,0,0),(3,3,5),(0,3,0),(3,0,0)]
barnes(4,4,known_points)