#include<iostream>
#include<queue>
// Priority queues are a type of container adapters, specifically designed such that the first element of the queue is the greatest of all elements in the queue and elements are in non increasing order(hence we can see that each element of the queue has a priority{fixed order}).

using namespace std;

void traverse(priority_queue<int> p_q)
{
    while(!p_q.empty())
    {
        cout<<"\t"<<p_q.top();
        p_q.pop();
    }
    cout<<endl;
}

int main()
{
    priority_queue<int> p_q1;
    p_q1.push(10);
    p_q1.push(20);
    p_q1.push(30);
    p_q1.push(40);
    p_q1.push(1);
    p_q1.push(2);

    traverse(p_q1);

    cout<<"The size:"<<p_q1.size()<<endl;
    cout<<"The top element(with highest priority):"<<p_q1.top()<<endl;
    cout<<"After popping an element the highest prioritized will get deleted:"<<endl;
    p_q1.pop();
    traverse(p_q1);
    //emplace also can be used for insertion purpose......
    p_q1.emplace(5);

    cout<<"Top:"<<p_q1.top()<<endl;
    traverse(p_q1);
    return 0;
    //swap is same as previous 
}