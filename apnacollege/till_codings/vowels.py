s = input()
s = s.lower()
c = 0
for i in s:
    if(i=='a' or i=='e' or i=='o' or i=='u' or i=='i'):
        c = c+1
print(c)