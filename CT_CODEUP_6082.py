#https://codeup.kr/problem.php?id=6082
#https://codeup.kr/showsource.php?id=24839476

n = int(input())

for i in range(1,n+1):
    if (i%10)%3 == 0 and i%10 != 0:
        print("X ",end="")
    elif i > 10 and (i/10)%3 == 0:
        print("X ",end="")
    elif i > 10 and (i%10)%3 == 0 and (i/10)%3 == 0:
        print("XX ",end="")
    else:
        print(i,end=" ")

