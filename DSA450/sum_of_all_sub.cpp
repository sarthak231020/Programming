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

    // for(int i=0;i<n;i++)
    // {
    //     int sum=0;
    //     for(int j=0;j<=i;j++)
    //     {
    //         sum += arr[j];
    //     }
    //     cout<<sum<<" ";
    // }
    // cout<<endl;
    // for(int i=1;i<n;i++)
    // {
    //     int sum=0;
    //     for(int j=1;j<=i;j++)
    //     {
    //         sum += arr[j];
    //     }
    //     cout<<sum<<" ";
    // }
    // cout<<endl;
    // for(int i=2;i<n;i++)
    // {
    //     int sum=0;
    //     for(int j=2;j<=i;j++)
    //     {
    //         sum += arr[i];
    //     }
    //     cout<<sum<<" ";
    // }

    // for(int k=0;k<n;k++)
    // {
    //     for(int i=k;i<n;i++)
    //     {
    //         int sum=0;
    //         for(int j=k;j<=i;j++)
    //         {
    //             sum += arr[j];
    //         }
    //         cout<<sum<<" ";
    //     }
    //     cout<<endl;
    // }


    // OPTIMAL APPROACH 

    for(int i=0;i<n;i++)
    {
        int sum = 0;
        for(int j=i;j<n;j++)
        {
            sum += arr[j];
            cout<<sum<<" ";
        }
        cout<<endl;
    }
}