#include<iostream>
using namespace std;

int main()
{
    int T,H,P;
    cin>>T;
    while(T--)
    {
        cin>>H>>P;
        while(H>0 && P)
        {
            H = H-P;
            if(H <= 0)
                break;
            P /= 2;
        }
        if(P == 0) 
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
        
    }
}