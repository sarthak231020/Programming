# T = int(input())

# for i in range(T):
#     count = 0
#     N = int(input())
#     l = list(map(int,input().split(" ")))
#     # if(l[0] > l[1]):
#     #     count += 1
#     # for m in range(len(l)):
#     #     if(list(l[m]) > l[:m]):
#     #         count+=1
#     # print(count)
#     flag = True
#     k = 0 
#     for j in range(len(l)):
#         flag = True
#         for k in range(j):
#             if(l[k] > l[j]):
#                 flag = False
#                 # print(l[k],l[j])
#                 break
            
#         if(flag == True):
#             print(l[j],l[k])
#             count += 1 
#     print(count)



T = int(input())

for i in range(T):
    N = int(input()) 
    l = list(map(int,input().split(" ")))
    count = 0
    flag = False
    if(l[0] > l[1]):
        count += 1
    for j in range(len(l)):
        for k in range(j):
            flag = False
            if(l[j] > l[k]):
                flag = True
            else:
                break
        if(j<len(l)-1 and flag == True):   
            if(l[j] > l[j+1]):
                count += 1
        if(j == len(l)-1 and flag == True):
            count += 1
    print(f"Case #{i+1}: {count}")