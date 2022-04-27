#include<bits/stdc++.h>
using namespace std;

typedef pair<int,pair<int,int>> job;
vector<double> vec;

bool comp(job j1,job j2)
{
    int a_Li,a_Ti,b_Li,b_Ti;
    a_Li = j1.second.first;
    a_Ti = j1.second.second;
    b_Li = j2.second.first;
    b_Ti = j2.second.second;

    //For accurate result instead of (Li1/Ti1)>(Li2/Ti2) I write (Li1*Ti2)>(Li2*Ti1);
    if((a_Li*b_Ti)>(b_Li*a_Ti))
        return true;
    return false; 
}

int main() 
{
    int N;
    cin>>N;
    vector<job> v;
    for(int i=0;i<N;i++)
    {
        int l,t;
        cin>>l;
        cin>>t;
        v.push_back(make_pair(i+1,make_pair(l,t)));
    }

    sort(v.begin(),v.end(),comp);
    double min_loss = 0.0;
    for(int i=0;i<N;i++)
    {
        vec.push_back(v[i].second.first/v[i].second.second);
    }
    for(int i=1;i<=N;i++)
    {
        min_loss += (vec[i-1]*v[i].second.first);
    }

    cout<<min_loss<<endl;
}