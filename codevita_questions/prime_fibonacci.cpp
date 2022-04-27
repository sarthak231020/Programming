#include<iostream>
#include<bits/stdc++.h> 
#include<vector>
#include<set>
#include<math.h>
using namespace std;


vector<bool> segmented_sieve(long long L,long long R)
{
    long long lim = sqrt(R);
    vector<bool> mark(lim+1,false);
    vector<long long> primes;

    for(long long int i=2;i<=lim;++i)
    {
        if(!mark[i])
        {
            primes.emplace_back(i);
            for(long long int j = i*i; j<=lim; j+=i)
            {
                mark[j] = true;
            }
        }
    }

    vector<bool> is_prime(R-L+1,true);

    for(long long i : primes)
    {
        for(long long j=max(i*i,(L+i-1)/i*i); j<=R; j += i)
        {
            is_prime[j-L] = false;
        }
    }


    if(L == 1)
        is_prime[0] = false;

    if(L == 0)
    {
        is_prime[0] = false;
        is_prime[1] = false;
    }

    return is_prime;
}

int minimum(set<int> s)
{
    int m = 10000000;
    for(set<int>::iterator itr=s.begin();itr!=s.end();itr++)
    {
        if(*itr < m)
            m = *itr;
    }

    return m;
}


int maximum(set<int> s)
{
    int m = 0;
    for(set<int>::iterator itr=s.begin();itr!=s.end();itr++)
    {
        if(*itr > m)
            m = *itr;
    }

    return m;
}

int main()
{
    long long L,R;
    cin>>L>>R;
    long long temp;
    temp = L;

    vector<bool> v;

    v = segmented_sieve(L,R);

    vector<int> prime;

    for(long long i=0;i<=R-L;i++)
    {
        if(v[i]) 
            prime.emplace_back(temp);
        temp++;
    }

    set<int> combination;
    for(size_t i=0;i<prime.size();i++)
    {
        for(size_t j=0;j<prime.size();j++)
        {
            if(j!=i)
              combination.emplace(stoi(to_string(prime[i])+to_string(prime[j])));
        }
    }


    v = segmented_sieve(minimum(combination),maximum(combination));
    
    temp = minimum(combination);

    vector<int> prime2;

    
    for(int i:combination)
    {
        if(v[i-minimum(combination)])
            prime2.emplace_back(i);
    }

    int m0 = *min_element(prime2.begin(),prime2.end());
    int mm = *max_element(prime2.begin(),prime2.end());

    vector<long long> fib(prime2.size());
    fib[0] = (long long)m0;
    fib[1] = (long long)mm;
    
    for(unsigned long long i=2;i<prime2.size();i++)
    {
        fib[i] = fib[i-1]+fib[i-2];
    }

    
    cout<<fib[fib.size()-1];


    return 0;
}
