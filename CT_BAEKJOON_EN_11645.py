#https://www.acmicpc.net/problem/11645
#https://www.acmicpc.net/source/51747159

running = int(input())

for i in range(running):
    listofcities = []
    cnt = 0
    cities = int(input())
    for j in range(cities):
        city = input()
        if city in listofcities:
            continue
        else:
            listofcities.append(city)
            cnt = cnt + 1
    print(cnt)
