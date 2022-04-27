#include<bits/stdc++.h> 
using namespace std;

class Queue
{
    stack<int> st1; 
    stack<int> st2;
    public:
    void push(int val) 
    {
        st1.push(val);
    }
    int pop() 
    {
        if(st1.empty() && st2.empty())
        {
            cout<<"Queue is empty"<<endl;
            exit(0);
        }
        if(st2.empty()) 
        {
            while(!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
        }
        int x = st2.top();
        st2.pop();
        return x;
    }
    bool empty() 
    {
        if(st1.empty() && st2.empty())
        {
            return true; 
        }
        return false;
    }
};

int main() 
{
    Queue Q;
    Q.push(1);
    Q.push(2);
    Q.push(3); 
    cout<<Q.pop()<<endl;
    Q.push(4); 
    Q.push(5); 
    while(!Q.empty())
    {
        cout<<Q.pop()<<" ";
    }

}