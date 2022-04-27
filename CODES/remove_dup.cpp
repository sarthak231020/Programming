#include<bits/stdc++.h>
using namespace std;

int main() 
{
    vector<int> v;
    int n;
    cin>>n;
    int ele;
    for(int i=0;i<n;i++) 
    {
        cin>>ele;
        v.push_back(ele);
    }


    unordered_set<int> s;
    for(int i=0;i<n;i++) 
    {
        s.insert(v[i]);
    }

    for(set<int>::iterator itr=s.begin();itr!=s.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;

}