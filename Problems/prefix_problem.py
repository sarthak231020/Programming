N,Q = list(map(int,input().split()))
l = list(map(int,input().split()))
p = [0]*N
p[0] = l[0]+0
for i in range(1,len(l)):
    p[i] = l[i]+p[i-1]

while(Q):
    q1 = list(map(int,input().split())) 
    q1[1] = q1[1]-1
    q1[2] = q1[2]-1
    if(q1[0] == 1):
        for i in range(q1[1],q1[2]+1):
            if(l[i] == 0):
                l[i] = 1
            else:
                l[i] = 0
        p[0] = l[0]
        for i in range(1,len(l)):
            p[i] = l[i]+p[i-1]
    elif(q1[0] == 2):
        print(sum(p[q1[1]:q1[2]+1]))
    Q -= 1