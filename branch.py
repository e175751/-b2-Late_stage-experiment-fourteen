import numpy as np
import random
x=[]
y=[]
init = round(random.random(),3)
for r in np.arange(1,4,0.001):
    for i in range(0,201):
        init = r*(1-init)*init
        if 150<=i:
            x.append(r)
            y.append(init)
