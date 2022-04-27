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

Node *solve(Node *head,int K) 
{

    Node *ans = NULL;
    int i=0;
    while(head) 
    {
        if(i%K == 0)
        {
            if(ans == NULL) 
                ans = head;
            else 
                ans = ans->next;
        }
        i++;
        head = head->next;
    }
    return ans;
}

// void traverse(Node *head) 
// {   
//     Node *temp = head;
//     while(temp) 
//     {
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<endl;

// }

int main() 
{
    Node *head = NULL;
    for(int i=1;i<=6;i++) 
    {
        insert(&head,i,i);
    }
    traverse(head);

    cout<<solve(head,3)->data<<endl;


}