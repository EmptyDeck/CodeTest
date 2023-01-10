#https://www.acmicpc.net/problem/9843
#https://www.acmicpc.net/source/51752252

times = int(input())
menues = []
lists = []
ram = None
sum = 0

for i in range(times):
    menues.append(input())
i = 0
while(1):

    try:
        menu,num = menues[i].split()
    except:
        menu = menues[i]
    num = int(num)
    if menu == "PUSH":
        lists.append(num)
    elif menu == "STORE":
        ram = lists[len(lists)-1]
        lists.pop()
    elif menu == "LOAD":
        lists.append(ram)
    elif menu == "PLUS":
        sum = lists[len(lists)-1] + lists[len(lists)-2]
        lists.pop()
        lists.pop()
        lists.append(sum)
    elif menu == "TIMES":
        sum = lists[len(lists) - 1] * lists[len(lists) - 2]
        lists.pop()
        lists.pop()
        lists.append(sum)
    elif menu == "IFZERO":
        if lists[len(lists)-1] == 0:
            lists.pop()
            i = num
            continue
        else:
            lists.pop()
    elif menu == "DONE":
        print(lists[len(lists)-1])
        break
    i = i + 1
