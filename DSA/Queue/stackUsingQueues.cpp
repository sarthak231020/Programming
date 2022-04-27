#include<bits/stdc++.h>
using namespace std;
queue<int> q1,q2;

void pushSt(int data) 
{
    q2.push(data);
    while(!q1.empty())
    {
        q2.push(q1.front());
        q1.pop();
    }

    swap(q1,q2);
}

int popSt()
{
    if(!q1.empty())
    {
        int data = q1.front();
        q1.pop();
        return data;
    }
    return -1;
}


int main() 
{
    for(int i=1;i<=5;i++) 
    {
        pushSt(i);
    }

    while(!q1.empty())
    {
        cout<<popSt()<<" ";
    }

}