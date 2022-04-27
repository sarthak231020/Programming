#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string s;
        getline(cin,s);
        if(binary_search(s.begin(),s.end(),'1') && binary_search(s.begin(),s.end(),'2') && binary_search(s.begin(),s.end(),'3'))
        {
            minimum = INT_MAX;
            int i=0;k=i+3;
        }
        else
        {
            cout<<0<<endl;
            continue;
        }
    }
}