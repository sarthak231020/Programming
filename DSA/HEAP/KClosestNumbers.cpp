#include<bits/stdc++.h> 
using namespace std;

typedef pair<int,int> pi;

int main() 
{
    int N,K,X;
    cin>>N>>K>>X;

    vector<int> v(N);

    for(int i=0;i<N;i++) 
    {
        cin>>v[i];
    }

    priority_queue<pi> maxHeap;

    for(int i=0;i<N;i++) 
    {
        maxHeap.push({abs(X-v[i]),v[i]});
        if(maxHeap.size() > K)
            maxHeap.pop();   
    }

    while(!maxHeap.empty())
    {
        cout<<maxHeap.top().second<<" ";
        maxHeap.pop();
    }
    
    
}