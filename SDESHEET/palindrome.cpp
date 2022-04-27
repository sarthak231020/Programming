#include<bits/stdc++.h> 
using namespace std;

bool palindrome(string s)
{
    if(s.length() == 0 || s.length() == 1)
    {
        return true; 
    }
    if(s[0] == s[s.length()-1])
    {
        return palindrome(s.substr(1,s.length()-2));
    }
    return false;
}

int main() 
{
    // string s;
    // s = "palindrome";
    // cout<<s.substr(1,s.length()-2)<<endl;
    // cout<<
    string s;
    getline(cin,s);
    if(palindrome(s))
    {
        cout<<"PALINDROME"<<endl;
    }
    else 
    {
        cout<<"NOT PALINDROME"<<endl;
    }
}