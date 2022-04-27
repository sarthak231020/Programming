#include<bits/stdc++.h>
using namespace std;

struct Stack
{
    int top;
    int capacity;
    int *arr;
};
typedef struct Stack Node;
Node *S;
void createStack(int size) 
{
    S->top = -1; 
    S->capacity = size;
    S->arr = (int *)malloc(size*sizeof(int));
}

void push(int data) 
{
    if(S->top == S->capacity-1)
    {
        cout<<"Stack Overflow"<<endl;
    }
    else 
    {
        S->top = S->top+1;
        S->arr[S->top] = data; 
    }
}

int pop() 
{
    if(S->top == -1)
        return INT_MIN; 
    int data = S->arr[S->top];
    S->top = S->top-1;
    return data;
}

int top() 
{
    if(S->top == -1)
        return INT_MIN;
    return S->arr[S->top];
}

bool isEmpty() 
{
    if(S->top == -1)
        return true;
    return false;
}

bool isFull() 
{
    if(S->top == S->capacity-1)
        return true;
    return false;
}

void traverse() 
{
    int temp = S->top;
    while(temp != -1) 
    {
        cout<<S->arr[temp]<<" ";
        temp--;
    }
    cout<<endl;
}

int main() 
{
    S = (Node *)malloc(sizeof(Node));
    createStack(10);
    for(int i=1;i<=5;i++) 
    {
        push(i);
    }
    traverse();
    traverse();
    while(!isEmpty()) 
    {
        cout<<S->arr[S->top]<<" ";
        pop();
    }
    if(pop() == INT_MIN)
    {
        cout<<"Stack Underflow"<<endl;
    }
    traverse(); // No elements left
    for(int i=1;i<=10;i++) 
    {
        push(i);
    }
    push(11);
    traverse();
    cout<<isFull()<<endl;
    return 0;
}