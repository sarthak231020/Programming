#include<bits/stdc++.h>
using namespace std;



class Solution
{
    bool checkForCycle(vector<int> &vis,vector<int> adjlist[],int node,int par)
    {
        vis[node] = 1;
        for(auto adj:adjlist[node])
        {
            if(vis[adj] == 0)
            {
                if(checkForCycle(vis,adjlist,adj,node))
                    return true;
            }
            else if(adj != par)
            {
                return true;
            }
        }
        return false;
    }
    public:
    bool isCycle(vector<int> adjlist[],int V)
    {
        
        vector<int> vis(V+1,0);
        for(int i=1;i<=V;i++) 
        {
            if(vis[i] == 0)
            {
                if(checkForCycle(vis,adjlist,i,-1))
                    return true;
            }
        }
        return false;
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
    obj.isCycle(adjlist,V)?cout<<"There is a Cycle"<<endl:cout<<"There is No Cycles"<<endl;
}