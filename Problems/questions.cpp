#include<iostream> 
using namespace std;

bool prime_or_not(int N)
{   
    if(N == 2)
        return true;
    if(N%2 == 0)
        return false;
    for(int i=3;i*i<=N;i+=2)
    {
        if(N%i == 0)
            return false; 
    }
    return true;
}

int main()
{
    int N;
    cin>>N;
    cout<<prime_or_not(N)<<endl;
}