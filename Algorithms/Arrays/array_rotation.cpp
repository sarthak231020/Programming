#include<iostream>
using namespace std;

int main()
{
    int d,n;
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter the no. of left rotations:";
    cin>>d;

    int arr[n];

    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int temp[d];

    for(int i=0;i<d;i++)
    {
        temp[i] = arr[i];
    }

    cout<<" The temp array:";
    for(int i=0;i<d;i++)
    {
        cout<<temp[i]<<"  ";
    }
    cout<<endl; 
    for(int i=d;i<n;i++)
    {
        arr[i-d] = arr[i];
    }

    int c=n;
    for(int i=d;i>=0;i--)
    {
        arr[c] = temp[i];
        c--;
    }
    
    cout<<endl<<"After the rotations the resultant array:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}