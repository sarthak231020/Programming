#include<bits/stdc++.h>
using namespace std;

int dp[100];

int solve(int ind) 
{
    if(ind == 0) 
        return 1;
    if(ind == 1) 
        return 1;
    if(dp[ind] != -1) 
        return dp[ind];
    return dp[ind] = solve(ind-1)+solve(ind-2);
}

int main() 
{
    int N; 
    cin>>N;
    memset(dp,-1,sizeof(dp)); 
    cout<<solve(N);
}