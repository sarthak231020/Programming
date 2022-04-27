#include<iostream> 
#include<climits> 

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
    // int maxtill[n];
    // int max;
    // for(int i=0;i<n;i++)
    // {
    //     max = INT_MIN;
    //     for(int j=0;j<=i;j++)
    //     {
    //         if(max < arr[j])
    //         {
    //             max = arr[j];
    //         }
    //     }
    //     maxtill[i] = max;
    // }

    // for(int i=0;i<n;i++)
    // {
    //     cout<<maxtill[i]<<" ";
    // }
    // cout<<endl;
    int tillmax=arr[0];
    for(int i=1;i<n;i++)
    {
        tillmax = max(tillmax,arr[i]);
        cout<<tillmax<<" ";
    }
    
}
