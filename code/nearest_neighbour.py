import math

def euclidean_distance(x1,y1,x2,y2):
    return math.sqrt((x1-x2)**2 + (y1-y2)**2)

def nearest_neighbour(grid,known_points):
    for x in len(grid):
        for y in len(grid[0]):
            min_distance = len(grid)**2
            index = -1
            for i in range(0,len(known_points)):
                px, py = known_points[i][0],known_points[i][1]
                if euclidean_distance(x,y,px,py) < min_distance:
                    min_distance = euclidean_distance(x,y,px,py)
                    index = i
            grid[x][y] = known_points[index][2]
