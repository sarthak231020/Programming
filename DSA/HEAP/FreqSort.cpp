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
    }

    vector<int> ans(N);
    int j = N-1;
    while(!minHeap.empty())
    {
        int i=minHeap.top().first;
        while(i>0) 
        {
            ans[j] = minHeap.top().second;
            j--;
            i--;
        }
        minHeap.pop();
    }

    for(auto i:ans) 
    {
        cout<<i<<" ";
    }
}