#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int N,K;
    cin>>N>>K;

    vector<int> v(N); 

    for(int i=0;i<N;i++) 
    {
        cin>>v[i];
    }

    deque<int> q(K);

    for(int i=0;i<N;i++) 
    {
        while(!q.empty() && q.front() == i-K)  //Remove Elements which are not in window.
            q.pop_front();
        while(!q.empty() && v[q.back()] <= v[i]) 
            q.pop_back();
        q.push_back(i);
        if(i>=K-1)
            cout<<v[q.front()]<<" ";
    }

}