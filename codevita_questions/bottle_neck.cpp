#include<iostream>
#include<vector> 
#include<algorithm>
#define ll long long
using namespace std;

int main()
{
    int N;
    cin>>N;
    vector<ll> V(N);
    for(int i=0;i<N;i++)
    {
        cin>>V[i];
    }
    sort(V.begin(),V.end());
    vector<bool> have(N,false);
    for(int i=0;i<N;i++)
    {
        int j;
        for(j=i+1;j<N;j++)
        {
            if(V[j] > V[i])
                break;
        }
        if(V[j] > V[i] && have[j]==false && V[i] != 0)
        {
            V[i] = 0;
        }
    }

    int count = 0;
    for(int i=0;i<V.size();i++)
    {
        if(V[i] != 0)
            count++;
    }

    for(int i=0;i<N;i++)
    {
        cout<<V[i]<<"\t"<<endl;
    }
    cout<<count<<endl;
}