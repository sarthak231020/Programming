#include<iostream>
#include<queue>
#include<algorithm> 
using namespace std;

int main()
{
    int T,N;
    cin>>T;
    while(T--)
    {
        cin>>N;
        int ele;
        priority_queue <int,vector<int>,greater<int> > pq;
        for(int i=0;i<N;i++)
        {
            cin>>ele;
            pq.push(ele);
        }

        int min1,min2,total = 0;
        while(pq.size() != 1)
        {
            min1 = pq.top();
            pq.pop();
            min2 = pq.top();
            pq.pop();
            total += min1+min2;
            pq.push(min1+min2);
        }
        
        cout<<total<<endl;
    }
}