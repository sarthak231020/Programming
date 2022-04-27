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

    vector<int> MaxK,MinK;
    for(int i=0;i<N;i++) 
    {
        while(!q.empty() && q.front() == i-K)  //Remove Elements which are not in window.
            q.pop_front();
        while(!q.empty() && v[q.back()] <= v[i]) 
            q.pop_back();
        q.push_back(i);
        if(i>=K-1)
            MaxK.push_back(v[q.front()]);
    }   

    for(int i=0;i<N;i++) 
    {
        while(!q.empty() && q.front() == i-K)  //Remove Elements which are not in window.
            q.pop_front();
        while(!q.empty() && v[q.back()] >= v[i]) 
            q.pop_back();
        q.push_back(i);
        if(i>=K-1)
            MinK.push_back(v[q.front()]);
    }

    int maxi = INT_MIN;
    for(int i=0;i<MaxK.size();i++) 
    {
        maxi = max(maxi,MaxK[i]-MinK[i]);
    }

    cout<<"Maximum of Max-Min Of Size K"<<maxi<<endl;

    

}