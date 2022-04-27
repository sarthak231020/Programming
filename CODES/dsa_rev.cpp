#include<iostream>
using namespace std;

void insert_array()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    for(int i=n;i>k;i--)
    {
        arr[i] = arr[i-1];
    }
    int ele;
    cin>>ele;
    arr[k] = ele;

    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;   
}

void delete_array()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    for(int i=k;i<n;i++)
    {
        arr[i] = arr[i+1];
    }
    
    for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void merging_array()
{
    int n,m;
    cin>>n>>m;
    int A[n],B[m];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int j=0;j<m;j++)
    {
        cin>>B[j];
    }
    int C[n+m];
    int i=0,j=0,k=0;
    while((i<n) && (j<m))
    {
        if(A[i] <= B[j])
        {
            C[k++] = A[i++];
        }
        else
        {
            C[k++] = B[j++];
        }
    }

    cout<<i<<" "<<j<<endl;
    while(i<n)
    {
        C[k++] = A[i++];
    }
    while(j<m)
    {
        C[k++] = B[j++];
    }


    for(int i=0;i<n+m;i++) 
    {
        cout<<C[i]<<" ";
    }
    cout<<endl;
}
int main() 
{
    // delete_array();
    merging_array();
}