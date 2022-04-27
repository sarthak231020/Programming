#include<bits/stdc++.h>
using namespace std;

int power(int n,int p)
{
    int res = 1;
    while(p--)
    {
        res = res*n;
    }
    return res;
}

int main() 
{
    int n,p;
    cin>>n>>p;

    cout<<power(n,p)<<endl;
}