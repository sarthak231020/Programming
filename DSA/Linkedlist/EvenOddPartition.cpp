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

void seperateEvenOdd(Node **head)
{
    Node *temp = *head;
    Node *temp1 = headEven,*temp2=headOdd;
    while(temp) 
    {
        Node *newNode = (Node *)malloc(sizeof(Node));
        newNode->data = temp->data;
        newNode->next = NULL;
        if(newNode->data%2 == 0) 
        {
            if(headEven == NULL)
            {
                newNode->next = headEven;
                headEven = newNode;
                temp1 = headEven;
            }
            else 
            {
                temp1->next = newNode;
                temp1 = newNode;
            }   
        }
        else 
        {   
            if(headOdd == NULL)
            {
                newNode->next = headOdd;
                headOdd = newNode;
                temp2 = headOdd;
            }
            else 
            {
                temp2->next = newNode;
                temp2 = newNode;
            }   
        }

        temp = temp->next;
    }
    temp1->next = headOdd;
    *head = headEven;
}   




int main() 
{
    Node *head = NULL;
    for(int i=1;i<=5;i++) 
    {
        insert(&head,i,i);
    }
    // insert(&head,100,2);
    // insert(&head,500,6);
    // insert(&head,1000,8); //For testing
    traverse(head);
    seperateEvenOdd(&head);

    traverse(headEven);
    traverse(headOdd);
    traverse(head);

}