#include<bits/stdc++.h>
using namespace std; 

int solve(vector<int> v,int N) 
{   // TC->O(NlogN)
    map<int,int> mp;
    int sum = 0;
    int maxi = 0;

    for(int i=0;i<N;i++) 
    {
        sum += v[i];
        if(sum == 0) 
        {
            maxi = i+1;
        }
        else 
        {
            if(mp.find(sum) != mp.end())
            {
                maxi = max(maxi,i-mp[sum]);
            }
            else
            {
                mp[sum] = i;
            }
        }
    }

    return maxi;
}

int main() 
{
    int N; 
    cin>>N;

    vector<int> v(N);

    for(int i=0;i<N;i++) 
    {
        cin>>v[i];
    }

    cout<<solve(v,N)<<endl;
}