#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    bool cycleBfsOfGraph(vector<int> adjlist[],vector<int> &vis,int i,int V) //Where adjlist is adjacency list and number of vertices
    {
        queue<pair<int,int>> q;  //Here Queue Will Contain two things first is node and second is parent due to which it 
                                 //Got visited and if parent != some adjacent node which is already visited
                                 //It means that adj node got covered by some other node also previous which we are trying
                                 // to make visited once again so that gives us a cycle.

        q.push(make_pair(i,-1));
        vis[i] = 1;
        // cout<<q.front().first<<" "<<q.front().second<<endl;
        while(!q.empty())
        {
            // cout<<"Q.front().first:"<<q.front().first<<" "<<"Q.front().second:"<<q.front().second<<endl;
            int node = q.front().first;
            int par = q.front().second;
            q.pop();
            for(auto adj : adjlist[node])
            {   
                if(vis[adj] == 0)
                {
                    q.push(make_pair(adj,node));
                    vis[adj] = 1;
                }
                else if(par != adj)
                {   
                    // cout<<"Hey Got a Cycle Node:"<<node<<" adj:"<<adj<<" first:"<<q.front().first<<" Second:"<<q.front().second<<endl;
                    return true; //The Above condition specifies that cycle is exist.......
                }
            }
        }
        return false;
    }
    bool isCycle(int V,vector<int> adjlist[])
    {
        vector<int> vis(V+1,0);
        for(int i=1;i<=V;i++)
        {
            if(vis[i] == 0)
            {
                if(cycleBfsOfGraph(adjlist,vis,i,V))
                    return true;
            }
        }
        return false;
    }
        // for(int i=0;i<ans.size();i++)
        // {
        //     cout<<ans[i]<<" ";
        // }
        // cout<<endl;
        // return ans;
};


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
        adjlist[v1].push_back(v2);
        adjlist[v2].push_back(v1);    
    }
    cout<<"Adjacency List"<<endl;
    cout<<"Node\tAdjacent Nodes"<<endl;
    for(int i=1;i<=V;i++)
    {
        cout<<i<<"\t";
        for(auto j:adjlist[i])
        { 
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    Solution obj;

    (obj.isCycle(V,adjlist))?cout<<"There is a cycle"<<endl:cout<<"No Cycles"<<endl;
}