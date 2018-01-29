
X, Y, Z, N=(int(input()) for i in range(4)) #Four integers  and  each on four separate lines, respectively.
list=[[x,y,z] for x in range(X+1)  for y in range(Y+1) for z in range(Z+1) if x+y+z!=N]
print(list)