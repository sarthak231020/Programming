#include<bits/stdc++.h>
using namespace std; 
// GFG Article -> https://www.geeksforgeeks.org/minimize-cost-of-painting-n-houses-such-that-adjacent-houses-have-different-colors/
int solve(int i,int j,int last,int N,int M,vector<vector<int>> grid,vector<vector<int>> &dp) 
{
    if(j < 0 || j > M) 
    {
        return +1e8;
    }
    if(i == N-1) 
        return grid[i][j];
    if(dp[i][j] != -1) 
        return dp[i][j]; 

    int mini = +1e8;
    for(int dj1 = 0;dj1<=2;dj1++)  //M is always three. since we have only 3 colors.
    { 
        if(dj1 != last) 
        {
            mini = min(mini,grid[i][j] + solve(i+1,dj1,dj1,N,M,grid,dp));
        }
    }
    return dp[i][j] = mini;
}


int solveTab(vector<vector<int>> grid,int N,int M) 
{
    vector<vector<int>> dp(N,vector<int> (M,0));
    for(int j=0;j<M;j++) 
    {
        dp[N-1][j] = grid[N-1][j];
    }   

    for(int i=N-2;i>=0;i--) 
    {
        for(int j=2;j>=0;j--) 
        {   
            dp[i][j] = 1e8;
            for(int dj1=2;dj1>=0;dj1--)
            {
                if(j != dj1) 
                {
                    dp[i][j] = min(dp[i][j],grid[i][j]+dp[i+1][dj1]);
                }
            }
        }
    }

    return min(dp[0][0],min(dp[0][1],dp[0][2]));
}

int main() 
{
    int N,M;
    cin>>N>>M;

    vector<vector<int>> grid(N,vector<int> (M));

    for(int i=0;i<N;i++) 
    {
        for(int j=0;j<M;j++) 
        {
            cin>>grid[i][j];
        }
    }
    vector<vector<int>> dp(N,vector<int> (M,-1));
    int mini = INT_MAX;
    for(int j=0;j<M;j++) 
    {
        mini = min(mini,solve(0,j,3,N,M,grid,dp));
    }
    cout<<mini<<endl;

    for(auto i:dp) 
    {
        for(auto j:i) 
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<solveTab(grid,N,M)<<endl;
}