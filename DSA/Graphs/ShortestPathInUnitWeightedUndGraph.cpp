#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int V,E,src; //V->No. Of Vertices E-No. of Edges
    cin>>V>>E>>src;

    vector<int> adjlist[V+1]; //In order to store Adj list.
    vector<int> dist(V,INT_MAX);
    for(int i=0;i<E;i++)
    {
        int v1,v2; //For Edge definition
        cin>>v1>>v2;
        adjlist[v1].push_back(v2);
        adjlist[v2].push_back(v1);    //Since it is undirected graph
    }

    queue<int> q;
    q.push(src);
    dist[src] = 0;

    while(!q.empty()) 
    {
        int node = q.front();
        q.pop();

        for(auto adj:adjlist[node]) 
        {
            if(dist[adj] > dist[node]+1)
            {
                q.push(adj);
                dist[adj] = dist[node]+1;
            }
        }   
    }

    for(auto i:dist) 
    {
        cout<<i<<" ";
    }
    cout<<endl;
}