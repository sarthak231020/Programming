import math
s = 0
N = int(input())

l = list(map(int,input().split())) 
for x in l:
    s1 = str(math.pow(1<<1,x))
    s1 = s1[:-2] if(len(s1)>2) else s1
    s += int(s1)
    
print(s%100) 
