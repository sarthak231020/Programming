#include<iostream>
using namespace std;

int main()
{
    int T,N,rev=0,temp;
    cin>>T;
    while(T--)
    {
        rev = 0;
        cin>>N;
        while(N!=0)
        {
            temp = N%10;
            rev = rev*10+temp;
            N /= 10;
        }


        cout<<rev<<endl;
    }
}