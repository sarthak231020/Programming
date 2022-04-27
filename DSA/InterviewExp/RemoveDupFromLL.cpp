#include<bits/stdc++.h> 
using namespace std; 

class Node 
{
    public:
    int data;
    Node *next;
    Node () 
    {

    }
   
    Node(int val) 
    { 
        data = val;
        next = NULL;
    }
};

void insertBegin(Node* &head,int data)
{
    Node *newNode = new Node(data);
    
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

void traverse(Node *head) 
{
    Node *temp = head;
    while(temp) 
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void RemoveDup(Node *head) 
{
    Node *temp = head;
    if(head == NULL) 
        return;
    while(temp->next != NULL) 
    {
        if(temp->data == temp->next->data)
        {
            Node *next_next = temp->next->next;
            free(temp->next); 
            temp->next = next_next;
        }
        else 
        {
            temp = temp->next;
        }
    }
}

int main()
{
    Node *head = NULL;

    insertBegin(head, 20);
    insertBegin(head, 13);
    insertBegin(head, 13);
    insertBegin(head, 11);
    insertBegin(head, 11);
    insertBegin(head, 11);

    RemoveDup(head);
    traverse(head);
}