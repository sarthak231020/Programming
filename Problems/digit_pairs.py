l = list(map(str,input().split())) 
l = l[1:]

l1 = [str(int(max(i))*11+int(min(i))*7) if(len(str(int(max(i))*11+int(min(i))*7))<=2) else(str(int(max(i))*11+int(min(i))*7)[1:]) for i in l]

l1 = [i[:-1] for i in l1]
l1 = list(map(int,l1))
dig = [0]*10

even = l1[::2]
odd = l1[1::2]
for i in range(len(even)):
    for j in range(i,len(even)):
        if(i!=j):
            if(even[i] == even[j]):
                if(dig[even[i]]<2):
                    dig[even[i]] += 1

for i in range(len(odd)):
    for j in range(i,len(odd)):
        if(i!=j):
            if(odd[i] == odd[j]):
                if(dig[odd[i]]<2):
                    dig[odd[i]] += 1
print(sum(dig))
