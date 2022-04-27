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

    priority_queue<int> maxHeap;

    for(int i=0;i<N;i++) 
    {
        maxHeap.push(v[i]);
        if(maxHeap.size() > K) 
            maxHeap.pop();
    }

    cout<<maxHeap.top()<<endl;

}