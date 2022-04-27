#include<bits/stdc++.h>
using namespace std; 

int main() 
{
    int n; 
    cin>>n;

    int arr[n];
    int max=INT_MIN,min=INT_MAX,min_ind,max_ind;
    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];
        if(max < arr[i])
        {
            max = arr[i];
            max_ind = i;
        }
        if(min >= arr[i])
        {
            min = arr[i];
            min_ind = i;
        }
    }
    if((min_ind==max_ind) ||(min_ind==(n-1) && max_ind==0))
    {
        cout<<0<<endl;
        return 0;
    }

    int count=0;
    for(int i=max_ind;i>0;i--)
    {
        int temp=arr[i];
        arr[i] = arr[i-1];
        arr[i-1]=temp;
        count++;
    }
    if(max_ind > min_ind)
    {
        min_ind++;
    }

    for(int i=min_ind;i<n-1;i++)
    {
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        count++;
    }

    cout<<count<<endl;
}