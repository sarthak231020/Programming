#include<iostream>
using namespace std;

int main() 
{
    int n,choc=0;
    cin>>n;
    choc += n;

    while(n > 0)
    {
        choc = choc + (n/3);
        n = n/3;
        if(n == 1)
            choc++;
    }

    cout<<choc<<endl;

}