#include<bits/stdc++.h> 
using namespace std;

int findKthSmallest(vector<int> v,int K) 
{   
    priority_queue<int> maxHeap;
    for(int i=0;i<v.size();i++) 
    {
        maxHeap.push(v[i]);
        if(maxHeap.size() > K)
        {
            maxHeap.pop();
        }
    }
    return maxHeap.top(); //return Kth smallest element.
}

int main() 
{
    int N,K1,K2;
    cin>>N>>K1>>K2;

    vector<int> v(N);

    for(int i=0;i<N;i++) 
    {
        cin>>v[i];
    }
    //Assuming that k1 is smaller than k2.

    int k1Smallest = findKthSmallest(v,K1);
    int k2Smallest = findKthSmallest(v,K2);

    cout<<k1Smallest<<endl;
    cout<<k2Smallest<<endl;

    int ans = 0;
    for(int i=0;i<N;i++) 
    {
        if(v[i] > k1Smallest && v[i] < k2Smallest) 
        {
            ans += v[i];
        }
    }

    cout<<ans<<endl;
}