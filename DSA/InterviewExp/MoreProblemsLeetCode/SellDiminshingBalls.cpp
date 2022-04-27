#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int N,Orders;
    cin>>N>>Orders;

    vector<int> v(N);
    for(int i=0;i<N;i++) 
    {
        cin>>v[i];
    }

    priority_queue<int> maxHeap;

    for(int i=0;i<N;i++) 
    {
        maxHeap.push(v[i]);
    }

    int ans = 0;
    while(Orders > 0) 
    {
        ans += maxHeap.top();
        int val = maxHeap.top();
        maxHeap.pop();
        val--;
        maxHeap.push(val);
        Orders--;
    }

    cout<<ans<<endl;
    
}