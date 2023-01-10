#https://www.acmicpc.net/problem/2884
#https://www.acmicpc.net/source/41979804

a,b = input().split()

a = int(a)
b = int(b)

t=a*60+b-45+24*60

h= (t//60)%24
m = t%60

print("%d %d"%(h,m))