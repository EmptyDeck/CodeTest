#https://www.acmicpc.net/problem/11021
#https://www.acmicpc.net/source/40143947
    
A = input()

A = int(A)

for i in range(1,A+1):
    B , C = input().split()
    B = int(B)
    C = int(C)
    print("Case #%d: %d" %(i , B + C))