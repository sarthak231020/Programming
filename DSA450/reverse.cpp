#include<iostream>
#include<vector> 
using namespace std;

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int start = 0,end=n-1;
    while(start < end)
    {
        swap(&v[start],&v[end]);
        start++;
        end--;
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


//using Recursion
#include<iostream>
#include<vector> 
using namespace std;

void reverse_array(int arr[],int start,int end)
{
    if(start >= end)
        return;
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    reverse_array(arr,start+1,end-1);
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
    reverse_array()
}
// int main() 
// {
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>v[i];
//     }

//     reverse(v.begin(),v.end());

//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }