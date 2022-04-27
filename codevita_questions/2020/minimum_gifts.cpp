#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main()
{
    ll T,N;
    cin>>T;
    while(T--) 
    {
        cin>>N;
        vector<ll> V(N),gifts(N,1);
        for(ll i=0;i<N;i++)
        {
            cin>>V[i];
        }

        for(ll i=1;i<N;i++)
        {
            if(V[i] > V[i-1])
            {
                gifts[i] = gifts[i-1]+1;
            }
        }

        ll temp;
        for(ll i=N-2;i>=0;i--)
        {
            if(V[i] > V[i+1])
            {
                temp = gifts[i+1]+1;   
                gifts[i] = max(temp,gifts[i]);
            }
        }

        ll sum = 0;
        for(ll i=0;i<N;i++)
        {
            sum += gifts[i];
            cout<<gifts[i]<<"\t";
        }
        cout<<endl;
        cout<<sum<<endl;

    }
}