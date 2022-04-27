# def climbing(scores, chacha):
#     unique_scores = list(reversed(sorted(set(scores))))

#     i = len(chacha)-1
#     j = 0
#     ans = []

#     while i >= 0:
#         if j >= len(unique_scores) or unique_scores[j] <= chacha[i]:
#             ans.append(j+1)
#             i -= 1
#         else:
#             j += 1

#     return reversed(ans)
# scores_count = int(input())
# scores = list(map(int, input().rstrip().split()))
# chacha_count = int(input())
# chacha = list(map(int, input().rstrip().split()))
# result = climbing(scores, chacha)
# print(list(result))
def climbing_scores(V,V1):
    i = len(V1)-1
    j = 0
    ans = [] 
    while i>=0:
        if j >= len(V) or V[j] <= V1[i]:
            ans.append(j+1) 
            i = i-1
        else:
            j = j+1
    return reversed(ans) 

N = int(input())
V = list(map(int,input().split()))
V = list(reversed(sorted(set(V))))
M = int(input()) 
V1 = list(map(int,input().split())) 

result = climbing_scores(V,V1)

print(list(result)) 