#include<bits/stdc++.h> 
using namespace std;

typedef pair<int,int> pi;

int main() 
{
    int N,K;
    cin>>N>>K;

    vector<int> v(N);

    for(int i=0;i<N;i++) 
    {
        cin>>v[i];
    }

    map<int,int> freq;

    for(int i=0;i<N;i++) 
    {
        freq[v[i]]++;
    }

    // for(auto i:freq) 
    // {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }

    priority_queue<pi,vector<pi>,greater<pi>> minHeap; 

    for(auto i :freq) 
    {
        minHeap.push({i.second,i.first});
        if(minHeap.size() > K) 
            minHeap.pop();
    }

    while(!minHeap.empty())
    {
        cout<<minHeap.top().first<<" "<<minHeap.top().second<<endl;
        minHeap.pop();
    }

}