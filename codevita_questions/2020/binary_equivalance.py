from itertools import combinations

import psyco
psyco.full()
N = int(input())
L = list(map(int,input().split()))
L.sort()

# L1 = [bin(i).replace('0b',"") for i in L]
# len_last = len(bin(L[N-1]).replace('0b',''))
# print(len_last)
last = "0"+str(len(bin(L[N-1]).replace('0b','')))+"b"
# print(last)
L1 = [] 
for i in range(N-1):
    L1.append(format(L[i],last))
L1.append(bin(L[N-1]).replace('0b',''))

del L

c = 0
for i in L1:
    if(i.count('1') == i.count('0')):
        c += 1

s = "".join(L1)
if(s.count('1') == s.count('0')):
    c += 1

del s


for i in range(2,N):
    for j in list(combinations(L1,i)):
        s1 = ""
        s1 = "".join(list(j))
        if(s1.count('1') == s1.count('0')):
            c += 1
    # L2.append(list(combinations(L1,i)))

# del L1

# for i in range(len(L2)):
#     for j in L2[i]:
#         s1 = ""
#         s1 = "".join(list(j))
#         if(s1.count('1') == s1.count('0')):
#             c += 1
print(format(c,last))
        