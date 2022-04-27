T = int(input())
m = 2000
is_prime = [1]*m
def sieve():
    is_prime[0] = 0 
    is_prime[1] = 0
    for i in range(2,sqrt(m)):
        if(is_prime[i]):
            for j in range(i*i,m,j+i):
                is_prime[j] = 0

while(T):
    a = int(input()) 
    b = int(input())
    for i in range(a,b-5):