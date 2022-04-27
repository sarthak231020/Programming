#include<iostream>
#include<math.h>
using namespace std;
#define ll long long

int main() 
{
    int T;
    ll N;
    cin>>T;
    while(T--)
    {
        cin>>N;
        ll i=1,zero=0;
        while(pow(5,i)<=N)
        {
            i++;
        }
        for(int j=1;j<i;j++)
        {
            zero += N/(pow(5,j));
        }
        cout<<zero<<endl;
    }
}