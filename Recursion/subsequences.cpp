#include<bits/stdc++.h>
using namespace std;
vector<int> a;

void subseq(int i,vector<int> v)
{
    if(i == v.size())
    {
        if(a.empty())
            cout<<"EMPTY SET"<<endl;
        for(int i=0;i<a.size();i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        return;
    }

    a.push_back(v[i]);
    subseq(i+1,v);
    a.pop_back();
    subseq(i+1,v);

}

int main() 
{ 
    int n; 
    cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    subseq(0,v);
    
}