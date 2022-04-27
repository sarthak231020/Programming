#include<bits/stdc++.h> 
using namespace std;

typedef pair<int,pair<int,int>> ppi;
typedef pair<int,int>  pi;

int main() 
{
    int N,K;
    cin>>N>>K;

    vector<pi> v(N);

    for(int i=0;i<N;i++) 
    {
        cin>>v[i].first>>v[i].second;
    }

    priority_queue<ppi> maxHeap;

    for(int i=0;i<N;i++) 
    {
        maxHeap.push({pow(v[i].first,2)+pow(v[i].second,2),{v[i].first,v[i].second}});
        if(maxHeap.size() > K) 
        {
            maxHeap.pop();
        }
    }

    while(!maxHeap.empty()) 
    {
        cout<<maxHeap.top().second.first<<" "<<maxHeap.top().second.second<<endl;
        maxHeap.pop();
    }


    
}   