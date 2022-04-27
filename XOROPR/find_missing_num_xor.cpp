#include<bits/stdc++.h>
using namespace std; 

int find_missing(vector<int> V,int N)
{
    int i,a=1,b=V[0];
    // cout<<a<<" ";
    for(int i=2;i<=N+1;i++)
    {
        a = (a^i);
        // cout<<i<<" "<<a<<endl;
    }
    // cout<<endl;
    // cout<<b<<" ";
    for(int i=1;i<N;i++) 
    {
        b = (b^V[i]);
        // cout<<b<<" ";
    }
    // cout<<endl;
    return (a^b);
}

int main() 
{
    int N; 
    cin>>N;
    vector<int> V(N);
    
    for(int i=0;i<N;i++)
    {
        cin>>V[i];
    }

    cout<<find_missing(V,N)<<endl;
}