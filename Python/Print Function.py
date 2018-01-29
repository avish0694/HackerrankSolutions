n = int(input())


for x in range(1, n + 1):
    print(x, end(''))
    

def multiter(a, b):
    result = 0
    while b > 0:
        result += a
        b -= 1
    return result

def multrecur(x, y):
    if y = 1 :
        return x
    else:
        return x + multrecur(x, y - 1)

def factrecursive(n):
    if n == 1:
        return n
    else:
        return n * factrecursive(n - 1)

def factiterative(d):
    result = 1 #should give 1 instead of 0, 0 mult by anything is 0
    for i in range(1, d+1):
        result *= i
    return result

    

print(factrecursive(4))
print(factiterative(4))
print(multiter(4, 2))
print(multrecur(4, 2))


