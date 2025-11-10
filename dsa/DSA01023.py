from itertools import combinations

n = int(input())

for _ in range(n) : 
    n, k = map(int, input().split())

    arr = list(map(int, input().split()))

    li = []

    for i in range(n) : 
        li.append(i + 1)

    res = 1

    for i in combinations(li, k) : 
        # print(i, arr)
        if list(i) == arr : 
            print(res)
            break
        res += 1