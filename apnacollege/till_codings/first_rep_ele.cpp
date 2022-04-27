//Bruteforce O(n^2)

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

//     for(int i=0;i<n;i++) 
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[i] == arr[j])
//             {
//                 cout<<"The Pos of First Repeating Element:"<<i+1<<endl;
//                 return 0;
//             }
//         }
//     }
// }


//Optimized Solution O(n)

#include<bits/stdc++.h>
using namespace std;
int idx[100000000];
// array size 10^7 to 10^8 declared globally(i.e. on heap) is possible…if u declare nething in the main or in ne fxn…it goes into the stack which has a smaller size hence ur 10^7 array did not work out…try declaring it globally and it should work…this is what i have observed…hope this helps…
int main() 
{
    int n; 
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];
    }

    for(int i=0;i<100000000;i++)
    {
        idx[i] = -1;
    }
 
    int min_idx = INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(idx[arr[i]] != -1)
        {
            // cout<<"IF "<<idx[arr[i]]<<" "<<arr[i]<<endl;
            min_idx = min(idx[arr[i]],min_idx);
        }
        else
        {
            // cout<<"ELSE "<<endl;
            idx[arr[i]] = i;
        }
    }
    // cout<<min_idx<<endl;

    if(min_idx == INT_MAX)
        cout<<"-1"<<endl;
    else
        cout<<"First Rep Element:"<<min_idx+1<<endl;

}