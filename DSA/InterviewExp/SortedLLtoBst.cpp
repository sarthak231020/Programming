#include<bits/stdc++.h>
using namespace std;

class LL 
{
    public:
    int data;
    LL *next;

    LL(int val) 
    {
        data = val;
        next = NULL;
    }
};
class LinkedList
{
    public:
    void insertAtBegin(LL* &head,int data) 
    {
        LL *newNode = new LL(data);
        if(head == NULL) 
        {
            head = newNode;
        }
        else 
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void traverse(LL *head)
    {
        LL *temp = head;
        while(temp) 
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }

    void Convert(LL* &head) 
    {
        
    }
};




int main() 
{   
    LL *head = NULL;
    LinkedList obj;
    obj.insertAtBegin(head,10);
    obj.insertAtBegin(head,20);
    obj.insertAtBegin(head,30);

    obj.traverse(head);



    return 0;
}