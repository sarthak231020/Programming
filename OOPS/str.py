s = input()
s = s.lower()
l = [] 
for i in range(len(s)):
    l.append(s[i])
l1 = []
for i in range(len(l)):
    if(l[i] == 'a' or l[i] == 'e' or l[i] == 'i' or l[i] == 'o' or l[i] == 'u'):
        pass
    else:
        l1.append(l[i])
print(l1)
l1.reverse()
print(l1)