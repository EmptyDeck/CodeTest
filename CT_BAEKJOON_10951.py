#https://www.acmicpc.net/problem/10951
#https://www.acmicpc.net/source/40150701

A = 1
B = 1

while (True):
    try:
        A,B=input().split()
        A = int(A)
        B = int(B)
        print(A+B)
    except:
        break
