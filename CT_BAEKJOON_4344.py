#https://www.acmicpc.net/problem/4344
#https://www.acmicpc.net/source/40175231

n = input()
n = int(n)


for i in range(0 , n):
    #resetting things
    lis = []
    stu = 0
    stu = int(stu)
    avr = 0
    total = 0


    lis = list(map(int,input().split()))
    lth = lis[0]
    lis.remove(lis[0])

    total  = sum(lis)
    avr = total / len(lis)

    for i in lis:
        if i > avr:
            stu += 1
        else:
            continue

    print(str('{:.3f}'.format(round(stu/len(lis)*100,3)))+"%")        


