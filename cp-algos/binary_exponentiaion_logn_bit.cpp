#include<iostream>

using namespace std;

long long int binpow(long long int a,long long int b)
{
    long long int res=1;
    while(b>0)
    {
        cout<<"The Value a:"<<a<<"\nThe value of b:"<<b<<"\nThe value is Res:"<<res<<endl;
        if(b&1)
            res = res*a;
        a = a*a;
        // b >>= 1;
        b /= 2;
        
    }
    return res;
    
}

int main()
{
    long long int a,b; 
    cin>>a>>b;
    cout<<"The Result is:"<<binpow(a,b)<<endl;


    while(b>0)
    {
        cout<<"The value of b:"<<b<<endl;
        b = b&1;
    }
    return 0;
}

