#include<bits/stdc++.h>
using namespace std;

int prece(char c)
{
    if(c == '^')
        return 3;
    else if(c == '*' || c == '/')
        return 2;
    else if(c == '+' || c == '-')
        return 1;
    else  
        return -1;
}

string infixToPostfix(string s)
{
    string result = "";
    stack<char> st;

    for(int i=0;i<s.length();i++)
    {
        // cout<<"Iteration No:"<<i+1<<endl; 
        if((s[i]>='a' && s[i] <='z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
            result += s[i];
        else if(s[i] == '(')
        {
            st.push('(');
        }
        else if(s[i] == ')')
        {
            while(st.top() != '(')
            {
                result += st.top();
                st.pop();
            }
            st.pop();
        }
        else 
        {
            while(!st.empty() && prece(s[i]) <= prece(st.top())) 
            {
                result += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        // cout<<endl;
        // traverse(st);
        // cout<<endl;
    }
    while(!st.empty())
    {
        result += st.top();
        st.pop();
    }
    return result;
}// Your code here

int main() 
{
    string s;
    getline(cin,s);
    reverse(s.begin(),s.end());
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == '(')
        {
            s[i] = ')';
        }
        else if(s[i] == ')')
        {
            s[i] = '(';
        }
    }

    string postfix = infixToPostfix(s);

    reverse(postfix.begin(),postfix.end());

    cout<<postfix<<endl ;
}