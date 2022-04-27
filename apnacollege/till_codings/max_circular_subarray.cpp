#include<iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int arr[n];
    int total_sum = 0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        total_sum += arr[i];
    }
    

    for(int i=0;i<n;i++)
    {
        arr[i] = -arr[i];
    }

    int wrap_max_sum = INT_MIN;
    sum = 0;

    for(int i=0;i<n;i++)
    {
        sum += arr[i];
        if(sum < 0)
            sum = 0;
        wrap_max_sum = max(sum,wrap_max_sum);
    }
    
    cout<<wrap_max_sum<<endl;

    wrap_max_sum = total_sum+wrap_max_sum;

    cout<<max(sum,wrap_max_sum)<<endl;
}