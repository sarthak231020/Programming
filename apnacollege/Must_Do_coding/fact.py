T = int(input())
def f(n):
    if(n == 0):
        return 1
    return n*f(n-1)
while(T):
    n = int(input()) 
    fact = f(n)
    fact = str(fact)
    print(fact)
    count = 0
    for i in range(len(fact)-1,0,-1):
        if(fact[i] == "0"):
            count += 1
        else:
            break
    print(count)
    T = T-1