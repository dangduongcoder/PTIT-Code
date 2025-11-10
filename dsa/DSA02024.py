from itertools import combinations

def check(a): 
    for i in range(len(a) - 1):
        if a[i] > a[i + 1]:
            return False
    return True

t = int(input())

res = []

arr = list(map(int, input().split()))
for r in range(2, len(arr) + 1) : 
    for c in combinations(arr, r) : 
        if check(c) :
            res.append(" ".join(map(str, c)))

for i in sorted(res) : 
    print(i)