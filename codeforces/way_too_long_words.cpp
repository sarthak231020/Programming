// http://codeforces.com/problemset/problem/71/A

#include<iostream>
#include<string>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    n++;
    while(n)
    {
        string s;
        getline(cin,s);
        if(s.length() > 10)
        {
            cout<<s[0]<<to_string(s.length()-2)<<s[s.length()-1]<<endl;
        }
        else
        {
            cout<<s<<endl;
        }
        // cout<<n<<endl;
        n--;
    }
}