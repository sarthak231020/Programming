#include<bits/stdc++.h>
using namespace std;

//This is AC mine Solution on gfg.
class Solution{
    public:
    void solve(int i,int j,vector<vector<int>> &m, int N,vector<vector<int>> &vis,string out,vector<string> &ans)
    {
        if(i>=N || i < 0 || j>=N || j < 0 || vis[i][j] || m[i][j] == 0) 
            return;
        if(i == N-1 && j==N-1) 
        {
            ans.push_back(out);
        }
        
        //follow D L R U fashion since we need answers in lexacographically sorted.
        vis[i][j] = true;
        solve(i+1,j,m,N,vis,out+"D",ans);
        solve(i,j-1,m,N,vis,out+"L",ans);
        solve(i,j+1,m,N,vis,out+"R",ans);
        solve(i-1,j,m,N,vis,out+"U",ans);
        vis[i][j] = false;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        vector<vector<int>> vis(n,vector<int> (n,0));
        solve(0,0,m,n,vis,"",ans);
        if(ans.empty()) 
        {
            ans.push_back("-1");
        }
        return ans;
        // Your code goes here
    }
};


//Striver's Code
class Solution{
    void solve(int i, int j, vector<vector<int>> &a, int n, vector<string> &ans, string move, 
    vector<vector<int>> &vis, int di[], int dj[]) {
        if(i==n-1 && j==n-1) {
            ans.push_back(move);
            return; 
        }
        string dir = "DLRU"; 
        for(int ind = 0; ind<4;ind++) {
            int nexti = i + di[ind]; 
            int nextj = j + dj[ind]; 
            if(nexti >= 0 && nextj >= 0 && nexti < n && nextj < n && !vis[nexti][nextj] && a[nexti][nextj] == 1) {
                vis[i][j] = 1; 
                solve(nexti, nextj, a, n, ans, move + dir[ind], vis, di, dj);
                vis[i][j] = 0; 
            }
        }
        // downward
        // if(i+1<n && !vis[i+1][j] && a[i+1][j] == 1) {
        //     vis[i][j] = 1; 
        //     solve(i+1, j, a, n, ans, move + 'D', vis);
        //     vis[i][j] = 0; 
        // }
        
        // // left
        // if(j-1>=0 && !vis[i][j-1] && a[i][j-1] == 1) {
        //     vis[i][j] = 1; 
        //     solve(i, j-1, a, n, ans, move + 'L', vis);
        //     vis[i][j] = 0; 
        // }
        
        // // right 
        // if(j+1<n && !vis[i][j+1] && a[i][j+1] == 1) {
        //     vis[i][j] = 1; 
        //     solve(i, j+1, a, n, ans, move + 'R', vis);
        //     vis[i][j] = 0; 
        // }
        
        // // upward
        // if(i-1>=0 && !vis[i-1][j] && a[i-1][j] == 1) {
        //     vis[i][j] = 1; 
        //     solve(i-1, j, a, n, ans, move + 'U', vis);
        //     vis[i][j] = 0; 
        // }
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        vector<vector<int>> vis(n, vector<int> (n, 0)); 
        int di[] = {+1, 0, 0, -1}; 
        int dj[] = {0, -1, 1, 0}; 
        //          D   L  R  U  
        if(m[0][0] == 1) solve(0,0,m,n, ans, "", vis, di, dj); 
        return ans; 
    }
};