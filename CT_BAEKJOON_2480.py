#https://www.acmicpc.net/problem/2480
#https://www.acmicpc.net/source/41980368

a,b,c= input().split()

a = int(a)
b = int(b)
c = int(c)

if a==b:
    if b==c:
        print(a*1000+10000)
    else:
        print(a*100+1000)
elif b==c:
    print(b*100+1000)
elif a==c:
    print(a*100+1000)
else:
    if a>b:
        if a>c:
            print(a*100)
        else:
            print(c*100)
    elif b>c:
        print(b*100)
    else:
        print(c*100)

