#include<bits/stdc++.h>
using namespace std;

//Topolocal sort is linear ordering of vertices such that if there is an edge U->V, U appears before V in that ordering.
//Topological sort is only applied on directed acyclic graph.

void dfs(vector<pair<int,int>> adjList[],vector<int> &vis,int node,stack<int> &ans) 
{
    // cout<<"Running : "<<node<<endl;
    vis[node] = 1;

    for(auto adj:adjList[node]) 
    {
        if(vis[adj.first] == 0) 
        {
            dfs(adjList,vis,adj.first,ans);
        }
    } 
    
    ans.push(node);
}

int main() 
{
    int N,E;
    cin>>N>>E;

    vector<pair<int,int>> adjList[N];

    for(int i=0;i<E;i++) 
    {
        int U,V,Weight;
        cin>>U>>V>>Weight;
        adjList[U].push_back({V,Weight}); //Since it is directed.
    }
    //Step - 1->find topo sort of given graph
    stack<int> ans; //To store topo 
    vector<int> vis(N,0);
    for(int i=0;i<N;i++) 
    {
        if(vis[i] == 0)
        {
            dfs(adjList,vis,i,ans);
        }
    }
   
    vector<int> dist(N,INT_MAX);
    dist[ans.top()] = 0;

    while(!ans.empty()) 
    {
        int node = ans.top();
        ans.pop();
        if(dist[node] != INT_MAX)
        {
            for(auto adj:adjList[node])
            {
                if(dist[node]+adj.second < dist[adj.first])
                {
                    dist[adj.first] = dist[node]+adj.second;
                }
            }
        }
    }

    for(auto i:dist) 
    {
        cout<<i<<" ";
    }

    cout<<endl;
}