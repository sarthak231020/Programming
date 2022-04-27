#include<iostream>
using namespace std;

int euclid_gcd(int n,int m)
{
    int dividend = n>=m?n:m;
    int divisor = n<=m?n:m;

    while(divisor)
    {
        int remainder = dividend%divisor;
        dividend = divisor;
        divisor = remainder;
    }

    return dividend; 
}

int euclid_gcd_better(int n,int m)
{
    while(n)
    {
        int rem=n%m;
        n = m;
        m = rem;
    }
    return n;
}

int euclid_gcd_rec(int n,int m)
{
    return (m==0)?n:euclid_gcd_rec(m,n%m);
}
int main() 
{
    int n,m;
    cin>>n>>m;
    cout<<euclid_gcd(n,m)<<endl;
    cout<<euclid_gcd_better(n+10,m+10)<<endl;
    cout<<euclid_gcd_rec(n+20,m+20)<<endl;
    
}

