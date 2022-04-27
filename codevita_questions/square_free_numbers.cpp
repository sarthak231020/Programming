#include<iostream>
#include<vector> 
#include<bitset>
#include<math.h>
#include<set>
#define ll long long 
using namespace std;
set<ll> f;

bool is_prime(int n) 
{
    if(n==0 || n==1)
        return false;
    else
    {
        for(ll i=2;i<=sqrt(n);i++)
        {
            if(n%i == 0)
            {
                return false;
            }
        }
        return true;
    }
}
bool perfect_square(ll n)
{
    return (pow((int)sqrt(n),2) == n);
}

void factorized(ll n)
{
    ll i=2;
    while(i<=sqrt(n))
    {
        if(n%i == 0)
        { 
            f.insert(i);
            f.insert(n/i);
        }
        i += 1;
    }
    f.insert(n);
}

int main()
{
    ll n;
    cin>>n;
    factorized(n);
    vector<ll>  factors(f.begin(),f.end());
    ll count=0;
    for(ll i=0;i<factors.size();i++)
    {
        if(is_prime(factors[i]))
        {
            count++;
        }
        else
        {
            bool flag = true;
            vector<ll> local_factor;
            if(!(perfect_square(factors[i])))
            {
                local_factor.clear();
                for(ll j=2;j<=factors[i]/2;j++)
                {
                    if(factors[i]%j == 0)
                    {
                        if(perfect_square(j))
                        {
                            flag = false;
                            break;
                        }
                    }
                }
                if(flag == true)
                {
                    count++;
                }
            }
        }
    }
    cout<<count<<endl;
}
