#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll prod_dig(int n)
{
    if(n == 0)
    {
        return 0;
    }
    ll prod = 1;
    while(n) 
    {
        prod *= (n%10);
        n /= 10;
    }
    return prod;
}

ll factorial(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    ll f = 1;
    for(int i=2;i<=n;i++)
    {
        f *= i;
    }
    return f;
}

int main() 
{
    vector<int> fact;
    for(int i=0;i<=10;i++) 
    {
        fact.push_back(factorial(i));
    }
    int T;
    cin>>T;
    while(T--)
    {

        int N;
        cin>>N;
        // cout<<"Factorial of no of digits:"<<fact(N)<<endl;
        // cout<<"Product of no of digit:"<<prod_dig(N)<<endl;
        ll count = 0;
        for(int i=1;i<=N;i++)
        {
            if(prod_dig(i) >= fact[floor(log10(i)+1)])
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}