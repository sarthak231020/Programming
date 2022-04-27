//Time -> O(2^N)
//Space -> O(N)

#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if(n==1 || n==0)
    {
        return n;
    }
    
    int ans1 = fibonacci(n-2); //Execute and return then only below lines will get executed
    int ans2 = fibonacci(n-1);

    return ans1+ans2;
}

int main()
{
    int n;
    cin>>n;

    cout<<fibonacci(n)<<endl;
}