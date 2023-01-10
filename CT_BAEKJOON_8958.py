#https://www.acmicpc.net/problem/8958
#https://www.acmicpc.net/source/40170943

"""
n = int(n)
a = []
total = 0
total = int(total)

a = list(map(int,input().split()))
"""

n = input()
n = int(n)
a = []
point = 1
point = int(point)
addpoint = 0
addpoint = int(addpoint)

for i in range(0 , n):
    A = input()
    for i in range(0 , len(A)):
        a.append(A[i:i+1])
    for i in range( 0 , len(A)):
        if a[i] == 'O':
            addpoint = point + addpoint
            point = point + 1

        else:
            point = 1
    print(addpoint)
    addpoint = 0
    point = 1
    a = []