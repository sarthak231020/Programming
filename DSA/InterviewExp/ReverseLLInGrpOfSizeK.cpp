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
    if(head == NULL || K==1)
        return head;
    Node *dummy = new Node(0);
    dummy->next = head;

    Node *curr=head,*prev=dummy,*nextptr=dummy;
    int cnt = 0;  
    while(curr) 
    {
        curr = curr->next;
        cnt += 1;
    }
    cout<<cnt<<endl;
    int temp = cnt;
    curr = dummy; 
    while(cnt >= K) 
    {   
        // cout<<head->data<<endl;
        // cout<<prev->data<<endl;
        // cout<<"DUMMY : "<<  dummy->next->data<<endl;
        curr = prev->next;
        nextptr = curr->next;
        
        // cout<<"DUMMY : "<<  dummy->next->data<<endl;
        for(int i=1;i<K;i++) 
        {
            
        cout<<"DUMMY : "<<  dummy->next->data<<endl;
            curr->next = nextptr->next;
            nextptr->next = prev->next;
            prev->next = nextptr;
            nextptr = curr->next;
        }
        
        // cout<<"DUMMY : "<<  dummy->next->data<<endl;
        prev = curr;
        cnt -= K;
    }
    cout<<"Running"<<endl; 
    return dummy->next;
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