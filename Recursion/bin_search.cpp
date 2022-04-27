#include<bits/stdc++.h> 
using namespace std;

int bin_search(vector<int> v,int l,int h,int key)
{
    if(l > h)
    {
        return -1;
    }
    
    int mid = (l+h)/2;

    if(v[mid] == key) 
        return mid;
    else if(key > v[mid])
        return bin_search(v,mid+1,h,key);
    else
        return bin_search(v,l,mid-1,key);
}

int main() 
{
    int n,key;
    cin>>n>>key;
    vector<int> v(n);

    for(int i=0;i<n;i++) 
    {
        cin>>v[i];
    }

    int ind = bin_search(v,0,v.size()-1,key);
    if(ind == -1)
        cout<<"Item is not found"<<endl;
    else
        cout<<"Item is present at index:"<<ind<<endl;
}