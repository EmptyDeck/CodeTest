#https://www.acmicpc.net/problem/5555
#https://www.acmicpc.net/source/51746469

find = input()
numlist = int(input())


cnt = 0

for i in range(numlist):
    letters = input()
    letters = letters*2
    if find in letters:
        cnt = cnt + 1
print(cnt)