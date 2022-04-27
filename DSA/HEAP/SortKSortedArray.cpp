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

    vector<int> ans;
    priority_queue<int,vector<int>,greater<int>> minHeap;

    for(int i=0;i<N;i++) 
    {
        minHeap.push(v[i]);
        if(minHeap.size() > K) 
        {
            ans.push_back(minHeap.top());
            minHeap.pop();
        }
    }

    while(!minHeap.empty())
    {
        ans.push_back(minHeap.top());
        minHeap.pop(); 
    }

    for(auto i:ans) 
    {
        cout<<i<<" ";
    }

}