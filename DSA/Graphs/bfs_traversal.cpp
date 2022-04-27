// #include<bits/stdc++.h>
// using namespace std; 
// vector<int> vec; 
// void bfs(queue<int> &q,int node,vector<vector<int>> v,vector<int> &visit)
// {
//     if(visit[node] == 0)
//     {
//         visit[node] = 1;
//         q.push(node);
//     }

//     for(int i=0;i<v[node].size();i++)
//     {
//         if(visit[v[node][i]] == 0)
//         {
//             visit[v[node][i]] = 1;
//             q.push(v[node][i]);
//         }
//     }
//     int n = q.front();
//     q.pop();
//     vec.push_back(n);
//     while(!q.empty())
//     {
//         bfs(q,q.front(),v,visit);
//     }
// }   

// int main() 
// {
//     int n,m;
//     cin>>n>>m;
//     vector<int> visit(n+1,0);
//     vector<vector<int>> adj(n+1); //Adjacency list

//     for(int i=0;i<m;i++)
//     {
//         int u,v; 
//         cin>>u>>v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }   
//     queue<int> q;

//     for(int i=1;i<=n;i++) 
//     {
//         if(visit[i] == 0)
//         {
//             visit[i] = 1;
//             q.push(i);
//             bfs(q,i,adj,visit);
//         }
//     }

//     for(int i=0;i<vec.size();i++)
//     {
//         cout<<vec[i]<<" ";
//     }
//     cout<<endl;
    
// }


//Above solution is right but let we write it more clearly

#include<bits/stdc++.h>
using namespace  std;

vector<int> bfs_traversal(int N,vector<vector<int>> vec)
{
    vector<int> bfs; //for storing answer
    vector<int> visit(N+1,0);

    for(int i=1;i<=N;i++)   // In order to cover disconnected component 
    {
        if(visit[i] == 0)
        {    
            queue<int> q;
            q.push(i);
            visit[i] = 1;
            while(!q.empty())
            {   
                int node = q.front();
                q.pop();
                bfs.push_back(node);
                for(auto it:vec[node])
                {
                    if(visit[it] == 0)
                    {
                        q.push(it);
                        visit[it] = 1;
                    }
                }
            }
        }
    }
    return bfs;
}

int main()
{
    int N,M; //N-> No of Nodes  M-> No of edges
    cin>>N>>M;

    vector<vector<int>> adj(N+1);

    for(int i=1;i<=M;i++)  // Preparing for adj list
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v); 
        adj[v].push_back(u);
    }

    vector<int> v = bfs_traversal(N,adj);

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

}