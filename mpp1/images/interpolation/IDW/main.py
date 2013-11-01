from math import *
import matplotlib.pyplot as plt
import numpy as np

P = 2

def F(x):
    #return sin(10*x)
    return sin(x) 

def weightedy(x):
    y = 0
    weights = 0
    for (px,py) in dataSet:
        y += py*1/(abs(px-x)**3)
        weights += 1/(abs(px-x)**3)
    return y/weights


xvalues = [x for x in np.arange(-7,7,1)]
samples = map(F,xvalues)
#plt.scatter(xvalues,samples)


dataSet = zip(xvalues,samples)

newXvalues = [x for x in np.arange(-7,7,0.1)]

newSamples = [weightedy(x) for x in newXvalues]


plt.ylim([-2,2])
plt.xlim([-7,7])
plt.grid(b=True)
#plt.scatter(xvalues,samples)
plt.scatter(newXvalues,newSamples)
plt.ylabel('y')
plt.xlabel('x')
plt.title('y = sin(x)')
plt.show()

