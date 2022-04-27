#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> v,int N,int target)
{
    int maxi = INT_MIN;
    int count = 0;
    for(int i=0;i<N;i++) 
    {   
        int x = 0;
        for(int j=i;j<N;j++) 
        {   
            x = x^v[j];
            if(x == target) 
            {
                maxi = max(maxi,j-i+1);
                count++;
            }
        }
    }

    cout<<count<<endl;
    cout<<maxi<<endl;
    return maxi; 
}

int solveOptimized(vector<int> v,int N,int target)
{
    map<int,int> mp;
    int x = 0;
    int cnt = 0;
    for(int i=0;i<N;i++) 
    {   
        x = x^v[i];
        if(x == target)
        {
            cnt++;
        }
        if(mp.find(x^target) != mp.end())
        {
            cnt += mp[x^target];
        }    
        if(mp.find(x) != mp.end()) 
            mp[x]++;
        else 
            mp[x] = 1;
    }

    for(auto p:mp) 
    {
        cout<<p.first<<" "<<p.second<<endl;
    }

    return cnt;
}

int main() 
{
    int N,target;
    cin>>N>>target;
    vector<int> v(N);

    for(int i=0;i<N;i++) 
    {
        cin>>v[i];
    }

    solve(v,N,target);
    cout<<endl;
    solveOptimized(v,N,target);
    
    return 0;
}