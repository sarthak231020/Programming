// https://www.codechef.com/CCSTART2/problems/DIFACTRS
#include<iostream>
#include<set>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int N;
    int count = 0;
    cin>>N;
    set<int> s;
    
    for(int i=1;i<=sqrt(N);i++)
    {
        if(N%i == 0)
        {
            
            s.insert(i);
            s.insert(N/i);
            if(N/i != i)
            {
                count+=2;
            }
            else
            {
                count++;
            }
        }
    }

    cout<<count<<endl;
    for(auto i:s)
    {
        cout<<i<<" ";
    }
    
}