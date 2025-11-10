from itertools import combinations

n = int(input())

for _ in range(n) :
    l, k = map(int, input().split())

    arr = sorted(list(map(int, input().split())))

    res = []

    for r in range(len(arr) + 1) :
        for comb in combinations(arr, r) : 
            if sum(comb) == k : 
                # s = "[" + " ".join(map(str, comb)) + "]"
                res.append(comb)

    if (len(res) == 0) : 
        print(-1)
    else :
        res = sorted(res)
        print(" ".join(map(str, res)).replace(',', '').replace('(', '[').replace(')', ']'))

