#include<iostream>
#include<vector>

using namespace std;

vector<bool> is_prime(800000000+1,true);

void sieve()
{
    long long int max = 800000000;

    is_prime[0] = is_prime[1] = false;

    for(long long int i=2;i*i<=max;i++)
    {
        if(is_prime[i])
        {  
            for(long long int j=i*i;j<=max;j += i)
            {
                is_prime[j] = false;
            }
        }
    }
}


int main()
{
    long long int n=100000000;
    long long int i = 0;
    sieve();
    cout<<"\tPrimeNumber\tIndex\n";
    long long int count = 0;
    while(i<=n)
    {
        if(is_prime[i])
        {
            cout<<"\t"<<i<<"\t"<<count<<endl;
        }
        count++; 
        i++;
    }
}


