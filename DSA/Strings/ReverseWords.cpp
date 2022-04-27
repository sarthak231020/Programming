#include<bits/stdc++.h>
using namespace std;

void reverseBrut(string s) 
{
    vector<string> v;
    string str = "";
    for(int i=0;i<s.length();i++) 
    {
        if(s[i] == ' ')
        {
            str += " ";
            v.push_back(str);
            str = "";
        } 
        else 
        {
            str += s[i];
        }
    }
    str += " ";
    v.push_back(str);
    for(int i=v.size()-1;i>=0;i--) 
    {
        cout<<v[i];
    }
}

void SolveSt(string s) 
{
    stack<string> st;
    string str = "";
    for(int i=0;i<s.length();i++) 
    {
        if(s[i] == ' ')
        {
            st.push(str);
            str = "";
        }
        else 
        {
            str += s[i];
        }
    }
    st.push(str);
    while(st.size() > 1) 
    {
        cout<<st.top()<<" ";
        st.pop();
    }   
    cout<<st.top();
}

void SolveOpt(string s) 
{
    string str = "";
    string ans = "";
    for(int i=0;i<s.length();i++) 
    {
        if(s[i] == ' ') 
        {
            if(ans = "") 
                ans = str;
            else
               ans = str+" "+ans;
            str = "";
        }
        else 
        {
            str += s[i];
        }
    }
    if(str != "") 
    {
        if(ans = "") 
                ans = str;
        else
            ans = str+" "+ans;   
    }

    cout<<ans<<endl;
}

int main()
{
    string s;
    getline(cin,s);

    SolveSt(s);   

    SolveOpt(s);
}