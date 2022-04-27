#include<bits/stdc++.h>
using namespace std;

int main() 
{
    string s; 
    getline(cin,s);

    int K;
    cin>>K;

    map<char,int> mp;

    int i=0,j=0;
    int res = 0;
    while(j < s.length()) 
    {
        mp[s[j]]++;
        if(mp.size() == K)
        {
            res = max(res,j-i+1);
        }
        else 
        {
            while(mp.size() > K) 
            {
                mp[s[i]]--;
                if(mp[s[i]] == 0) 
                    mp.erase(s[i]);
                i++;
            }
        }
        j++;
    }

    cout<<res<<endl;
}