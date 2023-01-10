#https://www.acmicpc.net/problem/1297
#https://www.acmicpc.net/source/50463608

a,b,c = input().split(' ')

a = float(a)
b = float(b)
c = float(c)

print(int(a*b/(b**2+c**2)**(1/2)),end=' ')
print(int(a*c/(b**2+c**2)**(1/2)))