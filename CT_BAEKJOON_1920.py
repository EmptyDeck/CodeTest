#https://www.acmicpc.net/problem/1920
#https://www.acmicpc.net/source/51614749

#2022/11/09 이분탐색

def twice(findnum,findnumtmp):

    if findnumtmp == int(findnum):
        if find[i] == deck[0]:
            print(1)
        else:
            print(0)
        return 1
    else:
        return 0

cardcnt = int(input())
deck = list(map(int,input().split()))
deck = sorted(deck)
findcnt = int(input())
find = list(map(int,input().split()))
#print(deck)
for i in range(findcnt):
    findnum = cardcnt / 2
    max = cardcnt
    min = 0
    while(1):
        findnumtmp = int(findnum)
        if findnum >= len(deck):
            print(0)
            break
        if find[i] == deck[int(findnum)]:
            #print(int(findnum),end=" ")
            print(1)
            break
        if find[i] >= deck[int(findnum)]:
            min = int(findnum)
            findnum = (max + int(findnum) + 1)/2
            if twice(findnum,findnumtmp) == 1:
                break
        else:
            max = int(findnum)
            findnum = (int(findnum) + min + 1) / 2
            if twice(findnum,findnumtmp) == 1:
                break