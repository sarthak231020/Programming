#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool can_place_cows(vector<ll> v,ll C,ll dist)
{
    ll co_ord = v[0],cnt = 1;
    for(ll i=1;i<v.size();i++)
    {
        if(v[i]-co_ord >= dist)
        {
            cnt++;
            co_ord = v[i];
        }
        if(cnt == C) 
            return true;
    }
    return false;
}

int main()
{   
    ll T;
    cin>>T;
    while(T--)
    {
        ll N,C;
        cin>>N>>C;
        vector<ll> v(N);
        for(ll i=0;i<N;i++)
        {
            cin>>v[i];
        }

        sort(v.begin(),v.end());

        ll low = 1,high = v[N-1]-v[0],res = 0; 
        while(low <= high)
        {
            ll mid = (low+high)>>1; 
            if(can_place_cows(v,C,mid))
            {
                res = mid;
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        cout<<res<<endl;
    }
}