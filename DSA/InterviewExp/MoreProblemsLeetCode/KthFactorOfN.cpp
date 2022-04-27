#include<bits/stdc++.h>
using namespace std;

int kthFact(int N,int K) 
{
    vector<int> divisors;
    for(int i=1;i<=sqrt(N);i++)
    {
        if(N%i == 0) 
        {
           divisors.push_back(i);
           K--;
        }
    }

    int ndiv = divisors.size();
    if(sqrt(N)*sqrt(N) == N) 
        K++; //Since we donot consider duplicates
    
    if(K <= ndiv)
        return N/divisors[ndiv-K];
    return -1;
}



int main() 
{
    int N,K;
    cin>>N>>K;

    cout<<kthFact(N,K)<<endl;
}