#include<iostream>
using namespace std;

int last_occ(int arr[],int n,int i,int key)
{
    if(i==-1)
        return -1;
    if(arr[i] == key)
        return i;
    return last_occ(arr,n,i-1,key);
}

// Or either by......
int lastocc(int arr[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    int restArray = lastocc(arr,n,i+1,key); // It will Lead till last indices then starts unwounding.......
    if(restArray != -1) 
    {
        return restArray;
    }
    if(arr[i] == key)
    {
        return i;
    }
    return -1;
}

int main() 
{
    int n,key;
    cin>>n>>key;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<last_occ(arr,n,n-1,key)<<endl;

}