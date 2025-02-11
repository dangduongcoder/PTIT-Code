a = int(input("Nhap a: "))
b = int(input("Nhap b: "))
c = int(input("Nhap c: "))

s1 = a*a - 2*b + (a*b)/(c*c+3)
s2 = (b*b - 4*a*c)/(2*a)
s3 = 3*a - b**3 + 2*((c*c + 1)**(1/2))
s4 = (((a*a)/b)-4*(a/(b*c))+1)**(1/2)

print("S1 = {:.3f}".format(s1))
print("S2 = {:.3f}".format(s2))
print("S3 = {:.3f}".format(s3))
print("S4 = {:.3f}".format(s4))



