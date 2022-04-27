#include<bits/stdc++.h>
using namespace std;

//Topolocal sort is linear ordering of vertices such that if there is an edge U->V, U appears before V in that ordering.


void dfs(vector<int> adjList[],vector<int> &vis,int node,stack<int> &ans) 
{
    // cout<<"Running : "<<node<<endl;
    vis[node] = 1;

    for(auto adj:adjList[node]) 
    {
        if(vis[adj] == 0) 
        {
            dfs(adjList,vis,adj,ans);
        }
    } 
    ans.push(node);
}

int main() 
{
    int N,E;
    cin>>N>>E;

    vector<int> adjList[N];

    for(int i=0;i<E;i++) 
    {
        int U,V;
        cin>>U>>V;
        adjList[U].push_back(V);
    }

    stack<int> ans; 
    vector<int> vis(N,0);
    for(int i=0;i<N;i++) 
    {
        if(vis[i] == 0)
        {
            dfs(adjList,vis,i,ans);
        }
    }
    cout<<"RUNNING"<<endl;
    while(!ans.empty()) 
    {
        cout<<ans.top()<<" ";
        ans.pop();
    }

}