#include<iostream>
#include<deque>

using namespace std;

void traverse(deque<int> d)
{
    for(deque<int>::iterator itr=d.begin();itr!=d.end();itr++)
    {
        cout<<(*itr)<<"\t";
    }
}

int main()
{
    deque<int> d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_back(30);
    d1.push_front(5);

    cout<<"The Deque:"<<endl;
    traverse(d1);
    cout<<"The size of the deque:"<<d1.size()<<endl;\
    cout<<"The maximum size of the deque:"<<d1.maxsize()<<endl;
    cout<<"The element at second position:"<<d1.at(2)<<endl;

    cout<<"First:"<<d1.first()<<endl;
    cout<<"End:"<<d1.back()<<endl;
    d1.pop_front();

    cout<<"After Deletion Deque:"<<endl;
    traverse(d1);

    deque<int>::iterator itr=d1.begin();
    advance(itr,1);
    traverse(d1);

    
}