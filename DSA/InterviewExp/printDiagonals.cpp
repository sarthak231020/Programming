#include<bits/stdc++.h>
using namespace std;

//Brutforce method.
void printDiagonals(vector<vector<int>> v,int N,int M) 
{
    for(int i=0;i<N;i++) 
    {
        for(int j=0;j<M;j++) 
        {
            int row = i,col=j;
            while(row < N && col >= 0) 
            {
                cout<<v[row][col]<<" ";
                row++;
                col--;
            }
            cout<<endl;
        }
    }
}

int main() 
{
    int N,M;
    cin>>N>>M;

    vector<vector<int>> v(N,vector<int> (M));

    for(int i=0;i<N;i++) 
    {
        for(int j=0;j<M;j++) 
        {
            cin>>v[i][j];
        }
    }

    printDiagonals(v,N,M);
}