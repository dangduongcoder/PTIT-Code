from itertools import combinations

t = int(input())

for _ in range(t): 
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))

    li = []

    for i in range(n) : 
        li.append(i + 1)

    finded = False
    ok = False

    for comb in combinations(li, k) : 
        if not finded : 
            if list(comb) == arr : 
                finded = True
        else : 
            res = 0
            f = list(comb)
            # print(arr, f)
            for p in f : 
                if p not in arr : 
                    res += 1
            print(res)
            ok = True
            break
    if not ok : 
        print(k )