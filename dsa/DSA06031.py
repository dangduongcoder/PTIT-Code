t = int(input())

for _ in range(t) : 
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))

    m = max(arr[:k])
    cnt = arr.count(m)

    res = [str(m)]

    for i in range(k, len(arr)) :
        if arr[i - k] == m : 
            cnt -= 1
        if cnt > 0 : 
            if arr[i] == m : 
                cnt += 1 
            if arr[i] > m : 
                m = arr[i]
                cnt = 1
        else : 
            m = max(arr[i - k : i + 1])
            cnt = 1
        res.append(str(m))

    print(' '.join(res))

