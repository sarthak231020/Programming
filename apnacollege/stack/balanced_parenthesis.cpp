#include<bits/stdc++.h>
using namespace std;

bool balanced_paranthesis(string s)
{   
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            st.push(s[i]);
        else if(s[i]==')' && st.top() == '(')
            st.pop();
        else if(s[i] == '}' && st.top() == '{')
            st.pop();
        else if(s[i] == ']' && st.top() == '[')
            st.pop();
    }
    if(st.empty())
        return true;
    return false;
}

int main() 
{
    string s;
    getline(cin,s);
    cout<<balanced_paranthesis(s)<<endl;
}