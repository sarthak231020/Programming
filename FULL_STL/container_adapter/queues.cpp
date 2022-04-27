#include<iostream>
#include<queue>

using namespace std;

// Queues are a type of container adaptors which operate in a first in first out (FIFO) type of arrangement. Elements are inserted at the back (end) and are deleted from the front.


void traverse(queue<int> q1)
{
    while(!q1.empty())
    {
        cout<<"\t"<<q1.front();
        q1.pop();
    }
    cout<<endl;
}

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout<<"The queue will be:"<<endl;
    traverse(q);

    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);
    cout<<"The size of the queue:"<<q.size()<<endl;
    cout<<"The first via front():"<<q.front()<<endl;
    cout<<"The last element via back():"<<q.back()<<endl;

    traverse(q);
       //10      20      30      5       10      15      20

    // why?
    //Because the elements which has been are from traverse q1 queue,not from our mains "q" queue.......
    return 0;
}