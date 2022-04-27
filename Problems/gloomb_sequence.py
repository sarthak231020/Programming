MAX = 100001
arr = [0]*MAX
def GolombSequence(N): 
  
  
    cnt = 0
  
    arr[0] = 0
    arr[1] = 1
  
    M = dict() 
  
    M[2] = 2
  
    for i in range(2, N + 1): 
  
        if (cnt == 0): 
            arr[i] = 1 + arr[i - 1] 
            cnt = M[arr[i]] 
            cnt -= 1

        else: 
            arr[i] = arr[i - 1] 
            cnt -= 1
  
        M[i] = arr[i] 
   
  
T = int(input())

for i in range(T):
    l = list(map(int,input().split())) 
    L = l[0] 
    R = l[1] 
    GolombSequence(R)
    s = 0
    for i in range(L,R+1):
        s+=(arr[i]*arr[i])
    print(s)

