# T = int(input())

# for i in range(T):
#     P = input()
#     S = input()
#     # L = [i for i in S]
#     for i in P:
#         for j in S:
#             if(i == j):
#                 print(j,end="")
#     print()


#Optimized approach.......

T = int(input())
for i in range(T):
    P = input()
    S = input()
    l = [] 
    for i in S:
        l.append(P.find(i))
    l.sort()
    for j in range(len(l)):
        print(P[l[j]],end="")
    print()
    