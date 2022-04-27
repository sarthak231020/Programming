#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/count-binary-substrings/discuss/108625/JavaC%2B%2BPython-Easy-and-Concise-with-Explanation
int main() 
{
    string s;
    cin>>s;
    int cur = 1,pre = 0,res = 0;

    for(int i=1;i<s.length();i++) 
    {
        if(s[i-1] == s[i]) 
            cur++;
        else 
        {
            res += min(cur,pre);
            pre = cur;
            cur = 1;
        }
    }
    res += min(pre,cur);
    cout<<res<<endl;
}
