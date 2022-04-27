#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define N 1000002
bool check[N];

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<N;i++)
    {
        check[i] = false;
    }
    
    for(int i=0;i<n;i++)
    {
        if(arr[i] > 0)
        {
            check[arr[i]] = true;
        }
    }
    for(int i=1;i<N;i++)
    {
        if(check[i] == false)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
    
}