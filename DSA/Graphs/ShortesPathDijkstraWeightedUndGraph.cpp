#include<bits/stdc++.h>
using namespace std;


void dijkstraAlgo(vector<pair<int,int>> adjList[],int Src,int N) 
{
    // cout<<"RUNNING"<<endl;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    vector<int> dist(N+1,INT_MAX);
    //Here the diffrence is we use Min heap 
    //Which will always keep the minimum node in top.
    dist[Src] = 0;
    pq.push({0,Src}); 

    while(!pq.empty()) 
    {
        int node = pq.top().second;
        pq.pop();
        // cout<<node<<endl;
        for(auto adj:adjList[node])
        {   
            if(dist[node]+adj.second < dist[adj.first])
            {
                dist[adj.first] = dist[node]+adj.second;
                pq.push({dist[adj.first],adj.first});
            }
        }
    }

    for(auto i:dist) 
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

int main() 
{
    int N,E,Src;
    cin>>N>>E>>Src;

    vector<pair<int,int>> adjList[N+1];

    for(int i=0;i<E;i++) 
    {
        int U,V,Weight;
        cin>>U>>V>>Weight;
        adjList[U].push_back({V,Weight});
        adjList[V].push_back({U,Weight});
    }

    dijkstraAlgo(adjList,1,N);
}