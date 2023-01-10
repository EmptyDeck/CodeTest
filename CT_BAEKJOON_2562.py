#https://www.acmicpc.net/problem/2562
#https://www.acmicpc.net/source/40152331


a=[]
for i in range(0 , 9):
    B = input()
    B = int(B)
    a.append(B)

print(max(a))
print((a.index(max(a)))+1)