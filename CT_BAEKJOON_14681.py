#https://www.acmicpc.net/problem/14681
#https://www.acmicpc.net/source/41979354

a = input()
b = input()
a = int(a)
b = int(b)


if a>0 and b > 0:
    print(1)
elif a>0 and b <0:
    print(4)
elif a<0 and b<0:
    print(3)
elif a<0 and b > 0:
    print(2)