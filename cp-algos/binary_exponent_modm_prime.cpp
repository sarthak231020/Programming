#include<iostream>
int is_prime[1000001];

using namespace std;

int sieve(int range)
{
    long long int maxN = 1000000;
    for(int i=0;i<=maxN;i++)
    {
        is_prime[i] = 1;
    }

    is_prime[0] = is_prime[1] = 0;

    for(int i=0;i*i<=maxN;i++)
    {
        if(is_prime[i] == 1) 
        {
            for(int j=i*i;j<=maxN;j++) 
            {
                is_prime[j] = 0;
            }
        }
    }
}

long long int binpow(long long int a,long long int b,long long int m)
{
    if(is_prime[m])
    {
           
    }
}