// #include<iostream>
// using namespace std; 
// int main() 
// {
//     int n;
//     cin>>n;
//     int arr[n][n];
//     arr[0][0]=1;

//     cout<<arr[0][0]<<" ";
//     for(int j=1;j<n;j++)
//     {
//         arr[0][j] = arr[0][j-1]+j;
//         // cout<<arr[0][j]<<" ";
//     }
//     for(int i=1;i<n;i++)
//     {
//         arr[i][0] = arr[i-1][0] + (i+1);
//     }

//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i][0]<<" ";
//     }
//     cout<<endl;
//     for(int j=0;j<n;j++)
//     {
//         cout<<arr[0][j]<<" ";
//     }
//     cout<<endl;
//     // for(int i=1;i<n;i++)
//     // {
//     //     for(int j=1;j<n;j++)
//     //     {
//     //         int k = i+j+1;
//     //         arr[i][j] = arr[i-1][j]+k; 
//     //     }
//     // }

//     // for(int i=0;i<n;i++)
//     // {
//     //     for(int j=0;j<n;j++)
//     //     {
//     //         cout<<arr[i][j]<<" ";
//     //     }
//     //     cout<<endl;
//     // }

// }

#include<iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;

    int arr[n][n];
    arr[1][1] = 1;

    for(int i=2;i<n;i++)
    {
        arr[i][1] = arr[i-1][1] + i;
        cout<<arr[i][1]<<" ";
    }
    cout<<endl;
    for(int j=2;j<n;j++)
    {
        arr[1][j] = arr[1][j-1] + (j-1);
    }

    for(int i=1;i<n;i++)
    {
    }

        

}