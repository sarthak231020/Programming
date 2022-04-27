#include<bits/stdc++.h>
using namespace std; 

int main() 
{
    int N,target;
    cin>>N>>target;

    vector<int> v(N);

    for(int i=0;i<N;i++) 
    {
        cin>>v[i];
    }

    map<int,int> mp;

  
    pair<int,int> ans = {-1,-1};

    for(int i=0;i<N;i++) 
    {
        if(mp.find(target-v[i]) != mp.end()) 
        {
            ans.second = i;
            ans.first = mp[target-v[i]];
            break;
        }
        mp[v[i]] = i;
    }

    cout<<ans.first<<" "<<ans.second<<endl;
}