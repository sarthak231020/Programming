#include<bits/stdc++.h>
using namespace std;

void reverse_array(int i,vector<int> &v)
{
    if(i > v.size()/2-1)
    {
        return;
    }
    swap(v[i],v[v.size()-i-1]);
    reverse_array(i+1,v);
}

int main() 
{
    int n; 
    cin>>n;
    vector<int> vec(n);

    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }

    reverse_array(0,vec);

    for(int i=0;i<n;i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    
}