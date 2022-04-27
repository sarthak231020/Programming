#include<bits/stdc++.h>
using namespace std;

int solve(string s) 
{   
    if(s.length()%2 == 1)
        return -1; //Not possible is string length is odd
    stack<char> st;

    for(int i=0;i<s.length();i++)
    {
        if(s[i] == '{')
            st.push(s[i]);
        else   // s[i] == '}'
        {
            if(!st.empty() && st.top() == '{') 
                st.pop();
            else 
                st.push('}');
        }
        //finally stack will contain the '}}}...{{{' on this format.
    }

    int reducedLen = st.size();
    int countOpen = 0;
    while(!st.empty() && st.top() == '{')
    { 
        st.pop();
        countOpen++;
    }
    int countClose = reducedLen-countOpen;

    return ceil(countClose/2)+ceil(countOpen/2); //Finally the number of reversal for making it balanced.
}

int main() 
{
    string s; 
    cin>>s; 

    cout<<solve(s)<<endl;
}