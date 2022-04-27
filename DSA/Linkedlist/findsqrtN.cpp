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

Node *sqrtNode(Node *head,int K) 
{
    Node *sqrt=NULL; 
    int i=1,j=1;
    while(head) 
    {
        if(i == j*j) 
        {
            if(sqrt == NULL) 
                sqrt = head;
            else 
                sqrt = sqrt->next;
            j++;
        }
        i++;
        head = head->next;
    }
    return sqrt;
}

int main() 
{
    Node *head = NULL;
    for(int i=1;i<=10;i++) 
    {
        insert(&head,i,i);
    }


    cout<<sqrtNode(head,2)->data<<endl;

}