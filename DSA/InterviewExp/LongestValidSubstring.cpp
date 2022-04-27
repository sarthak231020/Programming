#include<bits/stdc++.h>
using namespace std; 

int LongestValidSubstr(string s)
{
    stack<int> st;
    st.push(-1);
    int result = 0;
    for(int i=0;i<s.length();i++) 
    {
        if(s[i] == '(')
        {
            st.push(i);
        }
        else
        {
            if(!st.empty())
                st.pop();
            if(st.empty()) 
                st.push(i); 
            else 
            {
                result = max(i-st.top(),result);
            }
        }
    }
    return result;
}

int main() 
{
    string s;
    cin>>s;

    cout<<LongestValidSubstr(s)<<endl;
}