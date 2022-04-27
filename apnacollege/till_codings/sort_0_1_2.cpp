#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() 
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];
    }
    int no_0 = 0,no_1 = 0,no_2 = 0;

    for(int i=0;i<n;i++)
    {
        if(arr[i] == 0)
        {
            swap(&arr[i],&arr[no_0]);
            no_0++;
        }
    }

    no_1 = no_0;
    for(int i=no_1;i<n;i++)
    {
        if(arr[i] == 1)
        { 
            swap(&arr[i],&arr[no_1]);
            no_1++;
        }
    }

    no_2 = no_1;

    for(int i=no_2;i<n;i++)
    {
        if(arr[i] == 2)
        {
            swap(&arr[i],&arr[no_2]);
            no_2++;
        }
    }

    for(int i=0;i<n;i++) 
    {
        cout<<arr[i]<<" ";
    }

    
}