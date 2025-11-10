from itertools import combinations_with_replacement

inp = input().split()

c = inp[0]
k = int(inp[1])

li = [chr(i) for i in range(ord("A"), ord(c) + 1)]

for comb in combinations_with_replacement(li, k) : 
    print(''.join(comb))