#include<iostream>
#include<queue>

using namespace std;


void traverse(priority_queue <int,vector<int>,greater<int>> m_h)
{
    while(!m_h.empty())
    {
        cout<<"\t"<<m_h.top();
        m_h.pop();
    }
    cout<<"\n";
}

int main()
{
    priority_queue <int,vector<int>,greater<int>> m_h1;
    m_h1.push(10);
    m_h1.push(20);
    m_h1.push(30);
    m_h1.push(1);
    m_h1.push(2);

    cout<<"The min heap will be:";
    traverse(m_h1);
    cout<<"Popping an element:"<<endl;

    cout<<"Size:"<<m_h1.size()<<endl;
    m_h1.pop(); //will delete minimum valued element.......

    traverse(m_h1);
    cout<<"Size:"<<m_h1.size()<<endl;

    return 0;
}