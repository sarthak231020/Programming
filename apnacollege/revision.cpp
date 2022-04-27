//Max Till I

#include<bits/stdc++.h>
using namespace std; 

// int main() 
// {
//     int n;
//     cin>>n;
//     int arr[n];

//     for(int i=0;i<n;i++) 
//     {
//         cin>>arr[i];
//     }

//     // cout<<arr[0];
//     int maximum = INT_MIN;
//     for(int i=0;i<n;i++) 
//     {
//         maximum = max(maximum,arr[i]);
//         cout<<maximum<<" ";
//     }
//     cout<<endl;
// }

//Sum of subarray... 

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
//     for(int i=0;i<n;i++)
//     {
//         sum = 0;
//         for(int j=i;j<n;j++)
//         {
//             sum += arr[j];
//             cout<<sum<<" ";
//         }
//         cout<<endl;
//     }

// }

//Longest arthmetic sum....
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
    
//     for(int i=0;i<n;i++) 
//     {
//         cin>>arr[i];
//     }
//     int ans = 2,prev_sum=arr[1]-arr[0],curr_sum,max_len=2;
//     for(int i=2;i<n;i++)
//     {   
//         curr_sum = arr[i]-arr[i-1];
//         if(curr_sum == prev_sum)
//         {
//             max_len += 1;
//         }
//         else
//         {
//             prev_sum = curr_sum;
//             max_len = 2;
//         }
//         ans = max(ans,max_len);
//     }
//     cout<<ans<<endl;
// }

//Record_breaker_day......

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
    int a[n] = -1;
    if(n==1)
    {
        cout<<"1"<<endl;
        return 0;
    }
    int ans = 0;
    int mx = -1;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i] > mx && arr[i]>arr[i+1])
            ans++;
        mx = max(mx,arr[i]);
    }

    cout<<ans<<endl;

    // int count=0;
    // if(n >=2  && arr[0]>arr[1])
    //     count+=1;
    // int maximum = INT_MIN;
    // for(int i=0;i<n;i++)
    // {
    //     maximum = max(arr[i],maximum);
    // }

    // if(maximum == arr[n-1])
    //     count++;
    
    // bool flag = true;
    
    // for(int i=1;i<n-1;i++)
    // {
    //     if(arr[i] < arr[i+1])
    //         continue;
    //     for(int j=0;j<i;j++)
    //     {
    //         if(arr[j] > arr[i])
    //         {
    //             flag=false;
    //             break;
    //         }
    //     }
    //     if(flag == true)
    //     {
    //         count++;
    //     }
    // }
    // cout<<count<<endl;
}