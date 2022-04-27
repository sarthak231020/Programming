#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
    int T,N;
    cin>>T;

    while(T--)
    {
        cin>>N;
        int s=0;
        while(N)
        {
            N -= (floor(sqrt(N)) * floor(sqrt(N)));
            s += 1;
        }
    
        cout<<s<<endl;
    }

    return 0;
}