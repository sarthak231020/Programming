#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k;
    cin>>n>>k;

    if(n%2 == 0 && k<=(n/2))
    {
        cout<<(1)+(k-1)*2<<endl;
        return 0;
    }
    if(n%2 == 0 && k>(n/2))
    {
        cout<<(2)+(k-(n/2)-1)*2<<endl;
        return 0;
    }
    if(n%2 == 1 && k<=(n+1)/2)
    {
        cout<<(1)+(k-1)*2<<endl;
        return 0;
    }
    if(n%2 == 1 && k>(n+1)/2)
    {
        cout<<(2)+(k-((n+1)/2)-1)*2<<endl;
        return 0;
    }
}