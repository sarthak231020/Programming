l = list(map(int,input().split()))
n = int(input())
# l1 = l[::2]
# l2 = l[1::2] 
if(n%2 == 0):
    d = 2
    print(0+(n-1)*d)
else:
    d = 1
    print(0+(n-1)*d) 