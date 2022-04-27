#include<iostream>
using namespace std;

void fibonacci(int n,int m,int range) 
{
    int a[range];
    a[0] = n;
    a[1] = m;
    for(int i=2;i<range;i++) 
    {
        a[i] = a[i-1]+a[i-2];
    }

    cout<<"Fibonacci series is:";
    for(int i=0;i<range;i++) 
    {
        cout<<a[i]<<"  ";
    }

    cout<<endl; 
}

int main()
{
    int a,b,n;
    cout<<"Enter the starting values and range for fibonacci:";
    cin>>a>>b>>n;

    fibonacci(a,b,n);
}