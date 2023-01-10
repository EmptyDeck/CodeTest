#https://www.acmicpc.net/problem/10816
#https://www.acmicpc.net/source/51643601

def areyouinrange(findnum):
    if findnum > deck[len(deck)-1]:#bigger then biggest
        return 0
    elif findnum < deck[0]:#smaller then smallest
        return 0
    else:
        return 1

cardcnt = int(input())
deck = list(map(int,input().split()))
deck = sorted(deck)
findcnt = int(input())
find = list(map(int,input().split()))

global maxnum
global minnum


def binarysearch(i):#i is the find number
    findnum = cardcnt / 2
    global maxnum
    maxnum = cardcnt
    global minnum
    minnum = 0

    while (1):
        findnumtmp = int(findnum)
        if findnum >= len(deck):  # 검색대상이 모든 덱보다 클때
            #print(0, end=' ')
            break
        if i == deck[int(findnum)]:  # 검색대상을 정확히 찾았을때
            return isitmorethenone(i, int(findnum), len(deck))
            #print(searching(i, int(findnum), len(deck)), end=' ')
            break
        if i >= deck[int(findnum)]:  ###상위 탐색
            minnum = int(findnum)  # 최소의 범위 줄임
            findnum = (maxnum + int(findnum) + 1) / 2
            # if twice(findnum,findnumtmp) == 1:#탐색에 진전이 있는지 확인
            # break#no progress (1) = print and out
        else:  ####하위 검색
            maxnum = int(findnum)  # 최대의 범위를 줄임
            findnum = (int(findnum) + minnum + 1) / 2
            if findnumtmp == int(findnum):
                if i == deck[0]:
                    return 1
                return 0
                break


for i in find:
    if areyouinrange(i) == 0:  # are you in range ?
        print(0, end=' ')  # no
    else:
        binarysearch(i + 0.5)
        binmin1 = minnum
        binarysearch(i - 0.5)
        binmin2 = minnum
        if binmin2 == 0:  # if the finding number is at the first
            binmin2 = binmin2 - 1  # we have to add one more
        print(binmin1 - binmin2, end=' ')