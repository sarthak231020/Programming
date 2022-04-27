#include<iostream>
using namespace std;

int main() 
{
    int T,N;
    cin>>T;

    while(T--)
    {
        cin>>N;
        
        int s = 0;

        while(N) 
        {
            if(N%10 == 4)
                s = s+1;
            N = N/10;
        }

        cout<<s<<endl;
    }
}