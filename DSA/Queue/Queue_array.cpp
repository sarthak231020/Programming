// #include<bits/stdc++.h>
// using namespace std;
// #define n 100

// class QUEUE
// {   
//     int q[n];
//     int front = -1;
//     int rear = -1;
//     public:
//     void insert(int data)
//     {
//         if(front ==-1 && rear == -1)
//         {
//             front = 0;
//             rear = 0; 
//             q[rear] = data;
//         }
//         else if(rear == n)
//         {
//             cout<<"Queue is already full"<<endl;
//             return;
//         }
//         else
//         {
//             rear += 1;
//             q[rear] = data;
//         }
//     }
//     void deletion()
//     {
//         if((front == -1 && rear ==-1) || (front > rear))
//             cout<<"Queue is already empty"<<endl;
//         else 
//         {
//             cout<<"Deleted Item is:"<<q[front]<<endl;
//             front++;
//         }
//     }
//     void peek()
//     {
//         if((front == -1 && rear == -1) || front > rear)
//             cout<<"Queue is already empty"<<endl;
//         else 
//             cout<<front<<" "<<q[front]<<endl;
//     }
//     bool empty()
//     {
//         if(front == -1  && rear == -1 || front > rear)
//         {
//             return true;
//         }
//         else 
//         {
//             return false;
//         }
//     }

//     void traverse()
//     {
//         if(empty())
//             cout<<"Queue is already empty"<<endl;
//         else
//         {
//             for(int i=front;i<=rear;i++)
//             {
//                 cout<<q[i]<<endl;
//             }
//         }
//     }
// };

// int main() 
// {
//     QUEUE Q;
//     Q.insert(1);
//     Q.insert(2);
//     Q.insert(3);
//     Q.traverse();
//     Q.deletion();
//     Q.peek();
//     if(Q.empty())
//         cout<<"Queue is empty"<<endl;
//     else
//         cout<<"Queue is not empty"<<endl;
//     Q.deletion();
//     Q.insert(4);
//     Q.traverse();

// }

//There implementation

#include<bits/stdc++.h> 
using namespace std; 
#define max 100
class Queue
{
    public:
    int front,rear,q[max],n=100;
    Queue()
    {
        front = -1;
        rear = -1;
    }
    bool empty()
    {
        if((front == -1) || (front > rear))
            return true;
        return false;
    }

    void push(int val) 
    {
        if(rear == n)
        {
            cout<<"Queue is already Full"<<endl;
            return;
        }
        if(empty())
        {
            front=0;
            rear = 0;
            q[rear] = val;
        }
        else
        {
            rear++;
            q[rear] = val;
        }
    }

    int Front()
    {
        if(empty())
        {
            cout<<"Queue is already empty"<<endl;
            return -1;
        }
        return q[front];
    }

    void pop() 
    {
        if(empty())
        {
            cout<<"Queue is already empty"<<endl;
            return;
        }
        // int *p = &q[front];
        front++;
        // delete p;
    }
};


int main() 
{
    Queue Q;
    for(int i=1;i<=5;i++)
    {
        Q.push(i);
    }

    cout<<Q.Front()<<" ";
    Q.pop();
    cout<<Q.Front()<<" ";
    Q.pop();
    cout<<Q.Front()<<" "; 
    Q.pop();
}