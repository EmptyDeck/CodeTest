#https://www.acmicpc.net/problem/10872
#https://www.acmicpc.net/source/51636170
def f(x):
    if x == 1:
        return 1
    return x * f(x-1)
num = int(input())
if num == 0:
    print(1)
else:
    print(f(num))