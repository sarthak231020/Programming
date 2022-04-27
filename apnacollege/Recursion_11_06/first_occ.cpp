#include<iostream>
using namespace std;

int first_occ(int arr[],int n,int i,int key)
{
    if(i==n)
        return -1;
    if(arr[i] == key)
        return i;
    return first_occ(arr,n,i+1,key);
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

    cout<<first_occ(arr,n,0,key)<<endl;
}