#include<bits/stdc++.h>
using namespace std;

priority_queue<int> maxHeap;
priority_queue<int,vector<int>,greater<int>> minHeap;

void add(int data)
{
    if(!minHeap.empty() && data > minHeap.top())
        minHeap.push(data);
    else 
        maxHeap.push(data);
    if(maxHeap.size() > minHeap.size()+1) 
    {
        int val = maxHeap.top();
        maxHeap.pop();
        minHeap.push(val);
    }
    else if(minHeap.size() > maxHeap.size()+1) 
    {
        int val = minHeap.top(); 
        minHeap.pop();
        maxHeap.push(val);
    }
}

int getMedian() 
{
    if(minHeap.empty() && maxHeap.empty()) 
        return 1; 
    if(maxHeap.size() == minHeap.size())
    {
        return (maxHeap.top()+minHeap.top())/2;
    }
    else 
    {
        if(maxHeap.size() > minHeap.size()) 
            return maxHeap.top();
        return minHeap.top();
    }
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

    for(int i=0;i<N;i++) 
    {
        add(v[i]);
        cout<<getMedian()<<" ";
    }
    cout<<endl;
}