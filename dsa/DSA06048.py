t = int(input())

for _ in range(t) :
    n = int(input())
    arr = list(map(int, input().split()))

    res = 0

    for i in range(len(arr) - 1) :
        if arr[i] > arr[i + 1] : 
            res = i + 1
            break

    print(res)