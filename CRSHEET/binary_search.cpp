#include<iostream>
#include<algorithm>
using namespace std;

int binarySearch(int arr[],int n,int key)
{
    int low = 0,high=n-1,mid;
    while(low < high)
    {
        mid = (low+high/2);
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(key < arr[mid])
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    return -1; 
}

int binarySearchRec(int arr[],int l,int h,int key,int n)
{
    int mid = (l+h)/2; 
    if(l > h) 
    {
        return -1;
    }
    if(arr[mid] == key)
    { 
        return mid;
    }
    if(key > arr[mid])
    {
        return binarySearchRec(arr,mid+1,h,key,n);
    }
    else 
    {
        return binarySearchRec(arr,l,mid-1,key,n);
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
    sort(arr,arr+n);
    int ind = binarySearch(arr,n,key);   // time->O(logn)  space ->O(1)
    // int ind = binarySearchRec(arr,0,n-1,key,n); //time->O(logn) space ->O(logn)
    if(ind == -1) 
    {
        cout<<"Item is not found"<<endl;
    }
    else 
    {
        cout<<"Item is found at:"<<ind<<endl;
    }
}