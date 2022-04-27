N = int(input())
s = input()
Q = int(input())
l = [i for i in s]

for i in range(Q):
    pos = int(input()) 
    c = l[pos-1]
    print(l[:pos-1].count(c))
    
