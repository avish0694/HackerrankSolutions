def main():
    n = int(input())
    print('Weird' if(n % 2 != 0 or 6 <= n <= 20 ) else 'Not Weird')

if __name__ == '__main__':
    main()
------------

n = int(input())
if n % 2 == 1:
    print("Weird")
elif n % 2 == 0 and 2 <= n <= 5:
    print("Not Weird")
elif n % 2 == 0 and 6 <= n <= 20:
    print("Weird")
else:
    print("Not Weird")