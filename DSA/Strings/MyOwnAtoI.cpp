#include<bits/stdc++.h>
using namespace std;

int solve(string s) 
{
    int base = 0,i=0,sign = 1;
    while(s[i] == ' ') 
        i++;
    if(s[i] == '-')
    { 
        sign = -1;
        i++;
    }
    while((s[i] >= '0') && (s[i] <= '9'))
    {
        if(base > (INT_MAX/10) || (base == (INT_MAX/10) && s[i]-'0' > 7)) //Check for overflow.
        {   
            if(sign == 1) 
                return INT_MAX;
            else 
                return INT_MIN;
        }
        base = 10*base+(s[i]-'0');
        i++;
    }
    return base*sign;
}

int main() 
{
    string s;
    getline(cin,s);
    cout<<s<<endl;
    cout<<solve(s);
}