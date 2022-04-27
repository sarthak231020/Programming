// #include<iostream> 

// using namespace std;

// void swap(int *n1,int *n2)
// {
//     int temp;
//     temp = *n1;
//     *n1 = *n2;
//     *n2 = temp;
// }

// int main() 
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int j,key;

//     for(int i=1;i<n;i++)
//     {
//         key = arr[i];
//         j = i-1;
//         while(arr[j] > key && j>=0) 
//         {
//             arr[j+1] = arr[j];
//             j = j-1;
//         }
//         arr[j+1] = key; 
//     }

//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

#include<iostream>
using namespace std;

void insertion_sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key = arr[i];
        int j = i-1;
        while(arr[j] > key && j>=0)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }   
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
    
    insertion_sort(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl; 
}