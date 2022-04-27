#include<bits/stdc++.h> 
using namespace std;

bool dfs(vector<int> adjList[],vector<int> &dfsVisit,vector<int> &visit,int node)
{
    visit[node] =1;
    dfsVisit[node] = 1;
    for(auto adj:adjList[node]) 
    {
        if(!visit[adj])
        {
            if(dfs(adjList,dfsVisit,visit,adj))
                return true;
        }
        else if(dfsVisit[adj])
            return true;
    }
    dfsVisit[node] = 0;
    return false;
}

bool CheckForCycle(vector<int> adjList[],int N)
{

    vector<int> visit(N+1,0);
    vector<int> dfsVisit(N+1,0);

    for(int i=1;i<=N;i++) 
    {
        if(visit[i] == 0)
        {
            if(dfs(adjList,dfsVisit,visit,i))
                return true;
        }
    }
    return false;
}

int main() 
{
    int N,E;
    cin>>N>>E;  
    vector<int> adjList[N+1];

    for(int i=0;i<E;i++) 
    {
        int U,V;
        cin>>U>>V;
        adjList[U].push_back(V);
    }

    cout<<CheckForCycle(adjList,N);

    return 0;
}