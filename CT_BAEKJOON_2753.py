#https://www.acmicpc.net/problem/2753
#https://www.acmicpc.net/source/41979054

a = input()
a = int(a)


if (a%4==0 and a%100 != 0):
    print(1)
elif a%400==0:
    print(1)
else:
    print(0)