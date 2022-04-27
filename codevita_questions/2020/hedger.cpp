#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool comp(pair<float,float> P1,pair<float,float> P2)
{
    return P1.second > P2.second;
}

int main()
{
    int N,Q,C;
    cin>>N>>Q>>C;
    vector<pair<float,float> > V(N);

    for(int i=0;i<N;i++)
    {
        cin>>V[i].first;
    }
    for(int i=0;i<N;i++) 
    {
        cin>>V[i].second;
        V[i].second = V[i].first*(V[i].second/100.0);
    }

    sort(V.begin(),V.end(),comp);

    for(int i=0;i<N;i++)
    {
        cout<<V[i].first<<"\t"<<V[i].second<<"\n";
    }
    // int i=0,j=Q,sum=0;
    // while(C)
    // {
    //     j = Q;
    //     while(V[i].first*j > C)
    //     {
    //         j--;
    //     }
    //     C = C-(V[i].first*j);
    //     sum += V[i].second*j;
    //     i++;
    // }

    // cout<<sum<<endl;
}