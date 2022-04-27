#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=n;i<n+m;i++)
    {
        for(int j=n;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    for(int i=n+m-2;i>=n;i--)
    {
        for(int j=n;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }

}