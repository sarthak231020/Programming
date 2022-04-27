#include<bits/stdc++.h>
using namespace std;

int solveBrut(vector<int> v,int N) 
{
    int res = 0;
    for(int i=0;i<N;i++) 
    {
        int mini = v[i];
        for(int j=i;j<N;j++) 
        {
            mini = min(mini,v[j]);
            res += mini;
        }
    }
    return res;
}

int solveOpt(vector<int> v,int N)
{
    vector<int> pse(N),nse(N);
    stack<int> s;
    for(int i=0;i<N;i++) 
    {
        while(!s.empty() && v[s.top()] > v[i]) 
        {
            s.pop();
        }

        if(s.empty()) 
            pse[i] = -1;
        else 
            pse[i] = s.top();
        s.push(i);
    }   
    stack<int> s2;
    for(int i=N-1;i>=0;i--) 
    {
        while(!s2.empty() && v[s2.top()] > v[i]) 
        {
            s2.pop();
        }

        if(s2.empty()) 
            nse[i] = N;
        else 
            nse[i] = s2.top();
        s2.push(i);
    }   
    int ans = 0;
    for(int i=0;i<N;i++) 
    {
        ans += (v[i]*(i-pse[i])*(nse[i]-i));
    }

    return ans;
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

    cout<<solveBrut(v,N)<<endl;

    cout<<solveOpt(v,N)<<endl;
}