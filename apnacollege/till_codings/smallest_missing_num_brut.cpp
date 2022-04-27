#include<iostream>
#include<algorithm>
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
    sort(&arr[0],&arr[n]);
    int i=0;
    while(arr[i] <= 0)
    {
        i++;
    }
    if(i == n)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(arr[i]>1)
    {
        cout<<1<<endl;
        return 0;
    }

    for(int j=i;j<n-1;j++)
    {
        if(arr[j+1] != arr[j]+1)
        {
            cout<<arr[j]+1<<" ";
            return 0;
        }
    }
    
    cout<<arr[n-1]+1<<endl;   
}