#include<bits/stdc++.h>
using namespace std;

void solveBrut(vector<vector<int>> updates,int M,int N)
{
        vector<int> v(N,0);
    for(int i=0;i<M;i++) 
    {
        for(int j=updates[i][0];j<=updates[i][1];j++) 
        {
            v[j] += updates[i][2];
        }
    }

    for(auto j:v)
    {
        cout<<j<<" ";
    }
    cout<<endl;


}

void solveOpt(vector<vector<int>> updates,int M,int N) 
{
    vector<int> v(N,0);

    for(auto update:updates) 
    {
        int start = update[0],end=update[1],inc=update[2];
        v[start] += inc; //put the effect of increment/decrement
        v[end] -= inc;  //remove the effect of increment/decrement
    }

    
    for(int i=1;i<N;i++) 
    {
        v[i] = v[i]+v[i-1];
    }

    for(auto j:v)
    {
        cout<<j<<" ";
    }

    cout<<endl;
}

int main() 
{
    int N;
    cin>>N;
    int M;
    cin>>M;
    vector<vector<int>> updates(M,vector<int> (3));

    for(int i=0;i<M;i++) 
    {
        for(int j=0;j<3;j++) 
        {
            cin>>updates[i][j];
        }
    }

    solveOpt(updates,M,N);
}