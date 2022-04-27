#include<bits/stdc++.h>

using namespace std;

// int bin_to_dec(int n)
// {
//     int x=1,dec;
//     while(n)
//     {
//         dec += (n%10)*x;
//         x *= 2;
//         n /= 10;
//     }
//     return dec;
// }


// int oct_to_dec(int n)
// {
//     int x=1,dec;
//     while(n)
//     {
//         dec += (n%10)*x;
//         x *= 8;
//         n /= 10;
//     }
//     return dec;
// }

int hex_to_dec(string n)
{
    int x=1,dec=0;
    for(int i=n.size()-1;i>=0;i--)
    {
        if(n[i]>='A' and n[i]<='F')
        {
            dec += ((n[i]-'A')+10)*x;
        }
        else
        {
            dec += x*(n[i]-'0');
        }
        x*=16;
    }
    return dec; 
}

int dec_to_bin(int n)
{
    int x=1,ans=0; 
    while(x <= n)
    {
        x *= 2;
    }
    x /= 2; //since x become larger while become false

    while(x>0)
    {   
        int lastDigit = n/x;
        n -= lastDigit*x;
        x /= 2;
        ans = ans*10 + lastDigit;
    }
    return ans;
}

int dec_to_oct(int n)
{
    int ans=0,x=1;
    while(x <= n)
        x *= 8;
    x /= 8; 
    while(x > 0)
    {
        int lastDigit = n/x;
        n -= lastDigit*x;
        x /= 8;
        ans = ans*10 + lastDigit;
    }

    return ans;
}

string dec_to_hex(int n)
{
    string ans;
    int x=1;
    while(x <= n)
    {
        x *= 16;
    }
    x /= 16;
    while(x > 0) 
    {
        int lastDigit = n/x;
        n -= lastDigit*x;
        x /= 16;
        if(lastDigit < 9)
            ans += to_string(lastDigit);
        else
        { 
            char c = 'A'+ lastDigit - 10;
            ans += c;
        }
    }
    return ans;
}
int reverse(int n)
{
    int ans=0;
    while(n)
    {
        ans = ans*10+(n%10);
        n/=10; 
    }
    return ans;
}

int add_bin(int n1,int n2)
{
    int ans=0,carry=0;
    while(n1>0 && n2>0)
    {
        if(n1%2 == 0 &&  n2%2 == 0)
        {
            ans = ans*10 + 0;
            carry=0;
        }
        else if((n1%2 == 0 && n2%2 == 1) || (n1%2 == 1 && n2%2 == 0))
        {   
            if(carry == 1)
            {
                ans = ans*10+0;
                carry = 1;
            }
            else 
            {
                ans = ans*10+1;
                carry = 0;
            }
        }
        else if(n1%2 == 1 && n2%2 == 1)
        {
            if(carry == 1) 
            {
                ans = ans*10 + 1;
                carry = 1;
            }
            else
            {
                ans = ans*10 + 0;
                carry = 1;
            }
        }
        n1 /= 10; 
        n2 /= 10;
    }
    while(n1 > 0)
    {
        if(carry = 1)
        {
            if(n1%2 == 0)
            {
                ans = ans*10 + 1; 
                carry = 0;
            }
            else
            {
                ans = ans*10 + 0;
                carry = 1;
            }
        }
        else 
        {
            ans = ans*10 + (n1%2);
        }
        n1 /= 10;
    }
    
    while(n2 > 0)
    {
        if(carry = 1)
        {
            if(n2%2 == 0)
            {
                ans = ans*10 + 1; 
                carry = 0;
            }
            else
            {
                ans = ans*10 + 0;
                carry = 1;
            }
        }
        else 
        {
            ans = ans*10 + (n2%2);
        }
        n2 /= 10;
    }
    
    if(carry == 1)
    {
        ans = ans*10+1;
    }

    ans = reverse(ans);

    return ans;
}


int main() 
{
    // int n1,n2;
    // cin>>n1>>n2;
    // cout<<add_bin(n1,n2);

    // int n;
    // cin>>n;
    // cout<<dec_to_hex(n);

    // int n;
    // cin>>n;
    // cout<<dec_to_bin(n);

    // int n;
    // cin>>n; 
    // cout<<dec_to_oct(n);

    string n;
    cin>>n;
    cout<<hex_to_dec(n)<<endl;

}
