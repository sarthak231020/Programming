#include<bits/stdc++.h>
using namespace std;

struct LinkedList
{
    int data;
    struct LinkedList *next;
};
typedef struct LinkedList Node;

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


int main() 
{
    Node *head1 = NULL;
    Node *head2 = NULL;

    insert(&head1,2,1);
    insert(&head1,4,2);
    insert(&head1,3,3);

    insert(&head2,5,1); 
    insert(&head2,6,2);
    insert(&head2,4,3);

    traverse(head1);

    traverse(head2);

    Node *head3 = NULL;
    int count = 1;
    int carry = 0;
    while(head1!=NULL && head2!=NULL)
    {
        cout<<"LL1"<<endl;
        if(head1->data + head2->data + carry >= 10) 
        {
            cout<<"LL2"<<endl;
            int val = (head1->data+head2->data+carry)%10;
            carry = 1;
            insert(&head3,val,count);
        }
        else 
        {   
            cout<<"LL3"<<endl;
            insert(&head3,head1->data + head2->data + carry,count);
            carry = 0;
        }
        count++;
        head1 = head1->next;
        head2 = head2->next;
    }

    while(head1 != NULL) 
    {
        if(carry == 1)
        {
            insert(&head3,head1->data+carry,count);
            count = 0;
        }
        else 
        {
            insert(&head3,head1->data+carry,count);
        }
        count++; 
        head1 = head1->next;
    }
    while(head2 != NULL) 
    {
        if(carry == 1)
        {
            insert(&head3,head2->data+carry,count);
            count = 0;
        }
        else 
        {
            insert(&head3,head2->data+carry,count);
        }
        count++; 
        head2 = head1->next;
    }

    
    traverse(head3);
}