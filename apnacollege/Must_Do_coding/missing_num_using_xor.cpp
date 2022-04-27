#include<iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int a = arr[0];
    int b = 1;

    for(int i=1;i<n;i++)
    {
        a = a^arr[i];
    }
    cout<<a<<endl;


    for(int i=2;i<=n+1;i++)
    {
        b = b^i;
    }
    cout<<b<<endl;
    int missing = (a^b);

    cout<<missing<<endl;

}