#https://www.acmicpc.net/problem/15577
#https://www.acmicpc.net/source/51748399

#2022/11/15
times = int(input())
listofnum = []
for i in range(times):
    listofnum.append(int(input()))
listofnum = sorted(listofnum)
for i in range(times-1):
    avr = (listofnum[0] + listofnum[1])/2
    del listofnum[0]
    del listofnum[0]
    listofnum.append(avr)
    listofnum = sorted(listofnum)

print(listofnum[0])