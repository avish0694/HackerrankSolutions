#!/usr/bin/env python
# -*- coding: utf-8 -*-
'''
Problem Statement
Lets learn about list comprehensions!. You are given three integers X, Y and Z denoting the dimensions of a Cuboid. You have to print a list of all possible coordinates on the three dimensional grid, such that at any point the sum Xi + Yi + Zi is not equal to N. If X = 2, then possible values of Xi can be 0, 1 and 2. The same applies to Y and Z.
Input Format
Four integers X, Y, Z and N in four different lines.
Output Format
You have to print the list, in increasing order.
'''

X, Y, Z, N=(int(input()) for i in range(4)) #Four integers  and  each on four separate lines, respectively.
list=[[x,y,z] for x in range(X+1)  for y in range(Y+1) for z in range(Z+1) if x+y+z!=N]
print(list)