import numpy as np
import math

def w(x,y,p,C):
    d = math.sqrt((x - p[0])**2 + (y - p[1])**2)
    return math.exp(float(-(d**2)) / float(4*C))

def barnes(width,height,known_points):
    weighted = np.zeros((width,height))
    C = 0.29
    for x in range(0,width):
        for y in range(0,height):
            n = 0
            for p in known_points:
                n += w(x,y,p,C)*p[2]
                print n
            print
            d = 0
            for p in known_points:
                d += w(x,y,p,C)
            print n,d
            weighted[y][x] = float(n)/float(d)
            print weighted
    print weighted
        
known_points = [(2,2,10),(0,0,0),(3,3,0),(0,3,0),(3,0,0)]
barnes(4,4,known_points)