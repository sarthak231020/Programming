#include<bits/stdc++.h>
using namespace std;

int main() 
{
    string inp1,inp2;
    getline(cin,inp1);
    getline(cin,inp2);

    vector<int> v(26,0);

    for(int i=0;i<inp1.length();i++) 
    {
        v[inp1[i]-'a'] = 1;
    }

    for(int i=0;i<inp2.length();i++) 
    {
        if(v[inp2[i]-'a'] == 1 || v[inp2[i] - 'a'] == -1) 
            v[inp2[i]-'a'] = -1;
        else 
            v[inp2[i]-'a'] = 2;
    }

    cout<<"Unmatched Char"<<endl;
    for(int i=0;i<v.size();i++) 
    {
        if(v[i] == 1 || v[i] == 2) 
            cout<<char(i+'a');
    }
    cout<<endl;
    cout<<"Matched Characters"<<endl;

    for(int i=0;i<v.size();i++) 
    {
        if(v[i] == -1) 
            cout<<char(i+'a');
    }

}