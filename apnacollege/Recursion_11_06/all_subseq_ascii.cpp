#include<iostream>
using namespace std;

void all_sub_ascii(string s,string ans)
{ 
    if(s.length() == 0)
    {
        cout<<ans<<endl; 
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);

    all_sub_ascii(ros,ans);
    all_sub_ascii(ros,ans+ch); 
    all_sub_ascii(ros,ans+to_string(int(ch)));
}

int main() 
{
    string s;
    getline(cin,s); 
    all_sub_ascii(s,"");
}