// // Using Brute Force 
// #include<iostream>

// using namespace std;

// int main() 
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int sum;
//     cin>>sum;

//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[i]+arr[j] == sum)
//             {
//                 cout<<"Pair Found "<<arr[i]<<" "<<arr[j]<<endl;
//                 return 0;
//             }
//         }
//     }

//     cout<<"Pair Not Found"<<endl;
// }


//Using Sorting

#include<iostream>
#include<bits/stdc++.h>
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

    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<"  ";
    // }
    
    int sum;
    cin>>sum;
    int low=0,high=n-1;
    while(low < high)
    {
        if(arr[low]+arr[high] > sum) 
        {
            high--;
        }
        else if(arr[low]+arr[high] < sum)
        {
            low++;
        }
        else if(arr[low]+arr[high] == sum)
        {
            cout<<"Pair Found "<<arr[low]<<" "<<arr[high]<<endl;
            return 0;
        }
    }
    cout<<"Pair Not Found"<<endl;
}