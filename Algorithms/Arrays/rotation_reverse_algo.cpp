#include<iostream>

using namespace std;

void reverseArray(int arr[],int start,int end)
{
    while(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp; 
        start++;
        end--;
    }
}

void left_rotate(int arr[],int d,int n)
{
    if(d==0)
        return;
    reverseArray(arr,0,d-1);
    reverseArray(arr,d,n-1);
    reverseArray(arr,0,n-1);
}

void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
int main()
{
    int n,d;
    cout<<"Enter the size and the rotation:";
    cin>>n>>d;

    int arr[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    left_rotate(arr,d,n);
    printarray(arr,n);
}