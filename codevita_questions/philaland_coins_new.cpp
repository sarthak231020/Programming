#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
    int T,N; //T for test case,N for integer in every test case
    cin>>T;//Taking T input

    while(T--)
    {
        cin>>N;//Taking N input 
        cout<<(int)log2(N)+1; //calculating the value
        if(T>0)
            cout<<"\n";
    }

    return 0;
}