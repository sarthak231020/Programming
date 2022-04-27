N = int(input()) 
l = input().split(" ")
b = [i for i in l[0]]
g = [i for i in l[1]]

while(len(b) > 0):
    if(b[0] not in g):
        break
    if(b[0] == g[0]):
        b.pop(0)
        g.pop(0)
    else:
        temp = g[0]
        g.pop(0)
        g.append(temp)
print(len(b)) 