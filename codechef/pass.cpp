#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,A,B;
        string s;
        cin>>N>>A>>B>>s;
        
        long long int total_min = 0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == '0') 
            {
                total_min += A;
            }
            else 
            {
                total_min += B;
            }
        }
        cout<<total_min<<endl;
    }
}