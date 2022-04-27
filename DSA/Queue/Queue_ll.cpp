// #include<bits/stdc++.h>
// using namespace std;

// class node
// {
//     public:
//     int data;
//     node *next;
//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };
// class Queue
// {
//     node *front,*rear;

//     public:
//         Queue() 
//         {
//             front = NULL;
//             rear = NULL;
//         }
//         void push(int ele)
//         {
//             node *n = new node(ele);
//             if(front == NULL)
//             {
//                 front = n;
//                 rear = n;
//                 return;
//             }
//             rear->next = n;
//             rear = n;
//         }
//         void pop() 
//         {
//             if(front == NULL)
//             {
//                 cout<<"Queue Underflow"<<endl;
//                 return;
//             }
//             node *temp;
//             temp = front;
//             cout<<"Deleted Item is:"<<temp->data<<endl;
//             front = front->next;
//             free(temp); 
//         }
//         bool empty()
//         {
//             if(front == NULL)
//                 return true;
//             return false;
//         }
//         int peek() 
//         {
//             if(front == NULL) 
//             {
//                 return -1;
//             }
//             else 
//             {
//                 return front->data;
//             }
//         }
//         void traverse()
//         {
//             node *temp = front;
//             while(temp != rear) 
//             {
//                 cout<<temp->data<<" ";
//                 temp = temp->next;
//             }
//             cout<<temp->data<<endl;
//         }
// };

// int main()
// {
//     Queue Q;
//     // cout<<"1"<<endl;
//     Q.push(1); 
//     Q.push(2);
//     Q.push(3);
//     // cout<<"1"<<endl; 
//     Q.traverse();
//     // cout<<"1"<<endl; 
//     Q.pop();
//     // cout<<"1"<<endl;
//     // (Q.peek() == -1)?cout<<"Queue is already empty"<<endl:cout<<Q.peek()<<endl;
//     cout<<Q.empty()<<endl;
//     Q.pop();
//     Q.traverse();
//     Q.pop();
//     cout<<Q.empty()<<endl;
// }


#include<bits/stdc++.h>
using namespace std;

class QueueNode
{
    public:
    int data;
    QueueNode *next;
    QueueNode(int val)
    {
        data = val;
        next = NULL;
    }
};

class Queue
{
    QueueNode *front,*rear;
    public:
    Queue() 
    {
        front = NULL;
        rear = NULL;
    }
    bool empty() 
    {
        if(front == NULL)
        {
            return true;
        }
        return false;
    }
    void push(int val)
    {
        QueueNode *newnode = new QueueNode(val);
        if(newnode == NULL)
        {
            cout<<"Memory Error"<<endl;
            return;
        }
        if(empty())
        {
            front = newnode;
            rear = newnode;
        }
        else
        {
            rear->next = newnode;
            rear = newnode;
        }
    }

    void pop() 
    {
        if(empty())
        {
            cout<<"Queue is already empty";
            return;
        }
        QueueNode *temp = front;
        front = front->next;
        delete temp;
    
    }

    int Front() 
    {
        if(empty())
        {
            cout<<"Queue is already empty"<<endl;
            return -1;
        }
        return front->data;
    }

};

int main() 
{
    Queue q;
    for(int i=1;i<=5;i++)
    {
        q.push(i);
    }
    while(!q.empty())
    {
        cout<<q.Front()<<" ";
        q.pop();
    }
    cout<<endl;
    q.pop();
    cout<<endl;
    q.Front();

}