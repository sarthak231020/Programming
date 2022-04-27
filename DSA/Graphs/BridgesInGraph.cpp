#include<bits/stdc++.h>
using namespace std;

void dfs(int node,int parent,vector<int> &vis,vector<int> &tin,vector<int> &low,int &timer,vector<vector<int>> adjList)
{
    vis[node] = 1;
    tin[node] = vis[node] = timer++;

    for(int adj:adjList[node]) 
    {
        if(adj == parent) 
            continue;
        if(vis[adj] == 0)
        {
            dfs(adj,node,vis,tin,low,timer,adjList);
            low[node] = min(low[node],low[adj]);
            if(low[adj] > tin[node])
                cout<<node<<" "<<adj<<endl;
        }
        else 
            low[node] = min(low[node],tin[adj]);
    }
}

int main() 
{
    int V,E;
    cin>>V>>E;

    vector<vector<int>> adjList(V,vector<int> ());
    for(int i=0;i<E;i++) 
    {
        int U,V; 
        cin>>U>>V;
        adjList[U].push_back(V); 
        adjList[V].push_back(U);
    }

    vector<int> vis(V,0),tin(V,-1),low(V,-1);
    int timer = 0;
    for(int i=0;i<V;i++) 
    {
        if(vis[i] == 0) 
        {
            dfs(i,-1,vis,tin,low,timer,adjList); 
        }
    }
   
}