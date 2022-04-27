#include<bits/stdc++.h> 
using namespace std;

string string_rev(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char ch = s[0];
    return string_rev(s.substr(1))+ch;
}

int main() 
{
    string s;
    getline(cin,s); 
    cout<<string_rev(s)<<endl;

    if(s == string_rev(s))
    {
        cout<<"PALINDROME"<<endl;
    }
    else 
    {
        cout<<"NOT PALINDROME"<<endl;
    }
}