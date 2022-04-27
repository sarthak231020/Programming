#include<bits/stdc++.h>
using namespace std;
// https://www.geeksforgeeks.org/maximum-sum-increasing-subsequence-dp-14/

int main() 
{
    int N; 
    cin>>N; 
    vector<int> v(N);
    for(int i=0;i<N;i++) 
    {
        cin>>v[i];
    }

    vector<int> LIS(N); 

    for(int i=0;i<N;i++) 
    {
        LIS[i] = v[i];
    }

    for(int i=1;i<N;i++) 
    {
        for(int j=0;j<i;j++) 
        {
            if(v[i] > v[j] && LIS[i] < LIS[j]+v[i]) 
            {
                LIS[i] = LIS[j]+v[i];
            }

            for(auto k:LIS) 
            {
                cout<<k<<" ";
            }
            cout<<endl;
        }
    }

    int ans = INT_MIN;

    for(int i=0;i<LIS.size();i++) 
    {
        ans = max(ans,LIS[i]);
    }

    cout<<ans<<endl;

}