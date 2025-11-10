import itertools


maps = [
    [0 , 3 , 14, 18, 15],
    [3 , 0 , 4 , 22, 20],
    [17, 9 , 0 , 16, 4],
    [6 , 3 , 7 , 0 , 12],
    [9  ,15, 11, 5 , 0]
]

nums = [2, 3, 4, 5]
perms = list(itertools.permutations(nums))

trys = []

for p in perms:
    new_perm = (1,) + p
    trys.append(list(new_perm))

m = 1000
a = None

for i in trys :
    res = 0 
    for j in range(4) : 
        res += maps[i[j] - 1][i[j + 1] - 1]
    res += i[0] + i[4]
    if res < m : 
        m = res
        a = i
    print(i, ' = ', res)

print()
print(a, m)
