#include<iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];
    }
    // int prevcurr=1;
    // for(int i=0;i<n;i++)
    // {
    //     int prevdiff=0,diff=0,curr=1;
    //     for(int j=i+1;j<n-1;j++)
    //     {
    //         prevdiff = arr[j] - arr[j-1];
    //         diff = arr[j] - arr[j+1];
    //         if(prevdiff == diff)
    //         {
    //             curr++;
    //         }
    //     }
    //     if(curr > prevcurr)
    //         prevcurr = curr;
    // }
    // cout<<prevcurr<<endl;

    // int curr = 1;
    // for(int i=0;i<n;i++)
    // {
    //     if(arr[i+1]-arr[i] == arr[i+2]-arr[i-1])
    //     {
    //         curr += 1;
    //     }
    // }
    // cout<<curr<<endl;

    // int curr = 1;

    int prev , curr=2;
    prev = arr[1]-arr[0];

    for(int i=1;i<n-1;i++)
    {   
        if(arr[i+1]-arr[i] == prev)
        {
            curr += 1;
        }
        else
        {
            continue;
        }
        prev = arr[i+1]-arr[i];
    }

    cout<<curr<<endl;

}