#include<bits/stdc++.h>
using namespace std;

stack<int> inp,out;

void pushQ(int data) 
{
    inp.push(data);
}

void popQ()
{
    if(!out.empty())
    {
        out.pop();
    }
    else 
    {
        while(!inp.empty())
        {
            out.push(inp.top()); 
            inp.pop();
        }
        out.pop();
    }
}

int topQ()
{
    if(!out.empty())
    {
        return out.top();
    }
    else 
    {
        while(!inp.empty())
        {
            out.push(inp.top()); 
            inp.pop();
        }
        return out.top();
    }
}

bool isEmpty() 
{
    if(inp.empty() && out.empty()) 
        return true;
    return false;
}


int main() 
{
    for(int i=1;i<=5;i++) 
    {
        pushQ(i);
    }

    while(!isEmpty())
    {
        cout<<topQ()<<" ";
        popQ();
    }

}