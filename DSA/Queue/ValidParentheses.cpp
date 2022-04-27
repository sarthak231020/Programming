#include<bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    cin>>s;

    stack<char> st; 

    for(int i=0;i<s.length();i++) 
    {
        if(s[i] == '(')
            st.push(s[i]);
        else if(s[i] == ')')
            st.pop();
    }
    if(st.empty()) 
        cout<<"Parenthesis are valid"<<endl;
    else 
        cout<<"Parenthesis are not valid"<<endl;
    
}