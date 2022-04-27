# 25 30 35 20 90 110 45 70 80 12 30 35 85
# 1 2 3 4 2 3 

def calc_diff(a,n):
    s = sum(a)
    matrix = [[0 for i in range(s+1)] for j in range(n+1)]

    for i in range(n+1):
        matrix[i][0] = 1
    
    for i in range(1,n+1):
        for j in range(1,s+1):
            matrix[i][j] = matrix[i-1][j] 
            if(a[i-1] <= j):
                matrix[i][j] = matrix[i][j] | matrix[i-1][j-a[i-1]]

    for i in range(s//2,-1,-1):
        if(matrix[n][i] == 1):
            diff = s-(2*i)
            ind = i
            break
    return [diff,ind]

l = list(map(int,input().split()))

diff,ind = calc_diff(l,len(l))
print(diff+ind)