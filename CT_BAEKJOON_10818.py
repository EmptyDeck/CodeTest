#https://www.acmicpc.net/problem/10818
#https://www.acmicpc.net/source/40167890

n = input()
n = int(n)
a = []

a = list(map(int,input().split()))
print(min(a) , max(a))