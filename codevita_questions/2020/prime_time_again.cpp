#include<iostream>
#include<vector>
using namespace std;

bool is_prime(int n)
{
    if(n%2 == 0)
    {
        return false;
    }
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}

int main()
{
    int D,P;
    cin>>D>>P;
    int hours = D/P; 
    vector<int> primes;
    for(int i=2;i<=hours;i++)
    {
        if(is_prime(i))
        {
            primes.emplace_back(i);
        }
    }
    int temp = P; 
    bool flag = true;
    int count = 0;
    for(auto i:primes)
    {   
        temp = P;
        flag = true;
        for(int j=1;j<P;j++)
        {
            if(is_prime(i+hours*j) == false)
            {
                flag = false;
                break;
            }
        }
        if(flag == true)
        {
            count++;
        }
    }

    cout<<count<<endl;
    // while(P--)
    // {

    // }
    // for(int i=2;i<=hours;i++)
    // {
    //     if(is_prime(i))
    //     {
    //         if(is_prime(i+hours))
    //         {
    //             count += 1;
    //         }
    //     }
    // }
    // cout<<count<<endl;
}