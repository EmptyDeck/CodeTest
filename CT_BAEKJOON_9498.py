#https://www.acmicpc.net/problem/9498
#https://www.acmicpc.net/source/41978855
a = input()
a = int(a)


if 100>=a and a >=90:
    print("A")
elif 89>= a and a >=80:
    print("B")
elif 79 >= a and a>=70:
    print("C")
elif 69>=a and a>= 60:
    print("D")
else:
    print("F")