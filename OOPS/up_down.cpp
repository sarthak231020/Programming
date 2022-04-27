#include<bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    getline(cin,s);

    sort(s.begin(),s.end());
    if(s[0] == s[s.size()-1])
    {
        cout<<0<<endl;
        return 0;
    }
    vector<int> v(4,0);

    for(int i=0;i<s.length();i++)
    {
        if(s[i] == 'R') 
            v[0]++;
        else if(s[i] == 'U') 
            v[1]++;
        else if(s[i] == 'D')
            v[2]++;
        else 
            v[3]++;
    }

    int count = (max(v[0],v[3])-min(v[0],v[3]));
    int count1 = (max(v[1],v[2])-min(v[1],v[2]));

    cout<<s.size()-(count+count1)<<endl;

    
}