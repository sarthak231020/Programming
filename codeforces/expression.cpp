#include<iostream>
using namespace std;


int summation(int a,int b,int c)
{
    if(a==1 && b==1 && c==1)
    {
        return (a+b+c);
    }
    if(a==1 || b==1 || c==1)
    {
        if(a==1 && b==1)
        {
            return (a+b)*c;
        }
        if(b==1 && c==1)
        {
            return a*(b+c);
        }
        if(a==1 && c==1)
        {
            return a+b+c;
        }
        if(a==1)
        {
            return (a+b)*c;
        }
        if(b==1)
        {
            return (min(a,c)+b)*max(a,c);
        }
        if(c==1)
        {
            return a*(b+c);
        }
    }
    return a*b*c;
}

int main() 
{
    int a,b,c;

    cin>>a>>b>>c;

    cout<<summation(a,b,c)<<endl;
}