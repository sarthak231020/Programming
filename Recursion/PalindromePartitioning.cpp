#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s,int start,int end) //the reverse is equal to actual str
    {
        while(start <= end) 
        {
            if(s[start++] != s[end--]) 
                return false; //violating palindrome rule.
        }
        return true;
    }
    void solve(int index,string s,vector<string> &path,vector<vector<string>> &ans)
    {
        if(index == s.length()) 
        {
            ans.push_back(path); //finally if all partitions are palindrome so capture them in answer.
            return;
        }
        
        for(int i=index;i<s.length();i++) 
        {
            if(isPalindrome(s,index,i)) //it is palindrome 
            {
                path.push_back(s.substr(index,i-index+1)); //since till i str is palindrome so include it.
                solve(i+1,s,path,ans);
                path.pop_back(); //backtrack remove the string that we inserted.
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> path;
        solve(0,s,path,ans);
        return ans;
    }
};