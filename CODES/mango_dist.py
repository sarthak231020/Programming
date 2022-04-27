def fact(n):
    if(n<=1):
        return n
    else:
        return n*fact(n-1)

m,n = list(map(int,input().split())) 

print(fact(m+n-1)/(fact(n-1)*fact(m)))

