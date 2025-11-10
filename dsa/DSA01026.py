from itertools import product


n = int(input())

res = []

for i in product('68', repeat=n) : 
    arr = list(map(str, i))

    if arr[0] == '8' and arr[-1] == '6' : 
        l = len(arr)
        ok = True
        for j in range(l) : 
            if j < l - 1 :
                if (arr[j] == arr[j + 1] == '8') :
                    ok = False
                    break
            if j < l - 3 : 
                if (arr[j] == arr[j + 1] == arr[j + 2] == arr[j + 3] == '6') :
                    ok = False
                    break
    else :
        continue
    if ok : 
        s = ''.join(arr)
        print(s)