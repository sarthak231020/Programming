#include<bits/stdc++.h>
using namespace std;

stack<int> s1,s2;

void pushQ(int data) 
{
    while(!s1.empty()) 
    { 
        s2.push(s1.top());
        s1.pop();
    }
    s1.push(data);
    while(!s2.empty())
    {
        s1.push(s2.top());
        s2.pop();
    }
}

void popQ() 
{
    if(!s1.empty())
        s1.pop();
    
}

int frontQ() 
{
    if(!s1.empty()) 
    {
        return s1.top();
    }
    return -1;
}

bool isEmpty() 
{
    return s1.empty();
}

int main() 
{
    for(int i=1;i<=5;i++) 
    {
        pushQ(i);
    }

    while(!isEmpty())
    {
        cout<<frontQ()<<" ";
        popQ();
    }

}

