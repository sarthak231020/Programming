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
    
    priority_queue<int,vector<int>,greater<int>> minHeap;

    for(int i=0;i<N;i++) 
    {
        minHeap.push(v[i]);
        if(minHeap.size() > K) 
            minHeap.pop();
    }

    while(!minHeap.empty())
    {
        cout<<minHeap.top()<<" ";
        minHeap.pop();
        /* code */
    }

    
    
}