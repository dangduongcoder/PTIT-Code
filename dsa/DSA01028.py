from itertools import combinations

n, k = map(int, input().split())


arr = map(int, input().split())

arr = list(set(arr))

arr = sorted(arr)

for comb in combinations(arr, k) : 
    print(" ".join(map(str, comb))) 