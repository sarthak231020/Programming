#include<bits/stdc++.h> 
using namespace std;

int main() 
{
    string s = "apple";
    vector<int> count(26,0);
    for(int i=0;i<s.length();i++) 
    {
        count[s[i]-'a']++;
    }
    
    string t;
    for(int i=0;i<26;i++) 
    {
        t += string(count[i],i+'a');
        cout<<t<<endl;
    }
    cout<<t<<endl;
}