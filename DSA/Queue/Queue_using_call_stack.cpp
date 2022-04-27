#include<bits/stdc++.h> 
using namespace std;

class Queue
{
    stack<int> st;
    public:
    void push(int val) 
    {
        st.push(val);
    }
    int pop() 
    {
        if(st.empty())
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int x = st.top();
        st.pop();
        if(st.empty())
        {
            return x;
        }
        int item = pop(); //Recursive calling pop 
        st.push(x);
        return item;
    }
    bool empty()
    {
        if(st.empty())
        {
            return true;
        }
        return false;
    }
};

int main() 
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.pop()<<" ";
    cout<<q.pop()<<" ";
    cout<<q.pop()<<" ";

}