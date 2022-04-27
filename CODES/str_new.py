s = "hello world"
l = [] 
for i in range(len(s)):
    if(s[i] != ' '):
        l.append(s[i])
low = 0
high = len(l)-1

while(low < high):
    temp = l[low]
    l[low] = l[high]
    l[high] = temp

    low += 1
    high -= 1

s = "".join(l)
print(s)