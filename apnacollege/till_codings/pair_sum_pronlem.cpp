//O(n^2) solution

#include<iostream>
using namespace std;

int main()
{
    int n,sum;
    cin>>n>>sum;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j] == sum)
            {
                cout<<i<<" "<<j;
                break;
            }
        }
    }
} 