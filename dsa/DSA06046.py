t = int(input())

for _ in range(t) :
    n = int(input())
    arr = list(map(int, input().split()))
    res = []

    arr = sorted(arr)

    for i in range(len(arr) - 1) : 
        res.append(arr[i + 1] - arr[i])

    print(min(res))