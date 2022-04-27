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
    
//     bool flag = false;
//     for(int i=0;i<n;i++) 
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[i] == arr[j])
//             {
//                 printf("Element:%d Index:%d Repeating Index:%d\n",arr[i],i,j);
//                 flag = true;
//                 break;
//             }
//             if(flag == true)
//                 break;
//         }
//         // if(flag == true)
//         //     break;
//     }

//     int min_ind = INT_MAX;
//     int idx[n];
//     for(int i=0;i<n;i++)
//     {
//         idx[i] = -1;
//     }
//     for(int i=0;i<n;i++)
//     {
//         idx[arr[i]] = i;
//         if(idx[arr[i]] != -1)
//     }
    
// }

#include<iostream>
using namespace std;
#define N 1000000
int idx[N];
int main() 
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    
    int min_idx = INT_MAX; 

    for(int i=0;i<N;i++)
    {
        idx[i] = -1;
    }   
    for(int i=0;i<n;i++)
    {
        
        if(idx[arr[i]] != -1)
        {
            min_idx = min(min_idx,idx[arr[i]]);
        }
        else
        {
            idx[arr[i]] = i;
        }
    }

    // for(int i=0;i<n;i++)
    // {
    //     cout<<idx[arr[i]]<<" ";
    // }
    // cout<<endl;
    (min_idx==INT_MAX)?cout<<"-1":cout<<min_idx+1<<endl;
}