#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);

    stack<int> st;

    for(int i=s.length()-1;i>=0;i--)
    {
        // cout<<s[i]<<" ";
        if(s[i] != '*' && s[i] != '+' && s[i] != '-' && s[i] != '/' && s[i] != '^')
        {
            st.push(int(s[i])-int('0'));
            // cout<<st.top()<<endl;
        }
        else
        {
            int operand1 = st.top();
            st.pop();
            int operand2 = st.top();
            st.pop();
            if(s[i] == '*')
                st.push(operand1 * operand2);
            else if(s[i] == '/')
                st.push(operand1 / operand2);
            else if(s[i] == '+')
                st.push(operand1 + operand2);
            else if(s[i] == '-')
                st.push(operand1 - operand2);
            else 
                st.push(pow(operand2,operand1));
            // cout<<st.top()<<endl;

        }
    }

    cout<<st.top()<<endl;
}
