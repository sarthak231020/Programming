def fact(n):
    if(n==0):
        return 1
    return n*(fact(n-1))
T = int(input())
while(T):
    n = int(input())
    print(fact(n))
    factorial = fact(n)
    s = str(factorial)
    print(s)
    count = 0
    print(s)
    for i in s:
        count += 1
    print(count)
    # count = 0
    # while(factorial%10 == 0):
    #     count += 1
    #     factorial /= 10
    # print(count)
    T = T-1