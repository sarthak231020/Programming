#include<bits/stdc++.h>
using namespace std;

bool str_palindrome(int i,string s)
{
    if(i > s.length()/2-1)
        return true;
    if(s[i] != s[s.length()-i-1])
        return false;
    else
        return str_palindrome(i+1,s);

}

int main()
{
    string s;
    getline(cin,s);

    cout<<str_palindrome(0,s)<<endl;
}