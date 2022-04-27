#include<bits/stdc++.h>
using namespace std; 

void solve(vector<int> v,int N) 
{   // Effiecient Approach.
    unordered_set<int> s;
    for(int i=0;i<N;i++) 
    {
        s.insert(v[i]);
    }

    int count = 0;
    int maxi = INT_MIN;
    for(int i=0;i<N;i++) 
    {
        if(s.find(v[i]-1) == s.end())
        {
            count = 0;
            int val = v[i];
            while(s.find(val) != s.end()) 
            {
                count++;
                val++;
            }
            maxi = max(maxi,count);
        }
    }

    cout<<"Longest Consecutive Sequence : "<<maxi<<endl;

}

int main() 
{
    int N; 
    cin>>N;

    vector<int> v(N);

    for(int i=0;i<N;i++) 
    {
        cin>>v[i];
    }

    solve(v,N);

}