#include<iostream>
using namespace std;

int main() 
{
    int n,target;
    cin>>n>>target; 
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j] == target)
            {
                cout<<"["<<i<<","<<j<<"]"<<endl;
                break;
            }
        }
    }   
}


