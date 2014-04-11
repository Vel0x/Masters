import math
import numpy as np

def euclidean_distance(x1,y1,x2,y2):
    '''Returns the euclidean distance between two points'''
    return math.sqrt((x1-x2)**2 + (y1-y2)**2)

def nearest_neighbour(xv,yv,values,xsize=100,ysize=100):
    '''Interpolates the known points denoted by xv,yv and values
    into a grid of size xsize * ysize'''
    
    #Create a list of tuples of our known points
    known_points = []
    for x,y,v in zip(xv,yv,values):
        known_points.append((int(x+0.5),int(y+0.5),v))
    
    #Create an output grid
    output = []
    for x in range(0,xsize):
        output.append([])
        for y in range(0,ysize):
            output[x].append(None)
    
    #Iterate over every point in output and calculate it's value
    for x in range(0,len(output)):
        for y in range(0,len(output[0])):
            min_distance = len(output)**2
            index = -1
            #Iterate over all known points
            for i in range(0,len(known_points)):
                px, py = known_points[i][0],known_points[i][1]
                #If the distance between this point and the one 
                #we are checking is the lowest then select it
                if euclidean_distance(x,y,px,py) < min_distance:
                    min_distance = euclidean_distance(x,y,px,py)
                    index = i
            output[y][x] = known_points[index][2]
    return np.array(output)
