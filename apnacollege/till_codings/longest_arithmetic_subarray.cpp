#include<iostream>
using namespace std;

int main() 
{

    int n;
    cin>>n;
    int arr[n];
    int prev,curr,sub,max_sub;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    max_sub = 2,sub = 2;

    prev = arr[1]-arr[0];
    for(int i=2;i<n;i++)
    {
        curr = arr[i]-arr[i-1];
        if(prev == curr)
        {
            sub = sub+1;
            max_sub = max(max_sub,sub);
        }
        else
        {
            sub = 2;
        }
        prev = curr;
    }

    cout<<max_sub<<endl;
}