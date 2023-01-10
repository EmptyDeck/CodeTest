#https://www.acmicpc.net/problem/10828
#https://www.acmicpc.net/source/50717470

#2022/10/16

#10828

import sys

rear = 0

front = 0

def push(x):

    global rear

    rear = rear + 1

    stuff[rear] = x

def pop():

    global rear

    if rear == 0:

        print(-1)

        return

    print(stuff[rear])

    rear = rear - 1

def size():

    print(rear)

def empty():

    if rear == 0:

        print(1)

        return

    print(0)

def top():

    if rear == 0:

        print(-1)

        return

    print(stuff[rear])

repeat = int(input())

stuff = [0 for _ in range(10002)]

num = 0

for i in range(0,repeat):

    menuss = sys.stdin.readline().split()

    if menuss[0] == 'push':

        push(menuss[1])

    elif menuss[0] == 'top':

        top()

    elif menuss[0] == 'size':

        size()

    elif menuss[0] == 'empty':

        empty()

    elif menuss[0] == 'pop':

        pop()

