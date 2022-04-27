#include<bits/stdc++.h>
using namespace std; 
#define maxi 100

int arr[maxi];
int front = 0,back = 0;
void push(int data) 
{
    if(back >=  maxi) 
    {
        cout<<"Queue overflow"<<endl;
        return;
    }

    arr[back] = data;
    back++;

}

int pop() 
{
    if(front > back) 
    {
        cout<<"Queue is empty"<<endl;
        return -1;
    }
    int data = arr[front];
    front++;
    return data;
}

bool isEmpty() 
{
    if(front >= back) 
        return true;
    return false;
}

int top() 
{
    if(isEmpty()) 
        return -1; 
    else 
        return arr[front];
}



int main() 
{
    for(int i=1;i<=10;i++) 
    {   
        push(i);
    }

    // for(int i=front;i<=back;i++) 
    // {
    //     cout<<arr[i]<<" ";
    // }

    while(!isEmpty()) 
    {
        cout<<top()<<" ";
        pop();
    }

}