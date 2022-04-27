#include<bits/stdc++.h>
using namespace std; 

bool comp(int n1,int n2)
{
    if(n1 > n2)
        return true;
    return false;
}

//Just Assume that we are writing sorting mechanism for two element compare if they are 
//arranged accordingly then return true otherwise false means here we are instructing to swap them 

bool comp1(pair<int,int> el1,pair<int,int> el2)
{
    if(el1.first < el2.first)
    {
        return true;
    }
    if(el1.first == el2.first)
    {
        if(el1.second > el2.second)
            return true;
    }
    return false;
}

int main()
{
    // int n;
    // cin>>n;
    // vector<int> v(n);
    // for(int i=0;i<n;i++)
    // {
    //     cin>>v[i];
    // }

    // //Sort that vector in decending order 

    // sort(v.begin(),v.end(),comp);

    // for(auto it:v)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<endl;

    // // greater<int> can also be used for the same thing 

    // sort(v.begin(),v.end(),greater<int>());

    // for(auto it:v)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<endl;

    //comparator is helpful when we write our own sorting mechanism

    
    // arr 
    // pair<int,int> arr[] = {{1, 4},{5, 2},{5, 9}};
    // after sorting arr[] = {{1, 4}, {5, 9}, {5, 2}}

    int n1;
    cin>>n1;
    vector<pair<int,int>> v1(n1);
    for(int i=0;i<n1;i++)
    {
        cin>>v1[i].first>>v1[i].second;
    }

    sort(v1.begin(),v1.end(),comp1);  

    for(int i=0;i<n1;i++)
    {
        cout<<v1[i].first<<" "<<v1[i].second<<endl;
    }
    
}