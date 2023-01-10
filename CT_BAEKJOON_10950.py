#https://www.acmicpc.net/problem/10950
#https://www.acmicpc.net/source/41981025

a = input()
a = int(a)

for i in range(1,a+1):
    a,b= input().split()
    a= int(a)
    b = int(b)
    print(a+b)