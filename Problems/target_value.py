# def pairs(N,K,L):
#     c = 0 
#     for i in range(len(L)-1,0,-1):
#         j = i-1
#         while(L[i]-L[j] <= K and j>-1):
#             if(L[i]-L[j] == K):
#                 c = c+1 
#                 break
#             j = j-1
#     print(c)

# N,K = list(map(int,input().split()))
# L = list(map(int,input().split())) 
# L = sorted(L)
# print(L)
# pairs(N,K,L)

# "in" operator have O(1) complexity on sets and hash here also Duplicate pairs are not allowed so converted it into the set for that....................

def pairs(k, arr):
    q = 0
    n = len(arr)
    arr = set(arr)
    h = len(arr) - n
    for i in arr:
        if i+k in arr:
            q+=1
    return q+h
nk = input().split()
n = int(nk[0])
k = int(nk[1])
arr = list(map(int, input().rstrip().split()))
result = pairs(k, arr)
print(result)

