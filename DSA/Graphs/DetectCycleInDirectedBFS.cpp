#include<bits/stdc++.h> 
using namespace std;

int main() 
{
    int N,E;
    cin>>N>>E;

    vector<int> adjList[N];
    //Vertices are 1 to N.
    for(int i=0;i<E;i++) 
    {
        int U,V;
        cin>>U>>V;
        adjList[U].push_back(V);
    }

    vector<int> inDegree(N,0);

    for(int i=0;i<N;i++) 
    {
        for(auto j:adjList[i])
        {
            inDegree[j]++;
        }
    }

    queue<int> q;

    for(int i=0;i<inDegree.size();i++) 
    {
        cout<<inDegree[i]<<" ";
        if(inDegree[i] == 0) 
        {
            q.push(i);
        }
    }

    cout<<endl;

    vector<int> topo(N);
    int cnt = 0;
    while(!q.empty()) 
    {
        int node = q.front();
        q.pop();
        topo[cnt++] = node;

        for(auto i:adjList[node]) 
        {
            inDegree[i]--; 
            if(inDegree[i] == 0)
                q.push(i);
        }
    }

    if(cnt == N) //If we are able to make topological sort then it does not contain cycle. 
        cout<<"No cycle in the graph"<<endl;
    else 
        cout<<"Cycle is present in this graph"<<endl;
}
