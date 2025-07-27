n = int(input())

for i in range(n) : 
    a = int(input())
    b = int(input())

    while b != 0 : 
        a, b = b , a % b
    print(a)