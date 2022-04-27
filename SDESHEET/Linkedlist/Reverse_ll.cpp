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

    void reverse(Node* &head)
    {
        Node *curr=head,*nxt=NULL,*prev = NULL;
        while(curr)
        {
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        head = prev;
    }

    Node* recursiveReverse(Node* &head)
    {
        if(head == NULL || head->next == NULL)
        {
            return head;
        }

        Node *ans = recursiveReverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return ans;
    }

    void reverseUsingStack(Node* &head)
    {
        Node *temp = head;
        stack<Node *> st;

        while(temp->next != NULL)
        {
            st.push(temp);
            temp = temp->next;
        }
        head = temp;

        while(!st.empty())
        {
            temp->next = st.top();
            st.pop();
            temp = temp->next;
        }

        temp->next = NULL;
    }
};



int main() 
{
    Node* head = NULL;
    List L;
    for(int i=1;i<=5;i++)
    {
        L.insertAttail(head,i*10);
    }
    L.traverse(head);

    cout<<"Reversing..."<<endl; 
    L.reverse(head);
    L.traverse(head);

    head = L.recursiveReverse(head);
    L.traverse(head);

    L.reverseUsingStack(head);
    L.traverse(head);

}
