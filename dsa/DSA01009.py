from itertools import product

n, k = map(int, input().split())

res = []

for c in product('AB', repeat=n-k+1) : 
    if len(set(c)) > 1 :
        l = len(c)
        for i in range(l) :
            if c[i] == 'A' :
                if (i == 0 and c[1] != 'A') or (i == l - 1 and c[l-2] != 'A') or ( 0 < i < l - 1 and c[i - 1] != 'A' and c[i + 1] != 'A') :
                    tmp = list(c)
                    tmp[i] = 'A'*k
                    res.append(''.join(tmp))


res = sorted(res)
print(len(res))
for i in res :
    print(i)