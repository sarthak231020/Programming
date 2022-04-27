#include<iostream>
using namespace std;

void sum(int n) 
{
    int s=0;
    for(int i=1;i<=n;i++)
    {
        s += i;
    }
    cout<<s<<endl; 
}

int main()
{
    int n;
    cin>>n;
    sum(n);
    
}

void dec_to_bin(int n)
{
    vector<int> v;
    while(n)
    {
        v.push_back(n%2);
        n /= 2;
    }
    reverse(v.begin(),v.end());

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<' ';
    }
}

void dec_to_oct(int n)
{
    vector<int> v;
    while(n)
    {
        v.push_back(n%8);
        n /= 8;
    }
    reverse(v.begin(),v.end());

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<' ';
    }
}

void dec_to_hex(int n)
{
    vector<int> v;
    while(n)
    {
        v.push_back(n%16);
        n /= 16;
    }
    reverse(v.begin(),v.end());

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<' ';
    }
}

int bin_to_dec(int n)
{
    int i=1,dec=1;
    while(n)
    {
        dec = pow(2,i)*(n%10);
        i++;
        n /= 10;
    }
    return dec;
}

int octal_to_dec(int n)
{
    int i=1,dec=1;
    while(n)
    {
        dec = pow(8,i)*(n%10);
        i++;
        n /= 10;
    }
    return dec;
}

int hex_to_dec(int n)
{
    int i=1,dec=1;
    while(n)
    {
        dec = pow(16,i)*(n%10);
        i++;
        n /= 10;
    }
    return dec;
}

