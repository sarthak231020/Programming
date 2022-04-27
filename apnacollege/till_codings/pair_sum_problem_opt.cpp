// #include<iostream>
// #include<algorithm>
// using namespace std; 

// int main() 
// {
//     int n,sum;
//     cin>>n>>sum;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     sort(arr,arr+n);

//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int low=0,high=n-1;

//     while(low < high)
//     {
//         if(arr[low]+arr[high] > sum)    
//             high--;
//         else if(arr[low]+arr[high] < sum)
//             low++;
//         else
//         {
//             cout<<"1"<<endl;
//             return 0;
//         }
//     }
//     cout<<"0"<<endl;
//     return 0;

// }

// #include<iostream>
// #define N 100000
// using namespace std;
// int check[N];
// int main() 
// {
//     int n,x;
//     cin>>n>>x;
//     int arr[n];

//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     for(int i=0;i<n;i++)
// 	    {
// 	        check[arr[i]] = 1;
// 	    }
// 	    for(int i=0;i<n;i++)
// 	    {
// 	        if(check[x-arr[i]] == 1)
// 	        {
//                 cout<<"1"<<endl;
//                 return 0;
//             }
// 	    }
// 	    cout<<"0"<<endl;
//         return 0;
// }


#include<iostream>
using namespace std;
#define N 100000
int check[N];
bool hasArrayTwoCandidates(int arr[], int n, int x) 
{
    for(int i=0;i<n;i++)
    {
        check[arr[i]] = 1;
    }
    
    for(int i=0;i<n;i++)
    {
        if(check[x-arr[i]] == 1)
        {
            cout<<arr[i]<<" "<<x-arr[i]<<endl;
            return true;
        }
    }
    
    return false;
    // code here
}

int main() 
{
    int n,x;
    cin>>n>>x;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    if(hasArrayTwoCandidates(arr,n,x))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}   