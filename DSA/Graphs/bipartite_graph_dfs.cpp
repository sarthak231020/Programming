
#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    bool bipartiteDfs(vector<int> &color,vector<int> adjlist[],int node)
    {
        if(color[node] == -1)
            color[node] = 1;
        for(auto adj:adjlist[node])
        {
            if(color[adj] == -1)
            {
                color[adj] = 1-color[node];
                if(bipartiteDfs(color,adjlist,adj) == false)
                    return false;
            }
            else if(color[adj] == color[node])
            {
                return false;
            }
        }
        return true;
    }
    bool checkForBipartite(vector<int> adjlist[],int V)
    {
        vector<int> color(V+1,-1);
        for(int i=1;i<=V;i++) 
        {
            if(color[i] == -1)
            {
                if(!bipartiteDfs(color,adjlist,i))
                {
                    return false;
                }
            }
        }
        return true;
    }
};

int main() 
{
    int V,E; //V->No. Of Vertices E-No. of Edges
    cin>>V>>E;

    vector<int> adjlist[V+1]; //In order to store Adj list.
    for(int i=0;i<E;i++)
    {
        int v1,v2; //For Edge definition
        cin>>v1>>v2;
        adjlist[v1].push_back(v2);
        adjlist[v2].push_back(v1);    
    }
    Solution obj;
    if(obj.checkForBipartite(adjlist,V))
    {
        cout<<"It is bipartite"<<endl;
    }
    else 
    {
        cout<<"It is not bipartite"<<endl;
    }
    cout<<endl;
}

