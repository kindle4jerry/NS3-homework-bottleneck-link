# -*- coding: utf-8 -*-
import os
import numpy as np

weight = np.zeros((801,1))

with open("h1.tr", "r") as f:
    data = f.readlines()

for d in data:
    s=d.split(" ")
    if s[0]!="+":
        continue
    num=float(s[1])
    no=num//0.1
    no=int(no)
    if no>=0 and no<=800:
        weight[no]=weight[no]+1

with open('data.txt', 'w') as f:
    for i in range(0,801):
        #0<=i<=800
        writei=int(i)
        writenum=int(weight[i])
        stri='%d'%writei
        strnum='%d'%writenum
        #f.write(stri)
        #f.write(' ')
        f.write(strnum)
        f.write('\n')
