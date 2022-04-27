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

    int prefix_sum[n];
    prefix_sum[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        prefix_sum[i] = arr[i]+prefix_sum[i-1];
    }

    for(int i=0;i<n;i++)
    {
        cout<<prefix_sum[i]<<" ";
    }
    cout<<endl;
}