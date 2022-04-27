#include<iostream>
using namespace std;


void left_rotate_by_one(int arr[],int d,int n)
{   
    int temp=arr[0],i;
    for(i=0;i<n-1;i++)
    {   
        arr[i] = arr[i+1];
    }
    arr[i] = temp;
}

int main()
{
    int d,n;
    cout<<"Enter the size and No. of rotations:";
    cin>>n>>d;
    
    int arr[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<d;i++)
       left_rotate_by_one(arr,d,n);
    
    cout<<"The Elements of the array:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}