#include<iostream>
using namespace std;

int dec_to_bin(int n)
{
    int x=1;
    int ans=0;
    while(x <= n)
        x *= 2;
    x /= 2;
    while(x > 0)
    {
        int lastDigit = n/x;
        n -= lastDigit*x;
        ans = ans*10+lastDigit;
        x /= 2;
    }

    return ans;
}

int main() 
{
    int n;
    cin>>n;
    cout<<dec_to_bin(n)<<endl;
}