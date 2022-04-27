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

    for(int i=0;i<n;i++) 
    {
        cout<<arr[i]<<" "; 
    }

    int minimum=arr[0],maximum=arr[0];

    for(int i=0;i<n;i++)
    {
        if(minimum > arr[i])
        {
            minimum = arr[i];
        }
        if(maximum < arr[i])
        {
            maximum = arr[i];
        }
    }
    cout<<endl;
    cout<<maximum<<"  "<<minimum<<endl;

    //Or by 
    minimum=INT_MAX;
    maximum=INT_MIN;

    for(int i=0;i<n;i++)
    {
        minimum = min(minimum,arr[i]);
        maximum = max(maximum,arr[i]);
    }
    cout<<minimum<<" "<<maximum<<endl;

}
