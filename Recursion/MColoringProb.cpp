#include<bits/stdc++.h>
using namespace std;

bool isPossible(int V,int node,int col,bool graph[101][101],vector<int> &color)
{
    for(int i=0;i<V;i++) 
    {
        if(i!= node && graph[node][i] == true && color[i] == col)
        {
                return false;
        }
    }
    return true;
}

bool MColor(int V,int node,int m,bool graph[101][101],vector<int> &color) 
{
    if(node == V) 
        return true;
    
    for(int col = 1;col<=m;col++) 
    {
        if(isPossible(V,node,col,graph,color))
        {
            color[node] = col;
            if(MColor(V,node+1,m,graph,color)) 
                return true;
            color[node] = 0;
        }
    }
    return false;
}


bool graphColoring(bool graph[101][101], int m, int V)
{
    vector<int> color(V,0);
    return MColor(V,0,m,graph,color);
    // your code here
}