#https://www.acmicpc.net/problem/2525
#https://www.acmicpc.net/source/41979924

a,b = input().split()
c = input()

a = int(a)
b = int(b)
c = int(c)

t = a*60 + b + c + 60*24

h = (t//60)%24
m = t%60


print("%d %d"%(h,m))