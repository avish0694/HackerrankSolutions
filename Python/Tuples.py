#Solution 1

n = int(input())
t = tuple(map(int, input().split()))
print (hash(t))

"""
#Solution 2
n = raw_input()
print hash(tuple([int(i) for i in raw_input().split()]))

"""
