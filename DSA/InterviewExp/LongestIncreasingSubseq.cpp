#include<bits/stdc++.h>
using namespace std; 



int main() 
{
    int N;
    cin>>N;
    vector<int> v(N); 

    for(int i=0;i<N;i++) 
    {
        cin>>v[i];
    }

    vector<int> LIS(N,1);

    int ans = 0;
    for(int i=1;i<N;i++) 
    {
        for(int j=0;j<i;j++) 
        {
            if(v[j] < v[i]) 
            {
                LIS[i] = max(LIS[i],LIS[j]+1);
            }
        }
        ans = max(ans,LIS[i]);
    }

    cout<<ans<<endl;
    
}