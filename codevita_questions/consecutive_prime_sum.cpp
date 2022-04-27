#include<iostream>
#include<vector>
using namespace std;

int main()
{
    long long N;
    int i=0,s=0;
    vector<bool> is_prime(N+1,true); 
    vector<long long> prime;
    vector<bool> result(N+1,false);

    cin>>N;
    is_prime[0] = is_prime[1] = false;

    for(long long i=2;i*i<=N;i++)
    {
        if(is_prime[i])
        {
            for(long long j=i*i;j<=N;j+=i)
            {
                is_prime[j] = false;
            }
        }
    }


    for(long long i=0;i<=N;i++)
    {
        if(is_prime[i])
        {
            prime.emplace_back(i);
        }
    }


    while(s<=N)
    {
        s+=prime[i];
        if(is_prime[s])
            result[s] = true;
        i++;
    }

    result[2] = false;

    for(int i=N;i>=0;i--)
    {
        if(result[i])
        {   cout<<i<<endl;
        }
    }


    
}