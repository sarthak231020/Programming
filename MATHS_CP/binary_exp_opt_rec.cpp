// space O(logn)
//time O(logn) 
#include<bits/stdc++.h>
using namespace std;

long long int power(int a,int b)
{
    if(b==0)
        return 1;
    int x = power(a,b/2);

    if(b%2 == 1)
        return x*x*a;
    else 
        return x*x;
}

int main() 
{
    int a,b;
    cin>>a>>b;
    cout<<power(a,b)<<endl;

}