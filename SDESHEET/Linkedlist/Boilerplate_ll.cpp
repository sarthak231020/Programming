#include<bits/stdc++.h> 
using namespace std; 

struct Node
{
    public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val; 
        next = NULL;
    }
};

class List
{
    public:

    void insertAttail(Node* &head,int val)
    { 
        Node *newnode = new Node(val);
        if(head  == NULL)
        {
            head = newnode;
            return;
        }
        Node *temp = head; 
        while(temp->next != NULL) 
        {
            temp = temp->next;
        }
        temp->next = newnode; 
    }

    void traverse(Node* head)
    {
        Node *temp = head;
        while(temp) 
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};



int main() 
{
    Node* head = NULL;
    List L;
    for(int i=1;i<=5;i++)
    {
        L.insertAttail(head,i*10);
    }
    L.traverse(head);
}