#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int V,E; //V->No. Of Vertices E-No. of Edges
    cin>>V>>E;

    vector<int> adjlist[V+1]; //In order to store Adj list.
    vector<int> vis(V+1,0);
    for(int i=0;i<E;i++)
    {
        int v1,v2; //For Edge definition
        cin>>v1>>v2;
        adjlist[v1].push_back(v2); //Since it is Undirected.
        adjlist[v2].push_back(v1);    
    }

    for(int i=1;i<=V;i++) //To cover disconnected components.
    {   
        // if(vis[i] == 0) // if not visited 
        // {
                //dfs(i) or bfs(i);
                // count++; for count no of components in a disconnected graph
        // }
        //In order to cover all disconnected components............
    }
}