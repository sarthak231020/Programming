// #include<iostream>
// using namespace std;

// int main()
// {
//     int T;
//     cin>>T;
//     while(T--)
//     {
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++)
//         {
//             cin>>arr[i];
//         }
//         int rbd=0,i;
//         for(i=0;i<n;i++)
//         {
//             if(i==0 and arr[i]>arr[i+1])
//             {
//                 rbd++;
//             }
//             else
//             {
//                 int j;
//                 for(j=0;j<i;j++)
//                 {
//                     if(arr[j] >= arr[i])
//                     {
//                         break;
//                     }
//                 }
//                 if(i==j)
//                 {
//                     rbd++;
//                 }
//             }
//         }
//         int j;
//         for(j=0;j<i;j++)
//         {
//             if(arr[j] >= arr[i])
//             {
//                 break;
//             }
//         }
//         if(i == j)
//         {
//             rbd++;
//         }
//         cout<<rbd<<endl;
//     }
// }

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
//     int count = 0;

//     if(arr[0] > arr[1])
//         count++;
    
//     int j;
//     int flag = 1;
//     for(int i=1;i<n;i++)
//     {
//         if(arr[i] < arr[i+1])
//             continue;
//         j = i-1;
//         while(j>=0)
//         {   
//             if(arr[i] <= arr[j])
//             {
//                 flag = 0;
//                 break;
//             }
//             j--;
//         }
//         if(flag == 0)
//         {
//             continue;
//         }
//         else
//         {
//             count++;
//         }
//     }
//     cout<<count<<endl;
// }

//Optimized Solution

#include<iostream>
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
    int count = 0;

    if(arr[0] > arr[1])
        count++;
    
    int j;
    int flag = 1;
    int max_i = INT_MIN;
    for(int i=1;i<n;i++)
    {
        if((i != n-1) && (arr[i] < arr[i+1]))
            continue;
        max_i = max(max_i,arr[i-1]);
        if(arr[i] > max_i)
            count++;
        // j = i-1;
        // while(j>=0)
        // {   
        //     if(arr[i] <= arr[j])
        //     {
        //         flag = 0;
        //         break;
        //     }
        //     j--;
        // }
        // if(flag == 0)
        // {
        //     continue;
        // }
        // else
        // {
        //     count++;
        // }
    }
    cout<<count<<endl;
}
