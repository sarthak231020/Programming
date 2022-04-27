#include<bits/stdc++.h>
using namespace std;

int main() 
{
    map<char,int> mp = ({'I':1});

    for(auto i:mp) 
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
}