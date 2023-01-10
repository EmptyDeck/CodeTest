#https://www.acmicpc.net/problem/2438
#https://www.acmicpc.net/source/41981962

a = input()
a = int(a)

for i in range(1,a+1):
    for i in range(1,i+1):
        print("*",end="")
    print("")
