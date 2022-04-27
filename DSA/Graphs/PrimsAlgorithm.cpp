#include<bits/stdc++.h>
using namespace std; 

void solve(vector<pair<int,int>> adjList[],int N) 
{   //TC -> O(N ^ 2).
    vector<bool> mst(N,false);
    vector<int> parent(N,-1);
    vector<int> key(N,INT_MAX);

    key[0] = 0;
    parent[0] = -1;

    for(int count=0;count<N-1;count++)  //Since we need to include 
    { 
        int mini = INT_MAX,u;

        for(int v=0;v<key.size();v++) 
        {
            if(mst[v]==false && mini > key[v])
                mini = key[v] , u=v;
        }
        mst[u] = true;

        for(auto it:adjList[u]) 
        {
            int v = it.first;
            int weight = it.second;

            if(mst[v] == false && weight < key[v])
                key[v] = weight,parent[v] = u;
        }
    }

    for(int i=1;i<parent.size();i++)
    {
        cout<<parent[i]<<" - "<<i<<endl;
    }

}

void solveOpt(vector<pair<int,int>> adjList[],int N) 
{   //TC -> O((N+E)LogN) 
    vector<bool> mst(N,false);
    vector<int> parent(N,-1);
    vector<int> key(N,INT_MAX);

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    key[0] = 0;
    parent[0] = -1;
    pq.push({0,0});

    for(int count=0;count<N-1;count++)  //Since we need to include 
    { 
        int u = pq.top().second; //the minimum dist vertex.
        mst[u] = true; //Include it in mst.

        for(auto it:adjList[u]) 
        {
            int v = it.first;
            int weight = it.second;

            if(mst[v] == false && weight < key[v])
            {
                parent[v] = u;
                pq.push({key[v],v});
                key[v] = weight;
            }
        }
    }

    for(int i=1;i<parent.size();i++)
    {
        cout<<parent[i]<<" - "<<i<<endl;
    }

}


int main() 
{
    int N,E;
    cin>>N>>E;

    vector<pair<int,int>> adjList[N+1];

    for(int i=0;i<E;i++) 
    {
        int U,V,W; 
        cin>>U>>V>>W;
        adjList[U].push_back({V,W});
        adjList[V].push_back({U,W});
    }

    solve(adjList,N);

    return 0;
}