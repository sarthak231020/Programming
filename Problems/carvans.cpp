#include<iostream>
#include<vector>
using namespace std;
#define ll long long 

int main()
{
    int T,N;
    cin>>T;
    while(T--)
    {
        cin>>N;
        vector<ll> V(N);
        for(int i=0;i<N;i++) 
        {
            cin>>V[i];
        }
        ll min=V[0],count = 1;
        for(int i=0;i<N;i++)
        {
            if(V[i]<min)
            {
                min = V[i];
                count++;
            }
        }
        cout<<count<<endl;
    }
}