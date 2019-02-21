import numpy as np
import math
import random
x=[]
y=[]
lim = 10000
init = random.uniform(0.001,0.999)
sum_sigma=0
for r in np.arange(1,4,0.001):
    for i in range(0,lim):
        init = r*(1-init)*init  #現在の値を次の世代に更新する
        diff = r*(1 - 2*init) #微分
        sum_sigma += np.log(abs(diff)) #微分した値を対数にして足し算する
    sum_sigma = sum_sigma / lim  #リアプノフ指数は過去の値に影響受けるため
    x.append(r)
    y.append(sum_sigma)
