#include<iostream>

using namespace std;

long long int binpow(long long int a,long long int b)
{
    if(b==0)
        return 1;
    
    cout<<"Now The Value Of b is:"<<b<<endl;
    long long int res = binpow(a,b/2);
    cout<<"The Result Value is:"<<res<<endl;
    if(b%2 == 1)//Whenever b is odd..........
        return res*res*a;
    else
        return res*res;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<binpow(a,b)<<endl;
}