#https://www.acmicpc.net/problem/1330
#https://www.acmicpc.net/source/41978731

a ,b = input().split()

a = int(a)
b = int(b)



if a>b:
    print(">")
elif a<b:
    print("<")
elif a==b:
    print("==")