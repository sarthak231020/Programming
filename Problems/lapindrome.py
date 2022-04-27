# T = int(input())

# while(T):
#     s1 = input()
#     s = [k for k in s1]
#     if(len(s)%2 == 0):
#         if(sorted(s[:len(s)//2]) == sorted(s[len(s)//2:])):
#             print("YES")
#         else:
#             print("NO")
#     else:
#         if(sorted(s[:len(s)//2]) == sorted(s[len(s)//2+1:])):
#             print("YES")
#         else:
#             print("NO")
        
#NZEC IN CODECHEF 
# # s = "Govinda"
# # l = [i for i in s] 
# # print(sorted(l))
# # print(l)



# cook your dish here
T = int(input()) 
while(T):
    s1 = input()
    l = list(s1[:len(s1)//2])    
    r = list(s1[len(s1)-len(s1)//2:])
    if(sorted(l) == sorted(r)):
        print("YES")
    else:
        print("NO")
    