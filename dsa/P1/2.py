t = int(input())

for _ in range(t) : 
    s = input()

    all = set(s)

    nc = len(all)

    cnt = {}

    have = 0

    res = len(s)

    l = 0
    for r, c in enumerate(s) :
        cnt[c] = cnt.get(c, 0) + 1
        if cnt[c] == 1: 
            have += 1
        while have == nc : 
            res = min(res, r - l + 1)
            cnt[s[l]] -= 1
            if cnt[s[l]] == 0 : 
                have -= 1
            l += 1
    print(res)