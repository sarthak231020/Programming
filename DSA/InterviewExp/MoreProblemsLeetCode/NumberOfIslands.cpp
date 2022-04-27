#include<bits/stdc++.h>
using namespace std;

// https://www.youtube.com/watch?v=ErPZFxugYkI Pepcoding
//

void DFS(vector<vector<int>> grid,int M,int N,int i,int j,vector<vector<int>> &visited) 
{
    if(i < 0 || i>M || j>N ||j <0 || grid[i][j] == 0 || visited[i][j] == 1)
        return;
    visited[i][j] = 1;


    DFS(grid,M,N,i-1,j,visited);
    DFS(grid,M,N,i,j+1,visited);
    DFS(grid,M,N,i+1,j,visited);
    DFS(grid,M,N,i,j-1,visited);
}

int main() 
{
    int M,N;
    cin>>M>>N; 

    vector<vector<int>> grid(M,vector<int> (N));

    for(int i=0;i<M;i++) 
    {
        for(int j=0;j<N;j++) 
        {
            cin>>grid[i][j];
        }
    }

    vector<vector<int>> visited(M,vector<int> (N,0));
    int count = 0;
    for(int i=0;i<M;i++) 
    {
        for(int j=0;j<N;j++) 
        {
            if(grid[i][j]== 1 && visited[i][j] == 0) 
            {
                count++;
                DFS(grid,M,N,i,j,visited);
            }
        }
    }
    //Island are 1's 
    //Water is 0's
    cout<<"Total Numbers Of Islands -> "<<count<<endl;
}