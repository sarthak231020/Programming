#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long 


int main()
{
    ll N,i=0;
    cin>>N;
    vector<ll> V(N);
    for(ll i=0;i<N;i++)
    {
        cin>>V[i];
    }
    sort(V.begin(),V.end());
    ll max = 0;
    for(ll i=0;i<N;i++)
    {
        if(max <= V[i]*(N-(i)))
            max = V[i]*(N-(i));
    }
    cout<<max<<endl;
}