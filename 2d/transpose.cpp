#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int N,M;
    cin>>N>>M;
    vector<vector<int> > V_transposed(M,vector<int> (N));
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            cin>>V_transposed[j][i];
        }
    }

    for(int i=0;i<M;i++) 
    {
        for(int j=0;j<N;j++)
        {
            cout<<V_transposed[i][j]<<" ";
        }
        cout<<endl;
    }
    
}