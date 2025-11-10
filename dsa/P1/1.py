n, t = map(int, input().split())

A = []
C = []

for i in range(n) : 
    a, c = map(int, input().split())
    A.append(a)
    C.append(c)

dp = [0] * (t + 2)

for i in range(n) : 
    for t in range(t, A[i] - 1, - 1) : 
        dp[t] = max(dp[t], dp[t - A[i]] + C[i])

print(max(dp))