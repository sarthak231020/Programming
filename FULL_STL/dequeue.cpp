#include<iostream>
#include<deque>

using namespace std;

void traverse(deque <int> d)
{
    for(deque<int>::iterator itr=d.begin();itr!=d.end();itr++)
    {
        cout<<"\t"<<(*itr);
    }

    cout<<"\n";
}

int main()
{
    deque<int> d1;

    d1.push_back(10); 
    d1.push_back(20);
    d1.push_front(5);

    cout<<"The Deque:"<<endl;
    traverse(d1);

    cout<<"The size of the deque:"<<d1.size()<<endl;
    cout<<"The max_size:"<<d1.max_size()<<endl;
    cout<<"Element at(2)(returns element present in 2nd position=20):"<<d1.at(2)<<endl;
    cout<<"first element:"<<d1.front()<<endl;
    cout<<"last element:"<<d1.back()<<endl;
    d1.pop_front();
    cout<<"After pop_front Deque will be:"<<endl;
    traverse(d1);

    d1.pop_back();
    cout<<"After pop_back Deque will be:"<<endl;
    traverse(d1);

    deque<int>::iterator itr=d1.begin();
    advance(itr,1);
    d1.insert(itr,2000);

    traverse(d1);

    d1.assign(5,3); //(assign(no_of_times,value) it deletes all previous elements......

    cout<<"Deque after assigning the values:"<<endl;
    traverse(d1);

    d1.resize(3);
    cout<<"Now the size of the dequeue:"<<d1.size()<<endl;

    d1.clear(); //removes all elements......
    if(d1.empty())
        cout<<"Dequeue is empty\n";
    else
        cout<<"Dequeue is not empty\n";


    d1.push_back(10);
    d1.push_back(15);
    d1.push_front(5);
    d1.push_back(20);
    d1.push_back(25);

    itr = d1.begin();
    advance(itr,3);
    cout<<"Iterator is pointing to:"<<(*itr)<<endl;//erase just work as range in python that stops before the last element(i.e not includes stop parameter).........
    d1.erase(d1.begin(),itr);

    traverse(d1);

    deque<int> d2;

    d2.push_back(100);
    d2.push_back(150);
    d2.push_back(200);
    d2.push_back(250);

    //operator "=" will assign r.h.s to l.h.s
    d1 = d2;

    cout<<"by '=' d1 will become d2"<<endl;
    traverse(d1);

    cout<<"but d2 will not changed:"<<endl;
    traverse(d2);

    //operator "[]" will extract that index value.......
    cout<<"The element at position 3(index-->2):"<<d1[2]<<endl;

    deque<int> d3;
    for(int i=0;i<5;i++)
    {
        d3.push_back((i+1)*1000);
    }

    d2.swap(d3);

    cout<<"Now d2 contents:"<<endl;
    traverse(d2);

    cout<<"and d3 content\n";
    traverse(d3);

    return 0;
}

