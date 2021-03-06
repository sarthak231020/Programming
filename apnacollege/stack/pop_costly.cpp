#include<bits/stdc++.h>
using namespace std;

class Stack
{
    int N;
    queue<int> q1;
    queue<int> q2;

    public:
    Stack()
    {
        N = 0;
    }
    void push(int val)
    {
        q1.push(val); 
        N++;
    }
    void pop()
    {
        if(q1.empty())
        {
            return;
        }
        while(q1.size() > 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        q1.swap(q2);
        N--;
    }

    int size() 
    {
        return N;
    }
    int top()
    {
        if(q1.empty())
        {
            return -1;
        }
        return q1.back();
    }
    bool empty()
    {
        if(q1.empty())
            return true;
        return false;
    }
};

int main() 
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3); 
    cout<<st.top()<<endl;
    st.pop();
    st.push(4);
    st.push(5);
    while(!st.empty()) 
    {
        cout<<st.top()<<" ";
        st.pop();
    }   

} 