#include<bits/stdc++.h>
using namespace std;

// STACK
//there is no iterator concept in the stack and queues
//we have to do it own our own

// int main()
// {
//     stack<int> st; //LIFO 
//     //pop
//     //push & emplace 
//     //size
//     //top
//     //empty 

//     st.push(10);
//     st.push(5);
//     st.push(20);
//     st.push(30);

//     cout<<st.top()<<endl; //30 
//     st.pop();
//     cout<<st.top()<<endl;
//     st.pop();
//     cout<<st.top()<<endl;

//     bool flag = st.empty(); //true if empty

//     //
//     while(!st.empty())
//     {
//         cout<<st.top()<<endl;
//         st.pop();
//     }

//     cout<<st.size()<<endl; // 0 
    
//     // cout<<st.top<<endl; //Throw an error  

//     // always use it as 

//     if(!st.empty())
//     {
//         cout<<st.top()<<endl;
//     }
// }

//QUEUE FIFO
//push
//pop
//size
//empty
//front
//back


int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(10);
    q.push(5);
    //push
    //front
    //pop
    //size 
    //empty

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl; 

}

//Priority Queue
//1.Syntax for max heap
// priority_queue<int> pq;

//2.syntax for min heap 
// priority_queue<int, vector<int> ,greater<int> > 


int main()
{
    priority_queue<int> pq;
    pq.push(1);
    pq.push(5);
    pq.push(2);
    pq.push(6);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;

    while(!pq.empty())
    {
        pq.pop();
        cout<<pq.top()<<" ";
    }
    cout<<endl;

    //for min heap
    pq.push(-1);
    pq.push(-5);
    pq.push(-2);
    pq.push(-6);

    while(!pq.empty())
    {
        cout<<-1 * pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;


    priority_queue<int, vector<int> , greater<int> > pq_min;

    pq_min.push(1);
    pq_min.push(10);
    pq_min.push(5);
    pq_min.push(2);

    while(!pq_min.empty())
    {
        cout<<pq_min.top()<<" ";
        pq_min.pop();
    }
    cout<<endl;

    //we can also implement min heap //priority queue in which min ele have highest priority

}

//DEQUEUE 

// dequeue<int> dq;
//push_front()
//push_back()
//pop_front()
//pop_back()
//begin(),end(),rbegin(),rend()
//size()
//clear() 
//empty()
//at()

// list<int> ls; uses doubly linked list
//push_front()
//push_back()
//pop_front()
//pop_back()
//begin(),end(),rbegin(),rend()
//size()
//clear()
//empty()

// It has remove O(1) operation



