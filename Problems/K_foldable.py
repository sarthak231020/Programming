from  itertools import permutations
T = int(input())

while(T):
    N,K = list(map(int,input().split()))
    S1 = input()
    S = [i for i in S1]
    S.sort()
    P = permutations(S)
    for i in list(P):
        print(i) 
    # flag = True
    # for j in list(P):
    #     k = j
    #     while(len(j) > K):
    #         for i in range(1,K+1):
    #             if(j[(2*K)-i+1] != j[i]):
    #                 flag = False
    #                 print("IMPOSSIBLE")
    #                 break
    #         if(flag == False):
    #             break
    #         j = j[K:]
    # if(flag == True):
    #     print(k)
    # T -= 1