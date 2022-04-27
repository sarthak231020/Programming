for i in range(int(input())):
     x, y = map(int,input().split())
     z = pow(2,x,1000000007)-1
     print(pow(z,y,1000000007))