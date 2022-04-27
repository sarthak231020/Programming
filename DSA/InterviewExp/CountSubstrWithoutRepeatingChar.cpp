#include<bits/stdc++.h>
using namespace std;

int main() 
{
    string s; 
    getline(cin,s);

    vector<int> countChar(26,0);
    int N = s.length();
    int ans = 0;
    int i = 0,j=0;
    while(i < N)
    {
        if(j < N && countChar[s[j]-'a'] == 0) 
        {
            countChar[s[j]-'a']++;
            ans += (j-i+1);
            j++;
        }
        else 
        {
            countChar[s[i]-'a']--;
            i++;
        }
    }
    cout<<ans<<endl;
}