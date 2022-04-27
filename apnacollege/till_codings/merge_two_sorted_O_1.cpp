#include<iostream>
using namespace std;

void insert(int arr[],int pos,int n,int ele)
{
    if(pos == n)
        arr[n-1] = ele;
    else
    {
        for(int i=n-1;i>=pos;i--)
        {
            arr[i] = arr[i-1];
        }
    }
}

int main() 
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr1[n],arr2[m];

    for(int i=0;i<n;i++) 
    {
        cin>>arr1[i];
    }

    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }

    while(i<n && j<m)
    {
        if(arr1[i] < arr2[j])
            
    }


}