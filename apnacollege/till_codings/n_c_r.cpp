#include<iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    while(n)
    {
        fact *= n;
        n--;
    }
    return fact;
}
int main() 
{
    int n,r;
    cin>>n>>r;
    cout<<factorial(n)/(factorial(n-r)*factorial(r));
}