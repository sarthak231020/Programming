// #include<iostream>
// using namespace std;

// class node
// {
//     public: 
//     int data;
//     node *next;
//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// void insertAtTail(node* &head,int val)
// {
//     // If you pass Node *head instead of Node* &head, and if "head" is changed, the change will not be available in the main function.
//     // If you want these changes to be available, either you return head or pass Node* &head or Node **head.
//     // In getDepth() there is no need to change the "head" pointer. So passing Node *head works fine.
    
//     node *n = new node(val);

//     if(head == NULL)
//     {
//         head = n;
//         return;
//     }

//     node *temp = head;

//     while(temp->next != NULL)
//     {
//         temp = temp->next; 
//     }
//     temp->next = n;
// }


// void insertAtHead(node* &head,int val)
// {
//     node* n = new node(val);
//     if(head == NULL)
//     {
//         head = n;
//     }
//     else
//     {
//         n->next = head;
//         head = n;
//     }
// }

// void deleteAtHead(node* &head)
// {
//     if(head == NULL) 
//     {
//         cout<<"Linked List is already empty!"<<endl;
//         return;
//     }
//     node* todelete = head;
//     head = head->next;

//     delete todelete;
// }

// void deletion(node* &head,int val)
// {
//     if(head == NULL)
//     {
//         cout<<"Linked List is already empty"<<endl;
//         return;
//     }
//     if(head->next == NULL)
//     {
//         deleteAtHead(head);
//         return;
//     }

//     node* temp = head;
//     while(temp->next->data != val)
//     {
//         temp = temp->next;
//     }

//     node* todelete = temp->next;
//     temp->next = temp->next->next;
//     delete todelete; 
// }

// void traverse(node* head)
// {
//     node *temp = head;
//     while(temp)
//     {
//         cout<<temp->data<<"->";
//         temp = temp->next;
//     }
//     cout<<"NULL"<<endl;
// }

// //Iterative
// void reverse(node* &head)
// {
//     node *prev = NULL;
//     node *curr = head;
//     node *next1;
//     while(curr != NULL)
//     {
//         next1 = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next1;
//     }
//     head = prev;
// }

// //Recursive way of reverse a linked list
// node* recursive_reverse(node* &head)
// {
//     if(head == NULL || head->next == NULL)
//     {
//         return head;
//     }   

//     node* newhead = recursive_reverse(head->next); 
//     head->next->next = head;
//     head->next = NULL;

//     return newhead;
// }

// int main()
// {
//     node* head = NULL; 
//     insertAtTail(head,1);
//     insertAtTail(head,2);
//     insertAtTail(head,3);
//     traverse(head);
//     insertAtHead(head,4);
//     insertAtHead(head,5); 
//     traverse(head);

//     deleteAtHead(head);
//     traverse(head);
//     deletion(head,3);
//     traverse(head);

//     // reverse(head);
//     // traverse(head);

//     node* newhead = recursive_reverse(head); 
//     traverse(newhead);
// }


#include<bits/stdc++.h>
using namespace std;

class Node
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

class LinkedList
{
    public:
    void InsertIfEmpty(Node* &head,Node* newnode)
    {
        head = newnode;
        return;
    }
    void InsertAtTail(Node* &head,int data)
    {
        Node *newnode = new Node(data);
        if(head == NULL)
        {
            InsertIfEmpty(head,newnode);
            return;
        }
        Node *temp = head;
        while(temp->next !=NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    void InsertAtHead(Node* &head,int data)
    {
        Node *newnode = new Node(data);
        if(head == NULL)
        {
            InsertIfEmpty(head,newnode);
            return;
        }
        newnode->next = head;
        head = newnode;
    }
    void InsertAtMiddle(Node* &head,int data,int pos)
    {
        Node *newnode = new Node(data);
        int count = 0;
        Node *temp = head;
        while(count<pos-1)
        {
            count++;
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }

    void DeleteAtHead(Node* &head)
    {
        if(head == NULL)
        {
            cout<<"Linked List Underflow"<<endl;
            return;
        }
        Node *todelete = head;
        head = head->next;
        delete todelete;
    }

    void DeleteAtTail(Node* &head)
    {
        if(head == NULL)
        {
            cout<<"Linked List Underflow"<<endl;
            return;
        }
        if(head->next == NULL)
        {
            Node *todelete = head;
            head = head->next;
            delete todelete;
            return;
        }
        Node *temp = head;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        Node *todelete = temp->next;
        temp->next = NULL;
        delete todelete;
    }
    void Delete(Node* &head,int pos,int N)
    {
        if(head == NULL) 
        {
            cout<<"Linked List Underflow"<<endl;
            return;
        }
        if(pos == 0)
        {
            DeleteAtHead(head);
            return;
        }
        if(pos == N-1)
        {
            DeleteAtTail(head);
            return;
        }
        if(N == 1)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            return;
        }
        if(pos > N-1)
        {
            cout<<"Invalid Pos"<<endl;
            return;
        }
        int c = 0;
        Node *temp=head,*pred = NULL;
        while(c < pos)
        {
            pred = temp;
            temp = temp->next;
            c++;
        }
        Node *todelete;
        todelete = pred->next;
        pred->next = temp->next;
        delete todelete;
    }
    void Traverse(Node *head)
    {
        Node *temp = head;
        while(temp)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
    int Count(Node *head)
    {
        int c=0;
        Node *temp = head;
        while(temp)
        {
            temp = temp->next;
            c++;
        }
        return c;
    }

    void reverse(Node* &head)
    {
        Node *curr=head,*prev = NULL,*next = NULL;
        while(curr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }

    Node *recursiveReverse(Node* &head)
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
};

int main() 
{   
    Node* head = NULL;
    LinkedList obj;
    while(true)
    {
        cout<<"1.Insert Tail 2.Insert begin 3.Insert at pos 4.Delete Tail 5.Delete begin 6.Delete end 7.Traverse 8.count 9.Reverse 10.Reverse By using Recursion 11.Exit"<<endl;
        int choice;
        cin>>choice;
        if(choice == 1)
        {   
            int data;
            cin>>data;
            obj.InsertAtTail(head,data);
        }
        else if(choice == 2)
        {  
            int data;
            cin>>data;
            obj.InsertAtHead(head,data);
        }
        else if(choice == 3)
        {
            int data,pos;
            cin>>data>>pos;
            obj.InsertAtMiddle(head,data,pos);
        }
        else if(choice == 4)
        {
            obj.DeleteAtTail(head);
        }
        else if(choice == 5)
        {
            obj.DeleteAtHead(head);
        }
        else if(choice == 6)
        {   
            int pos,c;
            cin>>pos;
            c = obj.Count(head);
            obj.Delete(head,pos,c);
        }
        else if(choice == 7)
        {
            obj.Traverse(head);
            cout<<endl;
        }
        else if(choice == 8)
        {
            cout<<obj.Count(head)<<endl;
        }
        else if(choice == 9)
        {
            obj.reverse(head);
        }
        else if(choice == 10)
        {
            head = obj.recursiveReverse(head);
            obj.Traverse(head);
            cout<<endl;
        }
        else
        {
            break;
        }
    }
}