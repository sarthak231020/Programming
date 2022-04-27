#include<iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int arr[n];
    int sum_total = (n+1)*(n+2)/2;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum_total -= arr[i];
    }   
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<sum_total<<endl;

}


// #include <bits/stdc++.h>
// using namespace std;

// // Function to get the missing number
// int getMissingNo(int a[], int n)
// {

//     int total = (n + 1) * (n + 2) / 2;
//     for (int i = 0; i < n; i++)
//         total -= a[i];
//     return total;
// }

// // Driver Code
// int main()
// {
//     int arr[] = { 1, 2, 3,4, 5, 6,7,8,9 };
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int miss = getMissingNo(arr, n);
//     cout << miss;
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

//     int sum=0;

//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//         sum += arr[i];
//     }

//     cout<<sum<<endl;

//     cout<<((n+1)*(n+2)/2)-sum<<endl;
//     cout<<endl;


// }