#include<iostream>
#include<vector>
#include<algorithm>
#define M 1000000007
#define ll long long
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        ll K;
        cin>>N>>K;
        vector<ll> V(N);
        for(int i=0;i<N;i++)
        {
            cin>>V[i];
        }
        sort(V.begin(),V.end());
        ll ele;
        ll min = M;
        for(int i=0;V[i]<=K;i++)
        {
            if(K%V[i] == 0)
            {
                if(min > K/V[i])
                {
                    min = K/V[i];
                    ele = V[i];
                }
            }
        }
        if(min == M)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<ele<<endl;
        }
    }
}