#include<bits/stdc++.h>
using namespace std; 
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

    return 0;
}