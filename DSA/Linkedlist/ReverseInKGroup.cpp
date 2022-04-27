#include<bits/stdc++.h>
using namespace std;


class Node 
{
    public:
    int data;
    Node *next;

    Node() 
    {

    }

    Node(int val) 
    {
        data = val;
        next = NULL;
    }
};

void insertAtBegin(Node* &head,int val) 
{
    if(head == NULL) //if list is empty.
    {
        Node *newnode = new Node(val);
        head = newnode;
    }
    else 
    {
        Node *newnode = new Node(val);
        newnode->next = head;
        head = newnode;
    }
}

void traverse(Node* head) 
{
    if(head == NULL) 
    {
        return;
    }
    Node *temp = head;
    while(temp) 
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int length(Node *head)
{
    Node *temp = head;
    int count = 0;

    while(temp) 
    {
        temp = temp->next;
        count++;
    }
    return count;
}

Node *solve(Node *head,int K) 
{
    int lenLL = length(head);
    int len = lenLL;
    if(K > len) 
        return head;
    
    Node *curr = head;
    Node *nex = head->next;
    Node *newHead = new Node();
    Node *prev = new Node();
    newHead->next = curr;
    prev->next = curr;
    while(len >= K) 
    {
        int temp = K-1;
        while(temp) 
        {
            curr->next = nex->next;
            nex->next = prev->next;
            prev->next = nex;
            nex = curr->next;
            temp--;
        }
        if(len == lenLL) 
        {
            newHead = prev->next;
        }
        len -= K;
        prev = curr;
        curr = curr->next;
        nex = curr->next;
    }
    return newHead;
}

int main() 
{
    int K;
    cin>>K;

    Node *head = NULL;
    for(int i=8;i>=1;i--)
    {
        insertAtBegin(head,i);
    }

    traverse(head);
    cout<<endl;
    head = solve(head,K);


    traverse(head);
}