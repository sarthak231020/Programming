T = int(input())
while(T):
    a = int(input())
    b = int(input()) 
    s1 = ""
    for i in range(a,b+1):
        s1 += str(i)
    arr = [0]*10
    c = 0 
    for i in s1:
        if(arr[int(i)] == 0):
            arr[int(i)] = 1
            c = c+1
    print(c)
    T = T-1
