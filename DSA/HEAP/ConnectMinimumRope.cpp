#include<bits/stdc++.h> 
using namespace std;

int main() 
{
    int N; 
    cin>>N;

    priority_queue<int,vector<int>,greater<int>> minHeap;

    for(int i=0;i<N;i++) 
    {   
        int ele;
        cin>>ele;
        minHeap.push(ele);
    }   

    int cost = 0;
    while(minHeap.size() > 1) 
    {
        int x = minHeap.top();
        minHeap.pop();
        int y = minHeap.top(); 
        cout<<x<<" "<<y<<endl;
        minHeap.pop();
        cost += (x+y);
        minHeap.push(x+y);
    }

    cout<<minHeap.top()<<endl; 
    cout<<cost<<endl;
}