#include<iostream>
using namespace std; 
string keypad_str[10] = {" ","./","abc","def","ghi","jkl","mnop","qrs","tuv","wxyz"};
void keypad(string s,string ans)
{
    if(s.length() == 0)
    {
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    string code = keypad_str[ch-'0'];
    string ros = s.substr(1);

    for(int i=0;i<code.length();i++)
    {
        keypad(ros,ans+code[i]);
    }
}

int main() 
{
    string s1; //Enter two numbers without any spaces
    getline(cin,s1);
    keypad(s1,"");
}