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
    int max_sum = INT_MIN,sum=0;
    for(int i=0;i<n;i++)
    {   
        sum = 0;
        for(int j=i;j<n;j++)
        {
            sum += arr[j];
            max_sum = max(sum,max_sum);   
        }
    }
    cout<<max_sum<<endl;
}