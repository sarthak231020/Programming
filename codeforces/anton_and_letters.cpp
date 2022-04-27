#include<iostream>
#include<string>
#include<set>
using namespace std;

int main() 
{
    string s;
    getline(cin,s);
    cout<<s<<endl;
    // cout<<s.length()<<endl;
    // cout<<s[1]<<endl;
    set<char> s1;

    for(int i=1;i<s.length()-1;i=i+1)
    {
        if(s[i] != ',' && s[i] != ' ')
            s1.insert(s[i]);
    }
    
    cout<<s1.size()<<endl;
}