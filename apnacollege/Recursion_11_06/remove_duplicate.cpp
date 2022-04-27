//It only removes duplicates on sorted string.
#include<iostream> 
#include<string>
using namespace std;

string removeDup(string s)
{
    if(s.length() == 0)
    {
        return "";
    }
    char ch=s[0];
    string ans = removeDup(s.substr(1));
    if(ch == ans[0])
    {
        return ans;
    }
    return ch+ans;
}

int main() 
{
    string s1;
    getline(cin,s1);
    cout<<s1<<endl;
    cout<<removeDup(s1)<<endl;
    // cout<<removeDup("aaaabbsss")<<endl;
}