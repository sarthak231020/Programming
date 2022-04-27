#include<bits/stdc++.h> 
using namespace std; 

bool solve(string s1,string s2) 
{
    if(s1.length() != s2.length()) 
    {
        return false;
    }
    if(s1.compare(s2) == 0) 
    {
        return true;
    }

    int n=s1.length();
    bool flag = false; 
    for(int i=1;i<=n-1;i++) 
    {
                                    //Not swapped case(before ||)
        if((solve(s1.substr(0,i),s2.substr(0,i)) && solve(s1.substr(i,n-i),s2.substr(i,n-i)))
            ||(solve(s1.substr(0,i),s2.substr(n-i,i)) && solve(s1.substr(n-i,i),s2.substr(0,i))))
                                    //Swapped case(after ||)
        {
            flag = true;
            break;
        }
    }
    return flag;


}

int main() 
{
    string s1,s2;
    cin>>s1;
    cin>>s2;

    cout<<solve(s1,s2)<<endl;
}