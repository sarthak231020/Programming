// #include<iostream>
// using namespace std;

// //O(n^3)
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int max_sum = INT_MIN;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i;j<n;j++)
//         { 
//             int sum = 0;
//             for(int k=i;k<=j;k++)
//             {
//                 // cout<<arr[k]<<" ";
//                 sum += arr[k];
//             }
//             max_sum = max(max_sum,sum);
//             // cout<<endl;
//         }
//     }
//     cout<<max_sum<<endl;
// }

#include<iostream>
using namespace std; 

int main() 
{
    int n;
    cin>>n; 
    int arr[n];
    int cum_sum[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
 
    cum_sum[0] = arr[0];
 
    for(int i=1;i<n;i++)
    {
        cum_sum[i] += cum_sum[i-1];
    }

    int start = 0;
}