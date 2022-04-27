//Found smallest greater element than key
#include<bits/stdc++.h> 
using namespace std;

int main() 
{
    int n,key;
    cin>>n>>key;
    vector<int> v(n),pre(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        if(v[i] > key)
            pre[i] = 1;
        else
            pre[i] = 0;
    }

    int l=1,r=v.size()-1,ans=-1;
    while(l <= r)
    {
        
        int mid = (l+r)/2;
        // cout<<mid<<endl;
        if(pre[mid] == 1)
        {
            ans = mid;
            r = mid-1;
        }
        else 
        {
            l = mid+1;
        }
    }

    cout<<v[ans]<<endl;
}