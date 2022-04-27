#include<iostream>
#include<queue>
using namespace std; 

int main()
{
    int N,K;
    cin>>N>>K;
    priority_queue <int,vector<int>,greater<int>> pq;
    int ele;
    for(int i=0;i<N;i++)
    {
        cin>>ele;
        pq.push(ele);
    }
    int temp;
    for(int i=0;i<K;i++)
    {
        temp = pq.top();
        pq.pop();
        pq.push(-1*temp);
    }

    int sum = 0;
    for(int i=0;i<N;i++)
    {
        sum += pq.top();
        // cout<<pq.top()<<"\t";
        pq.pop();
    }
    cout<<sum<<endl;
}