#include<bits/stdc++.h> 
using namespace std; 

struct StackList
{
    int data;
    struct StackList *next;
};
typedef struct StackList Node;
Node *Top = NULL;

void push(int data) 
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = Top;
    Top = newNode;
}

int pop() 
{
    if(Top == NULL) 
    {
        cout<<"Stack Underflow"<<endl;
        return INT_MIN;
    }
    int data = Top->data;
    Top = Top->next;
    return data;
}

bool isEmpty() 
{
    return Top==NULL;
}

int topElement() 
{
    if(Top == NULL) 
    {
        cout<<"Stack Underflow"<<endl;
        return INT_MIN;
    }
    return Top->data;
}

void traverse() 
{
    Node *temp = Top;
    while(temp) 
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}




int main() 
{
    for(int i=1;i<=5;i++) 
    {
        push(i);
    }   
    traverse();
    while(!isEmpty()) 
    {
        cout<<topElement()<<endl;
        pop();
        // cout<<pop()<<endl;
    }
    // pop();
}