// #include<iostream>
// #include<climits>

// using namespace std;

// void swap(int *a1,int *a2)
// {
//     int temp = *a1;
//     *a1 = *a2;
//     *a2 = temp;
// }

// void selection_sort(int arr[],int n)
// {
//     int min;
//     for(int i=0;i<n-1;i++)
//     {
//         min = i;
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[min] > arr[j]) 
//             {
//                 min = j;
//             }
//         }
//         swap(&arr[min],&arr[i]);
//     }
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

//     selection_sort(arr,n);

//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

// }

#include<iostream>
using namespace std;
void selection_sort(int arr[],int n)
{
    int min = INT_MAX;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if()
        }
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
    selection_sort(arr,n);
    
}