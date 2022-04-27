#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main()
{
    int N,K;
    cin>>N>>K;
    vector<ll> V(N);
    for(int i=0;i<N;i++)
    {
        cin>>V[i];
    }

    sort(V.begin(),V.end());
    int happy = 0;
    for(int i=1;i<N-1;i++) 
    {
        if((V[i+1] <= V[i]+K)||(V[i-1] >= V[i]-K))
        {
            happy += 1;
        }
    }
    
    if(V[1] <= V[0]+K)
        happy += 1;
    if(V[N-2] >= V[N-1]-K)
        happy += 1;

    cout<<happy<<endl;
}