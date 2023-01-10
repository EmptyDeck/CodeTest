#https://www.acmicpc.net/problem/1546
#https://www.acmicpc.net/source/40168906

n = input()
n = int(n)
a = []
total = 0
total = int(total)

a = list(map(int,input().split()))

for i in a:
    total = i + total

print(total * 100 / max(a)/n)