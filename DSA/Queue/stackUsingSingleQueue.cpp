#include<bits/stdc++.h>
using namespace std;

queue<int> q;

void pushSt(int data) 
{   
    q.push(data);
    int i=1;
    int len = q.size();
    while(i <= len-1) 
    {
        q.push(q.front());
        q.pop();
        i++;
    }
}   

void popSt() 
{
    if(!q.empty()) 
        q.pop();
}

int topSt() 
{
    if(!q.empty())
        return q.front();
    return -1;
}


int main() 
{
    for(int i=1;i<=5;i++) 
    {
        pushSt(i);
    }

    while(!q.empty()) 
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}