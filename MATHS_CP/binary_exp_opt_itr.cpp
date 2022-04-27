//space O(1)
//time O(logn)
#include<bits/stdc++.h>
using namespace std;

long long int power(int a,int b)
{
    long long int ans = 1;
    while(b > 0)
    {
        if(b%2 == 1)
            ans = ans*a;
        b = b>>1; 
        a = a*a;
    }
    return ans;
}

int main()
{
    int a,b;
    cin>>a>>b;

    cout<<power(a,b)<<endl;
}