#https://www.acmicpc.net/problem/1157
#https://www.acmicpc.net/source/50267353

letter = input()
letter = letter.lower()
alpha = []
"""
for i in range(0,26):
    alpha.append(i+15)
max = 0
for i in alpha:
    if max < i:
        max = i
print(i)
"""

for i in range(0,26):
    alpha.append(letter.count(chr(i+97)))

location = 0
num = 0
#print(alpha)
for i in range(0,26):
    if int(alpha[i]) > num:
        num = alpha[i]
        location = i+65
        #print(i)
cnt = 0
for i in alpha:
    if i == num:
        cnt = cnt + 1

if cnt > 1:
    print('?')
else:
    print(chr(location))