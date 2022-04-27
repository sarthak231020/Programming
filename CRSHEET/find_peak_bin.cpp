#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int l=0,r=n-1,ans=-1;
    while(l <= r)
    {   
        int m = (l+r)/2;
        if(m==0 || v[m]>v[m-1])
        {
            ans = m;
            l = m+1;
        }
        else
        {
            r = m-1;
        }
    }

    cout<<ans<<endl;
    cout<<v[ans]<<endl;
    
    // vector<bool> pre(n);
    // pre[0] = true;
    // for(int i=0;i<n-1;i++)
    // {
    //     if(v[i] > v[i+1])
    //         pre[i] = true;
    //     else
    //         pre[i] = false;
    // }

    // int l=1,r=v.size()-1,ans=0;
    // while(l<=r)
    // {
    //     int mid = (l+r)/2;

    //     if(pre[mid] == true)
    //     {
    //         ans = mid;
    //         l = mid+1;
    //     }
    //     else
    //     {
    //         r = mid-1;
    //     }
    // }
    // cout<<ans<<endl;
    // cout<<v[ans]<<endl;
}