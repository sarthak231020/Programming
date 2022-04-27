#include<bits/stdc++.h>
using namespace std;

// void dfs(vector<int> adjlist[],vector<int> &vis,int ind)
// {

//     cout<<ind<<" ";
//     vis[ind] = 1;
//     for(auto adj:adjlist[ind])
//     {   
//         if(vis[adj] == 0)
//         {
//             dfs(adjlist,vis,adj);
//         }
//     }
// }

// int main() 
// {
//     int V,E; //V->No. Of Vertices E-No. of Edges
//     cin>>V>>E;

//     vector<int> adjlist[V+1]; //In order to store Adj list.
//     vector<int> vis(V+1,0);
//     for(int i=0;i<E;i++)
//     {
//         int v1,v2; //For Edge definition
//         cin>>v1>>v2;
//         adjlist[v1].push_back(v2);
//         adjlist[v2].push_back(v1);    
//     }

//     for(int i=1;i<=V;i++)
//     {   
//         if(vis[i] == 0)
//         {
//             dfs(adjlist,vis,i);
//         }
//         // if(vis[i] == 0) // if not visited 
//         // {
//                 //dfs(i) or bfs(i);
//                 // count++; for count no of components in a disconnected graph
//         // }
//         //In order to cover all disconnected components............
//     }
// }

//OOPS code for the dfs


#include<bits/stdc++.h>
using namespace std;
class Solution
{
    vector<int> dfs(vector<int> &vis,vector<int> adjlist[],int node,vector<int> &ans)
    {
        ans.push_back(node);
        vis[node] = 1;
        for(auto adj:adjlist[node])
        {
            if(vis[adj] == 0)
            {
                dfs(vis,adjlist,adj,ans);
            }
        }

        return ans;
    }
    public:
    vector<int> dfsOfGraph(vector<int> adjlist[],int V)
    {
        vector<int> ans;
        vector<int> vis(V+1,0);
        for(int i=1;i<=V;i++)  //For disconnected Components.
        {
            if(vis[i] == 0)
                dfs(vis,adjlist,i,ans);
        }
        return ans;
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
    vector<int> ans = obj.dfsOfGraph(adjlist,V);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
