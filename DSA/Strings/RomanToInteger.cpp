#include<bits/stdc++.h>
using namespace std; 

// Algorithm to convert Roman Numerals to Integer Number:  

// Split the Roman Numeral string into Roman Symbols (character).
// Convert each symbol of Roman Numerals into the value it represents.
// Take symbol one by one from starting from index 0: 
// If current value of symbol is greater than or equal to the value of next symbol, then add this value to the running total.
// else subtract this value by adding the value of next symbol to the running total.

int value(char ch) 
{
    if(ch == 'I') 
        return 1;
    if(ch == 'V') 
        return 5;
    if(ch == 'X') 
        return 10;
    if(ch == 'L') 
        return 50;
    if(ch == 'C') 
        return 100;
    if(ch == 'D') 
        return 500;
    if(ch == 'M') 
        return 1000;
    return -1;
}

int solve(string s)
{
    int res = 0;
    for(int i=0;i<s.length();i++) 
    {
        int val1 = value(s[i]);

        if(i+1 < s.length())
        {
            int val2 = value(s[i+1]);
            if(val1 >= val2)
            {
                res += val1;
            }
            else 
            {
                res += val2-val1;
                i++;
            }
        }
        else 
        {
            res += val1;
        }

    }
    return res;
}
//More readable code 
class Solution {
public:
    int romanToInt(string s) {
        map<char,int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        int res = 0;
        int N = s.length();
        for(int i=0;i<s.length();i++) 
        { 
            if(i+1 < N && mp[s[i]] < mp[s[i+1]]) 
                res -= mp[s[i]];
            else 
                res += mp[s[i]];
        }
        return res;
    }
};

int main() 
{
    string s; 
    cin>>s;

    cout<<solve(s);
}