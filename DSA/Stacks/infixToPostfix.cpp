#include<bits/stdc++.h>
using namespace std; 

int prec(char c) 
{
    if(c == '^') 
        return 3;
    else if(c == '/' || c=='*') 
        return 2;
    else if(c == '+' || c=='-') 
        return 1;
    return -1;
}

string infixToPostfix(string inp) 
{
    stack<char> st; 
    string result = "";
    for(int i=0;i<inp.length();i++) 
    {
        if((inp[i]>='A' && inp[i] <= 'Z') || (inp[i] >='a' && inp[i]<='z') || (inp[i] >= '0' && inp[i] <= '9'))
        {
            result.push_back(inp[i]);
        }
        else if(inp[i] == '(')
        {
            st.push(inp[i]);
        }
        else if(inp[i] == ')') 
        {
            while(st.top() != '(')
            {
                result.push_back(st.top());
                st.pop();
            }
            st.pop();
        }
        else
        {
            while((!st.empty()) && (prec(inp[i]) <= prec(st.top())))
            {
                result.push_back(st.top());
                st.pop();
            }
            st.push(inp[i]); //finally push that operator.
        }
    }
    while(!st.empty()) 
    {
        result += st.top();
        st.pop(); 
    }
    return result;
}

int main() 
{
    string inp;
    cin>>inp;

    cout<<infixToPostfix(inp)<<endl;
}