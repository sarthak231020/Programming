#include<bits/stdc++.h>
using namespace std;

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
    getline(cin,s);

    cout<<solveOptimized(s)<<endl;
}