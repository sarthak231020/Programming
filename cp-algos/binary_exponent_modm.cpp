#include<iostream>

using namespace std;

long long int binpow(long long int a,long long int b,long long int m)
{
    a %= m;
    long long int res=1;
    while(b > 0)
    {
        if(b & 1)
            res = res * a % m;
        
        a = a * a % m;
        b >>= 1;

    }
    return res;
}

int main()
{
    long long int a,b,m;
    cout<<"Enter base,power,mod value respectively:";
    cin>>a>>b>>m; 
    cout<<"The result is:"<<binpow(a,b,m);
}
