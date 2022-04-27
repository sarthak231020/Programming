#include<bits/stdc++.h>
using namespace std;

int vowels(string s)
{
    int count=0; 
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i] =='u')
            count++;
    }
    return count;
}
int main() 
{
    string s;
    getline(cin,s);
    cout<<vowels(&s[0]);
}