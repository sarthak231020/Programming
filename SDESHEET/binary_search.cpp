#include<bits/stdc++.h>
using namespace std;

int binSearch(vector<int> V,int left,int right,int key)
{
    if(left > right) 
        return -1; //BASE CASE
    int mid = (left+right)/2;
    if(key == V[mid]) 
    {
        return mid;
    }
    else if(key > V[mid])
    {
        binSearch(V,mid+1,right,key);
    }
    else 
    {
        binSearch(V,left,mid-1,key);
    }
}

int main() 
{
    int N;
    cin>>N;
    vector<int> V(N);
    cout<<"WARNING:INSERT DATA IN SORTED FASHION:";
    for(int i=0;i<N;i++) 
    {
        cin>>V[i];
    }
    int left = 0,right=N-1,key;
    cout<<"WHAT YOU ARE SEARCHING FOR:";
    cin>>key;
    cout<<"INDEX WHERE THE "<<key<<" IS PRESENT AT ";
    binSearch(V,left,right,key)!=-1?cout<<binSearch(V,left,right,key)<<endl:cout<<"NOT PRESENT"<<endl;
}