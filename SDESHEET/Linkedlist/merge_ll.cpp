// merge -> There are two sorted linked list we have to make a linked list out of these two linked lists which is sorted
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

    void merge(Node *head1,Node *head2,Node* &head3) 
    {

        Node *curr1 = head1,*curr2 = head2;
        while(curr1 && curr2)
        {
            if(curr1->data <= curr2->data)
            {   
                insertAttail(head3,curr1->data);
                // cout<<head3->data<<" "<<curr1->data<<" "<<curr2->data<<endl;
                curr1 = curr1->next;
            }
            else 
            {
                insertAttail(head3,curr2->data);
                // cout<<head3->data<<" "<<curr1->data<<" "<<curr2->data<<endl;
                curr2 = curr2->next;
            }
        }
        while(curr1) 
        {
            insertAttail(head3,curr1->data);
            // cout<<head3->data<<" "<<curr1->data<<endl;
            curr1 = curr1->next;
        }
        while(curr2)
        {
            insertAttail(head3,curr2->data);
            // cout<<head3->data<<" "<<curr2->data<<endl;
            curr2 = curr2->next;
        }
    }
    Node *mergeRec(Node *A,Node *B) 
    {
        if(A == NULL) return B;
        if(B == NULL) return A;

        if(A->data <= B->data) 
        {
            A->next = mergeRec(A->next,B);
            return A; 
        }
        else
        {
            B->next = mergeRec(A,B->next);
            return B;
        }
    }

    // void mergeWithoutExtra(Node *head1,Node *head2)
    // {
    //     Node *curr1 = head1,*curr2 = head2;
    //     while(curr1 && curr2) 
    //     {
    //         if(curr1->data <= curr2->data)
    //         {
    //             if(curr1->next != NULL)
    //             {
    //                 if(curr1->next->data >= curr2->data)
    //                 {
    //                     Node *temp = curr1->next;
    //                     curr1->next = curr2;
    //                     head2 = curr2->next;
    //                     curr2->next = temp;
    //                     curr1 = temp;

    //                 }
    //                 else
    //                 {
    //                     curr1 = curr1->next;
    //                 }   
    //             }
    //         }
    //         else
    //         {
    //             if(curr2->next != NULL) 
    //             {
    //                 if(curr2->next->data >= curr1->data)
    //                 {
    //                     Node *temp = curr2->next;
    //                     head1 = head1->next;
    //                     curr2->next = curr1;
    //                     curr1->next = temp;
    //                     curr2 = temp;
    //                 }
    //                 else 
    //                 {
    //                     curr2 = curr2->next;
    //                 }
    //             }
    //         }
    //     }

        
    
};



int main() 
{
    Node *head1=NULL,*head2=NULL,*head3=NULL,*head4 = NULL;
    List L;
    L.insertAttail(head1,1);
    L.insertAttail(head1,3);
    L.insertAttail(head1,5);
    L.insertAttail(head2,2);
    L.insertAttail(head2,4);
    L.insertAttail(head2,6);
    L.traverse(head1);
    L.traverse(head2);
    L.merge(head1,head2,head3);
    L.traverse(head3);

    head4 = L.mergeRec(head1,head2);
    L.traverse(head4);

}