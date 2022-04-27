#include<iostream>
using namespace std;

void subsequence(string s,string ans)
{
    if(s.length() == 0)
    {
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    string ros = s.substr(1); 

    subsequence(ros,ans);
    subsequence(ros,ans+ch);
}

int main() 
{
    string s;
    getline(cin,s);
    cout<<s<<endl;
    subsequence(s,"");
}