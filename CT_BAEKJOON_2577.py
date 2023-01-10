#https://www.acmicpc.net/problem/2577
#https://www.acmicpc.net/source/40152673

A = input()
B = input()
C = input()
A = int(A)
B = int(B)
C = int(C)

total = A * B * C

a=[]

for i in range(0 , len(str(total))):
    one = total % 10
    total = total // 10
    a.append(one)

for i in range(0 , 10):
    print(a.count(i))