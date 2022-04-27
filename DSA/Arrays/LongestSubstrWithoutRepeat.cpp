#include<bits/stdc++.h>
using namespace std; 

int solve(string str) 
{
    set<char>  st;
    int left = 0,right=0;
    int maxi = INT_MIN;
    while(left < str.length() && right<str.length())
    {
        if(st.find(str[right]) != st.end())
        {
            while(str[left] != str[right]) 
            { 
                st.erase(str[left]);
                left++;
            }
            left++;
            st.erase(str[right]);
        }
        st.insert(str[right]);
        maxi = max(maxi,right-left+1);
        right++;
    }
    return maxi;
}

int solveOptimized(string s) 
{
    map<char,int> mp;
    int maxi = INT_MIN;
    int N = s.length();
    int left = 0,right = 0;
    while(left < N && right < N) 
    {
        if(mp.find(s[right]) != mp.end())
        {
            left = max(mp[s[right]]+1,left);
        }
        mp[s[right]] = right;
        maxi = max(maxi,right-left+1);
        right++; 
    }
    
    return maxi;
}

int main() 
{
    string s;
    cin>>s;

    cout<<solve(s)<<endl;

    cout<<solveOptimized(s)<<endl;
}