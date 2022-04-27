#include<iostream>
#include<vector> 
#include<algorithm>
using namespace std;

bool comp(pair<int,int> P1,pair<int,int> P2)
{
    return P1.second<P2.second;
}

int main()
{
    int N;
    cin>>N;
    vector<pair<int,int>> V(N);
    for(int i=0;i<N;i++)
    {
        cin>>V[i].first>>V[i].second;
    }

    sort(V.begin(),V.end(),comp);

    cout<<V[0].first<<"\t"<<V[0].second<<"\n";

    int selected = V[0].second;
    for(int i=1;i<N;i++)
    {
        if(V[i].first >= selected)
        {
            selected = V[i].second;
            cout<<V[i].first<<"\t"<<V[i].second<<"\n";
        }
    }

}