#include<bits/stdc++.h> 
using namespace std;

int grid(int N,int M,int i,int j) 
{
    if(i >= N || j>=M) 
        return 0;

    if(i==N-1 && j == M-1)
        return 1;
    
    return grid(N,M,i+1,j)+grid(N,M,i,j+1);
}

int gridDP(int N,int M,int i,int j,vector<vector<int>> &dp) 
{
    if(i >= N || j>=M) 
        return 0;

    if(i==N-1 && j == M-1)
        return 1;

    if(dp[i][j] != -1) 
        return dp[i][j];
    
    return dp[i][j] = gridDP(N,M,i+1,j,dp)+gridDP(N,M,i,j+1,dp); 
}

int UniquePath(int n,int m) 
{
    int N=n+m-2;
    int R=m-1;
    double res = 1.0;
    //N
    // C
    //  R
    for(int i=1;i<=R;i++) 
    {
        res = res*(N-R+i)/i;
    }
    return (int)res;
}


int main() 
{
    int N,M; 
    cin>>N>>M;

    cout<<grid(N,M,0,0)<<endl;

    vector<vector<int>> dp(N,vector<int> (M,-1));

    
    cout<<gridDP(N,M,0,0,dp)<<endl;

    cout<<UniquePath(N,M)<<endl;


}