#include<iostream>
#include<vector>
#define ll long long 
using namespace std;


int main()
{
    int N,M;
    cin>>N;
    vector<ll> V(N),countH(N,0); 
    for(int i=0;i<N;i++)
    {
        cin>>V[i];
    }
    cin>>M;
    vector<ll> B(M),status(M,0);
    for(int i=0;i<M;i++)
    {
        cin>>B[i];
    }

    for(int i=0;i<M;i++) 
    {
        for(int j=N-1;j>=0;j--)
        {
            if((B[i]<=V[j]) && (countH[j] < j+1) && (status[i]==0))
            {
                countH[j] += 1;
                status[i] = j+1;
            }
        }
    }
    for(int i=0;i<M;i++)
    {
        cout<<status[i]<<" ";
    }
}