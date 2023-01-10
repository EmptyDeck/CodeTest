#https://www.acmicpc.net/problem/9237
#https://www.acmicpc.net/source/51754082

treescnt = int(input())
dates = list(map(int,input().split()))
dates = sorted(dates)

for i in range(treescnt):
    dates[i] = dates[i] - i

datemax = max(dates)

print(datemax + treescnt + 1)