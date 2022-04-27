// #include<bits/stdc++.h>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//      Node *next;
//      Node *bottom;

//     Node(int val) 
//     {
//         int data = val;
//         next = NULL;
//         bottom = NULL;
//     }
// };

// Node *mergeLL(Node *l1,Node *l2) 
// {
//     if(l1 == NULL) 
//         return l2;
//     if(l2 == NULL) 
//         return l1;
    
//     Node *l = NULL,*temp = NULL;
//     while(l1!=NULL && l2!= NULL) 
//     {
//         if(l1->data <= l2->data)
//         {
//             if(l == NULL) 
//             {
//                 l = l1;
//                 temp = l1;
//                 l1 = l1->bottom;
//             }
//             temp->bottom = l1;
//             temp = l1; 
//             l1 = l1->bottom;
//         }
//         else 
//         {
//             if(l==NULL) 
//             {
//                 l = l2;
//                 temp = l2;
//                 l2 = l2->bottom;
//             }
//             temp->bottom = l2;
//             temp = l2;
//             l2 = l2->bottom; 
//         }
//     }
//     if(l1 != NULL) 
//     {
//         temp->bottom = l1;   
//     }
//     else
//     {
//         temp->bottom = l2; 
//     }
//     return l;
// }

// Node *flatten(Node* head) 
// {
//     if(head->next == NULL) 
//         return head;

//     head->next = flatten(head->next);
//     head = mergeLL(head,head->next);
 
//     return head;
// }

// void traverse(Node *head)
// {
//     Node *temp = head; 
//     while(temp)
//     {
//         cout<<temp->data<<" ";
//         temp = temp->bottom;
//     }
//     cout<<endl;
// }




// int main() 
// {
//     Node *newNode = (Node *)malloc(sizeof(Node));
//     newNode->data = 5;
//     Node *head = newNode;
//     head->bottom = new Node(7);
//     head->bottom->bottom = new Node(8);
//     head->bottom-> bottom->bottom = new Node(30);
//     head->bottom-> bottom->bottom->bottom = NULL;

//     traverse(head);

//     head->next = new Node(10); 
//     head->next->bottom = new Node(20); 
//     head->next->bottom->bottom = NULL; 
    
//     traverse(head);

//     head->next->next = new Node(19);
//     head->next->next->bottom = new Node(22);
//     head->next->next->bottom->bottom = new Node(50);
//     head->next->next->bottom->bottom->bottom = NULL; 
    
//     traverse(head);

//     head->next->next->next = new Node(28);
//     head->next->next->next->bottom = new Node(35);
//     head->next->next->next->bottom->bottom = new Node(40);
//     head->next->next->next->bottom->bottom->bottom = new Node(45);
//     head->next->next->next->bottom->bottom->bottom->bottom = NULL;
    
//     traverse(head);
        
//     head->next->next->next->next = NULL;
    

//     head = flatten(head);
    
//     traverse(head);

//     return 0;
// }

//Above Is wrong one.

Node* mergeTwoLists(Node* a, Node* b) {
    
    Node *temp = new Node(0);
    Node *res = temp; 
    
    while(a != NULL && b != NULL) {
        if(a->data < b->data) {
            temp->bottom = a; 
            temp = temp->bottom; 
            a = a->bottom; 
        }
        else {
            temp->bottom = b;
            temp = temp->bottom; 
            b = b->bottom; 
        }
    }
    
    if(a) temp->bottom = a; 
    else temp->bottom = b; 
    
    return res -> bottom; 
    
}
Node *flatten(Node *root)
{
   
        if (root == NULL || root->next == NULL) 
            return root; 
  
        // recur for list on right 
        root->next = flatten(root->next); 
  
        // now merge 
        root = mergeTwoLists(root, root->next); 
  
        // return the root 
        // it will be in turn merged with its left 
        return root; 
}
