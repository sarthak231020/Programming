#include<bits/stdc++.h>
using namespace std; 

class node
{
    public:
    int data;
    class node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertattail(node* &head,int val) 
{   
    node *n = new node(val);

    if(head == NULL)
    {
        head = n;
        return;
    }
    node *temp;
    temp = head;
    while(temp->next != NULL) 
    {
        temp = temp->next;
    }
    temp->next = n;
}



void reverse(node* &head)
{
    node *prev=NULL,*nxt=NULL,*curr=head;
    while(curr)
    {
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    head = prev;
}

int count(node *head)
{
    node *temp;
    temp = head;

    int c = 0;
    while(temp)
    {
        temp = temp->next;
        c++;
    }
    return c;
}


void traverse(node *head)
{
    node *temp;
    temp = head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int findmiddle(node *head,int ind)
{
    ind--;
    node *temp = head;
    int c = 0;
    while(c<ind)
    {
        temp = temp->next;
        c++;
    }
    return temp->data;
}

int main() 
{   
    node *head = NULL;

    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);

    traverse(head);
    cout<<endl;
    reverse(head);
    traverse(head);
    cout<<endl;

    int c = count(head);
    cout<<findmiddle(head,c/2);

}