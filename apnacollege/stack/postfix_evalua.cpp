#include<bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    getline(cin,s);
    stack<int> st;
    cout<<s<<endl;

    for(int i=0;i<s.length();i++)
    {

        // if(st.empty())
        //     cout<<"STACK IS EMPTY"<<endl; 
        if(s[i] != '*' && s[i] != '+' && s[i] != '-' && s[i] != '/' && s[i] != '^')
        {
            st.push(int(s[i])-int('0'));
        }
        else
        {
            int top2 = st.top();
            // cout<<top2<<endl;
            st.pop();
            int top1 = st.top();
            // cout<<top1<<endl;
            st.pop();
            if(s[i] == '*')
                st.push(top1 * top2);
            else if(s[i] == '+')
                st.push(top1 + top2);
            else if(s[i] == '-')
                st.push(top1 - top2);
            else if(s[i] == '/')
                st.push(top1 / top2);
            else
                st.push(pow(top1,top2));
            
        }
    }

    cout<<st.top()<<endl;
} 