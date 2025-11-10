from itertools import combinations

n, k = map(int, input().split())

arr = input().split()

arr = sorted(list(set(arr)))

res = []

for c in combinations(arr, k) :
    # print(c)
    res.append(" ".join(list(c)))

for i in sorted(res):
    print(i)
