#include<bits/stdc++.h>
using namespace std;
vector<int> a;

void subset_sum(int i,vector<int> v,int k)
{
    
    if(accumulate(a.begin(),a.end(),0)%k == 0 && accumulate(a.begin(),a.end(),0) != 0) 
    {
        for(auto it:a)
            cout<<it<<" ";
        cout<<endl;
    }
    if(i == v.size())
    {   
    //     for(auto it:a)  
    //         cout<<it<<" ";
    //     cout<<endl;
        return;
    }
    a.push_back(v[i]);
    subset_sum(i+1,v,k);
    a.pop_back();
    subset_sum(i+1,v,k);
}

// void subset_sum(int i,vector<int> v,int k)
// {
    
// }

int main() 
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    subset_sum(0,v,k);
}