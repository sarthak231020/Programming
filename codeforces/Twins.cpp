// http://codeforces.com/problemset/problem/160/A
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool comp(int a,int b)
{
    if(b < a)
        return true;
    else
        return false;
}
int main() 
{
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }

    sort(arr,arr+n,comp);
    int sum_you=0,count=0;
    while(sum_you <= sum)
    {
        sum_you += arr[count];
        sum -= arr[count];
        count++;
    }
    cout<<count<<endl;
}