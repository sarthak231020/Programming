#include<bits/stdc++.h> 
using namespace std;

class Stack
{
    queue<int> q1;
    queue<int> q2;
    public:
    void push(int val)
    {
        q2.push(val);
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.swap(q2);
    }
    int pop()
    {
        if(q1.empty())
            return -1;
        else
        {
            int val = q1.front();
            q1.pop();
            return val;
        }
    }
    bool empty() 
    {
        return q1.empty();
    }
};

int main() 
{
    Stack st;
    st.push(1); 
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout<<st.pop()<<endl;
    while(!st.empty())
    {
        cout<<st.pop()<<" ";
    }

}