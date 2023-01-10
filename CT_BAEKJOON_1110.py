#https://www.acmicpc.net/problem/1110
#https://www.acmicpc.net/source/41982903


a = input()
a = int(a)

ram = -2129381023810
turn = 0
while(ram != a):
    if turn == 0:
        ram = a
    if (10 > a):
        a * 10
    t = a // 10
    f = a % 10
    a=(t+f)%10+f*10
    turn = turn + 1
print(turn)