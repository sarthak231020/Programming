#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
        queue<int>  q;
        bool bipartiteBfs(vector<int> adjlist[],vector<int> &visited,int V,int ind)
        {
            q.push(ind);
            visited[ind] = 1;
            while(!q.empty())
            {
                int node = q.front();
                q.pop();
                for(auto adj:adjlist[node])
                {
                    if(visited[adj] == -1)
                    {
                        visited[adj] = 1-visited[node];
                        q.push(adj);
                    }
                    else if(visited[adj] == visited[node])
                    {
                        return false;
                    }
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
                    if(!bipartiteBfs(adjlist,color,V,i))
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
    int V,E;
    cin>>V>>E;
    vector<int> adjlist[V+1];
    
    for(int i=0;i<E;i++)
    {
        int U,V;
        cin>>U>>V;
        adjlist[U].push_back(V);
        adjlist[V].push_back(U);
    }
    bool flag = true;
    vector<int> visited(V+1,-1);
    Solution obj;
    if(obj.checkForBipartite(adjlist,V))
        cout<<"IT IS BIPARTITE"<<endl;
    else
        cout<<"IT IS NOT BIPARTITE"<<endl;
}