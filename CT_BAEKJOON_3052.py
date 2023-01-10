#https://www.acmicpc.net/problem/3052
#https://www.acmicpc.net/source/40248569

n = 1
n = int(n)

arr = []

for i in range(0,10):
    arr.append(int(input())%42)

arr.sort()

for i in range(0,9):
    if arr[i] != arr[i+1]:
        n = n + 1

print(n)