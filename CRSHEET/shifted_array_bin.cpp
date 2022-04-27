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
    vector<bool> pre(n);
    
    for(int i=0;i<n;i++)
    {
        if(v[i] > v[n-1])
            pre[i] = true;
        else
            pre[i] = false;
    }

    int l=0,r=v.size()-1,ans=-1;

    while(l<=r)
    {
        int mid = (l+r)/2;

        if(pre[mid] == false)
        {
            ans = mid;
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    
    cout<<"Number of rotations:"<<v.size()-ans<<endl;
    cout<<"Index till which the rotation effects:"<<ans<<endl;
    cout<<v[ans]<<endl;
}