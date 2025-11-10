from itertools import permutations

na = ['A', 'E']

s = input()

e = ord(s)

arr = []

res = []

for i in range(65, e + 1) :
    arr.append(chr(i))

for c in permutations(arr, len(arr)) :
    ok = True
    for i in range(1, len(c) - 1) : 
        if ((c[i] in na) and (c[i - 1] not in na) and (c[i + 1] not in na)) :
            ok = False
            break
    if ok : 
        res.append(c)



for i in res :
    print("".join(list(map(str, i))))