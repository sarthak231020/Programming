#include<bits/stdc++.h> 
using namespace std; 

class node
{
    public:
    int data; 
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Stack
{
    node *Top;
    public: 
    Stack() 
    {
        Top = NULL;
    }
    void push(int val) 
    {
        node *n = new node(val);
        if(Top == NULL)
        {
            Top = n;
            return;
        }
        n->next = Top;
        Top = n;
    }
    bool empty()
    {
        if(Top == NULL)
            return true;
        return false;
    }
    void pop()
    {
        if(Top == NULL)
        {
            cout<<"Stack Underflow"<<endl;
            return;
        }
        node *todelete = Top;
        Top = Top->next;
        free(todelete);
    }
    int top()
    {
        if(empty())
            return -1;
        return Top->data;
    }

};

int main() 
{
    Stack st; 
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}