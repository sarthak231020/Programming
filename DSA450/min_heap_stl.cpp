#include<bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue<int> pq;

    for(int i=1;i<5;i++)
    {
        pq.push(i*10);
    }

    while(pq.empty() == false) 
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    
}