#https://codeup.kr/problem.php?id=6081
#https://codeup.kr/showsource.php?id=25089408
n=input()
n = int(n,16)

for i in range(1,16):
    print("%X*%X=%X"%(n,i,n*i))
