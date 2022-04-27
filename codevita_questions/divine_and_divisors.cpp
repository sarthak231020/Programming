#include<iostream>
#include<set>
#include<math.h>
using namespace std;
#define ll long long
set<ll> d;

void divisor(ll N)
{
    d.clear();
    d.insert(1);
    for(ll i=2;i<=(int)sqrt(N);i++)
    {
        if(N%i == 0) 
        {
            d.insert(i);
            d.insert(N/i);
        }
    }
    d.insert(N);
}
int main()
{
    int T;
    ll N;
    cin>>T;
    while(T--)
    {
        cin>>N;
        divisor(N);
        for(set<ll>::iterator itr=d.begin();itr!=d.end();itr++) 
        {
            cout<<*itr<<" ";
        }
        cout<<"\n";
    }
}