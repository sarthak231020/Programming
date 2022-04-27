#include<bits/stdc++.h> 
using namespace std; 

int main() 
{
    int n,m; //here N->no of Nodes , M->No of edges.
    cin>>n>>m;
    vector<vector<int>> adj(n+1,vector<int> (n+1,0)); //N+1 , M+1 since we are taking 1 based indexing.
    
    for(int i=1;i<=m;i++) 
    {
        int u,v;
        cin>>u>>v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    for(int i=1;i<=n;i++) 
    {
        for(int j=1;j<=n;j++) 
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}