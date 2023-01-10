#https://www.acmicpc.net/problem/1009
#https://www.acmicpc.net/source/50467722

for i in range(0,int(input())):
    a,b = map(int,input().split())
    box = []
    first = a % 10
    while (1):
        box.append(first)
        first = first * a % 10
        if a % 10 == first:
            break
    if box[0] == 0:
        print('10')
    else:
        print(box[b % len(box) - 1])