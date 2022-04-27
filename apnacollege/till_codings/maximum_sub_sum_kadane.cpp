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

    int max_ending_here = 0,sum=INT_MIN;

    for(int i=0;i<n;i++)
    {
        max_ending_here += arr[i];
        sum = max(sum,max_ending_here);
        if(max_ending_here < 0)
            max_ending_here = 0;
    }

    cout<<sum<<endl;
}