#https://www.acmicpc.net/problem/2588
#https://www.acmicpc.net/source/41978300


b=int(input())
a=int(input())
c = int(a)
print((a%10)*b)
a = a//10

print((a%10)*b)
a = a // 10
print(a*b)
print(b*c)
