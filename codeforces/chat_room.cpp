// http://codeforces.com/problemset/problem/58/A
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    string s1;
    getline(cin,s1);
    string s2 = "hello";
    int count = 0; 

    for(int i=0;i<s1.length();i++) 
    {
        if(s2[count] == s1[i])
            count++;
    }
    if(count == 5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

