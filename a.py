n = int(input())

if (n % 400 == 0 or (n % 4 == 0 and n % 100 != 0)):
    print('Co')
else : 
    m = n + (4 - (n % 4))
    if not (m % 400 == 0 or (m % 4 == 0 and m % 100 != 0)) :
        m = m + 4 
    print ('Khong', m)