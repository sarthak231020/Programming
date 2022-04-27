#include<bits/stdc++.h> 
using namespace std; 

struct Node
{
    public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val; 
        next = NULL;
    }
};

class List
{
    public:

    void insertAttail(Node* &head,int val)
    { 
        Node *newnode = new Node(val);
        if(head  == NULL)
        {
            head = newnode;
            return;
        }
        Node *temp = head; 
        while(temp->next != NULL) 
        {
            temp = temp->next;
        }
        temp->next = newnode; 
    }

    void traverse(Node* head)
    {
        Node *temp = head;
        while(temp) 
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    int Count(Node *head)
    {
        Node *temp = head;
        int c = 0;
        while(temp)
        {
            temp = temp->next;
            c++;
        }
        return c;
    }

    int findMiddleBrut(int node_num,Node* head) //Where node_num is the number of nodes in the linked list
    {   
        if(head == NULL)
        {
            return -1;
        }
        int mid = (node_num)/2;
        int c = 0;
        Node *temp = head;
        while(c < mid)
        {
            temp = temp->next;
            c++;
        }
        return temp->data;
    }

    void findMiddleOpt(Node* head)
    {
        if(head != NULL)
        {
            Node *slow = head;
            Node *fast = head;
            while(fast != NULL && fast->next != NULL)
            {
                fast = fast->next->next;
                slow = slow->next; 
            }
            cout<<slow->data<<endl;
        }
    }

    void findMiddleCountOdd(Node* head)
    {
        Node *mid = head;
        int count = 0;
        while(head != NULL)
        {
            if(count%2 == 1)
                mid = mid->next;
            count++;
            head = head->next;
        }
        if(mid != NULL)
        {
            cout<<mid->data<<endl;
        }
    }
};



int main() 
{
    Node* head = NULL;
    List L;
    for(int i=1;i<=2;i++)
    {
        L.insertAttail(head,i*10);
    }
    L.traverse(head);
    cout<<L.Count(head)<<endl;
    cout<<L.findMiddleBrut(L.Count(head),head)<<endl;

    L.findMiddleOpt(head);

    L.findMiddleCountOdd(head);
}