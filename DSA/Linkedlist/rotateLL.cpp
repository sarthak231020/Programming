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

void solve(Node* &head,int K) 
{   //Brut O(N*K).
    while(K--)
    {
        Node *temp = head;
        Node *pre;
        while(temp->next) 
        {
            pre = temp; 
            temp = temp->next;
        }
        pre->next = NULL;
        temp->next = head;
        head = temp;
    }

}



// void solveOpt(Node* &head,int K) 
// {   

//     Node *fast = head,*slow = head;
//     while(K) 
//     {
//         fast = fast->next;
//         K--;
//     }
//     while(fast->next != NULL) 
//     {
//         slow = slow->next;
//         fast = fast->next;
//     }
//     slow->next = NULL;
//     Node *newHead = slow->next;

//     fast->next = head;
//     head = newHead;
// }

void solveOptimized(Node* &head,int K) 
{   //O(N).
    Node *temp = head;
    int count = 1;
    while(temp->next) 
    {
        temp = temp->next;
        count++;
    }
    temp->next = head;
    K = K%count;
    int N = count-K-1;

    Node *temp1 = head;
    while(N--) 
    {
        temp1 = temp1->next;
    }

    head = temp1->next;
    temp1->next = NULL; 
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
//  solve(head,K);


    // traverse(head);

    solveOptimized(head,K);

    traverse(head);
}