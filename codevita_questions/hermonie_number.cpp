#include<iostream>
#include<vector> 
#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long 
using namespace std;

int main()
{
    vector<ll> fac(100005);
    fac[0] = 1;
    fac[1] = 1;
    for(int i=1;i<100005;i++)
    {
        fac[i] = (fac[i-1]*i)%MOD;
    }
    ll N;
    cin>>N;
    vector<ll> V(N);
    for(ll i=0;i<N;i++)
    {
        cin>>V[i];
    }
    ll q;
    cin>>q;
    while(q--)
    {
        ll l,r,mul=1;
        cin>>l>>r;
        for(ll i=l;i<=r;i++)
        {
            mul = (mul*fac[V[i-1]])%MOD;
        }
        
        ll ans = 1;
        for(ll i=0;i<r-l;i++)
        {
            ans = (ans*mul)%MOD;
        }

        cout<<ans<<endl;
    }
}