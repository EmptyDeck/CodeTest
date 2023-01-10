#https://www.acmicpc.net/problem/2439
#https://www.acmicpc.net/source/41982172

a = input()
a = int(a)

for i in range(1,a+1):
    for k in range(1,a-i+1):
        print(" ",end="")
    for t in range(1,i+1):
        print("*",end="")
    print("")