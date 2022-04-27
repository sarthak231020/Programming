#include<iostream>
#include<vector>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> V(1000000000,0);
    int T,G;
    cin>>T;
    while(T--)
    {
        cin>>G;
        while(G--)
        {
            int i,q;
            ll N;
            cin>>i>>N>>q;
            if(i==1)
            {
                for(int j=0;j<N;j++)
                {
                    V[j] = 0;
                }
            }
            if(i==2)
            {
                for(int j=0;j<N;j++)
                {
                    V[j] = 1;
                }
            }
            for(ll j=0;j<N;j++)
            {
                for(ll k=0;k<=j;k++)
                {
                    if(V[k]==0)
                        V[k] = 1;
                    else
                        V[k] = 0;
                }
            }
            ll count=0;
            if(q==1)
            {
                for(ll k=0;k<N;k++)
                {    
                    if(V[k] == 0)
                        count++;
                }
            }
            else
            {
                for(ll k=0;k<N;k++)
                {
                    if(V[k] == 1)
                        count++;
                }
            }
            cout<<count<<endl;
        }
    }
}