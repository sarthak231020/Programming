#include<bits/stdc++.h>
using namespace std;

// void bfs(vector<int> &visited,vector<int> adjlist[],int ind,vector<int> &ans)
// {
//     queue<int> q;
//     q.push(ind);
//     while(!q.empty())
//     {   
//         int ele = q.front();  //take that element to pop it and retrieve adj of that element
//         ans.push_back(ele);
//         q.pop();
//         visited[ele] = 1;
//         for(auto i:adjlist[ele])
//         {
//             if(visited[i] == 0)
//             {
//                 q.push(i);
//                 visited[i] = 1;
//             }
//         }
//     }
// }


// int main() 
// {   
//     int N,M; //N->No. of vertex M->No. of edges
//     cin>>N>>M;
//     vector<int> adjlist[N+1];
//     vector<int> visited(N+1,0);
//     for(int i=1;i<=M;i++)
//     {
//         int U,V;    //Remember 1<=U,V<=N
//         cin>>U>>V;
//         adjlist[U].push_back(V);
//         adjlist[V].push_back(U);
//     }

//     vector<int> ans;
//     for(int i=1;i<=N;i++)
//     {
//         if(visited[i] == 0) 
//         {
//             bfs(visited,adjlist,i,ans);
//         }
//     }
    
//     //Printing the bfs traversal

//     for(int i=0;i<ans.size();i++)
//     {
//         cout<<ans[i]<<" ";
//     }

//     cout<<endl;
// }


//In a more structured way Striver's Code 

class Solution
{
    public:
    vector<int> bfsOfGraph(vector<int> adjlist[],int V) //Where adjlist is adjacency list and number of vertices
    {
        vector<int> vis(V+1,0);
        vector<int> ans;
        queue<int> q; 
        for(int i=1;i<=V;i++)
        {
            if(vis[i] == 0)
            {
                q.push(i);
                vis[i] = 1;
                while(!q.empty())
                {
                    int node = q.front();
                    q.pop();
                    ans.push_back(node);

                    for(auto adj : adjlist[node])
                    {
                        if(vis[adj] == 0)
                        {
                            q.push(adj);
                            vis[adj] = 1;
                        }
                    }
                }
            }
        }

        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return ans;
    }
};

int main()
{
    int V,M; //V->No of vertices and M->No of edges

    cin>>V>>M;
    vector<int> adjlist[V+1];
    for(int i=0;i<M;i++)
    {
        int U,V; //Edge from U to V and V to U in an undirected graph 
        cin>>U>>V;
        adjlist[U].push_back(V);
        adjlist[V].push_back(U);
    }
    Solution obj;
    vector<int> ans = obj.bfsOfGraph(adjlist,V);

    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}