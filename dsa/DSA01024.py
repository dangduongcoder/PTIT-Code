from itertools import combinations


n, k = map(int, input().split())

names = input().split()

li = sorted(set(names))


for i in combinations(li, k) : 
    print(" ".join(i))