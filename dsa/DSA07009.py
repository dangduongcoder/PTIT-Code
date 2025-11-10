n = int(input())

for _ in range(n) : 
    s = input()

    arr = []

    for i in s : 
        if not (i == '+' or i == '-' or i == '*' or i == '/') : 
            arr.append(i)
        else : 
            s1 = arr[-1]
            s2 = arr[-2]
            r = '(' + s2 + i + s1 + ')'
            arr.pop()
            arr.pop()
            arr.append(r)
            
    # print(arr[0])
    print(int(eval(arr[0])))