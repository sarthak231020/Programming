// http://codeforces.com/problemset/problem/339/A

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() 
{
    string s;
    getline(cin,s);

    string s1;

    for(int i=0;i<s.length();i=i+2)
    {
        s1.push_back(s[i]);
    }
    sort(s1.begin(),s1.end());

    s.clear();
    int i;
    for(i=0;i<s1.length()-1;i++)
    {
        s.push_back(s1[i]);
        s.push_back('+');
    }
    s.push_back(s1[i]);

    cout<<s<<endl;
}