#include<iostream>
using namespace std;

void fact(int n)
{
    int fac = 1;
    while(n)
    {
        fac *= n;
        n--;
    }
    cout<<fac<<endl;
}

int main() 
{
    int n;
    cin>>n; 
    fact(n);
}