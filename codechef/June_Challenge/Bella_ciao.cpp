#include<iostream>
using namespace std;
#define ll long long int
int main() 
{
    int T;
    cin>>T;

    while(T--)
    {
        ll D,d,p,q,sum=0,x,y;
        cin>>D>>d>>p>>q;
        x = D/d;
        if(x%2 == 0)
        {
            sum += d*((x/2)*(2*p+(x-1)*q));
        }
        else
        {
            sum += d*(x*(p+((x-1)/2)*q));
        }

        sum += (D%d)*(p+(x)*q);

        cout<<sum<<"\n";
    }
}