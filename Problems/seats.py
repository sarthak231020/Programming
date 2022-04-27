T = int(input()) 
grp = 0
while(T):
    N = int(input())
    grp = 0
    prev = 0
    while(N):
        cur = N%10
        if((prev==0) and (cur==1)):
            grp = grp+1
        prev = cur
        N = N/10
    print(grp)
    T = T-1
