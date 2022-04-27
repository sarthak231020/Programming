#include<bits/stdc++.h>
using namespace std; 

struct SinglyLL
{
    int data;
    struct SinglyLL *next;
};

typedef struct SinglyLL Node;

Node *headEven=NULL,*headOdd=NULL;


void insert(Node **head,int data,int pos)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    if(head == NULL || pos == 1) 
    {
        newNode->next = *head;
        *head = newNode;
        return;
    }
    Node *curr = NULL,*temp=*head;
    int K=1;
    while(K!=pos && temp!= NULL)
    {
        K++;
        curr = temp;
        temp = temp->next;
    }
    curr->next = newNode;
    newNode->next = temp;
}

void traverse(Node *head)
{
    Node *temp = head;
    while(temp) 
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node *findModK(Node *head,int K) 
{
    int i=1;
    Node *modularNode;
    while(head) 
    {  
        if(i%K == 0) 
        {
            modularNode = head;
        }
        i++;
        head = head->next;
    }
    return modularNode;
}


int main() 
{
    Node *head = NULL;
    for(int i=1;i<=19;i++) 
    {
        insert(&head,i,i);
    }

    cout<<findModK(head,3)->data<<endl;



}