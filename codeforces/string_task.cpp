// http://codeforces.com/problemset/problem/118/A

#include<iostream>
#include<algorithm>
// #include<
using namespace std;

bool is_vowel(char c)
{
    if((c=='a') || (c=='e') || (c=='i') || (c=='o') || (c=='u') || (c=='y'))
        return true;
    else
        return false;
}

int main() 
{
    string s;
    getline(cin,s);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    string s1;
    for(int i=0;i<s.length();i++)
    {
        if(!(is_vowel(s[i])))
        {
            s1.push_back('.');
            s1.push_back(s[i]);
        }
    }
    cout<<s1<<endl;
}