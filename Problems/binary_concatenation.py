T = int(input())

def binary_concat(x,y):
    binx = bin(x).replace("0b","")
    biny = bin(y).replace("0b","")
    binxplusY = binx+biny
    binyplusX  = biny+binx
    XplusY = int(binxplusY,2)
    YplusX = int(binyplusX,2)

    # print(XplusY,YplusX)
    return XplusY-YplusX



for i in range(T):
    N = int(input())
    l = list(map(int,input().split())) 
    
    maximum = 0 

    for i in range(len(l)):
        for j in range(len(l)):
            if(i!=j):
                if(maximum <= binary_concat(l[i],l[j])):
                    maximum = binary_concat(l[i],l[j])
    print(maximum)
    
        




# j =list(map(int,input().split()))
# l =[bin(i).replace("0b","") for i in j]

# print(j)
# print(l)

# l = list(map(bin().replace("0b",""),input().split()))
# print(l)