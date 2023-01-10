#https://codeup.kr/problem.php?id=6079
#https://codeup.kr/showsource.php?id=25087176
a = int(input())
trun = 0
hap = 0
while 1:
    trun += 1
    hap = hap + trun
    if hap < a:
        continue
    else:
        break
print(trun)
