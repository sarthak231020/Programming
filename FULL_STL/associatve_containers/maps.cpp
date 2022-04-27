// Maps are associative containers that store elements in a mapped fashion. Each element has a key value and a mapped value. No two mapped values can have same key values
#include<iostream>
#include<map>
#include<iterator>

using namespace std;

void show(map<int,int> m)
{   
    cout<<"\tKey\tElement\n";
    for(map<int,int>::iterator itr=m.begin();itr!=m.end();itr++)
    {
        cout<<"\t"<<itr->first<<"\t"<<itr->second<<endl;
    }
    cout<<"\n";
}

int main()
{
    map<int,int> m1;
    m1.insert(pair<int,int>(1,10));
    m1.insert(pair<int,int>(2,20));
    m1.insert(pair<int,int>(3,30));
    m1.insert(pair<int,int>(4,40));
    m1.insert(pair<int,int>(5,50));
    m1.insert(pair<int,int>(6,60));
    m1.insert(pair<int,int>(7,70));
    show(m1);

    //removing elements which key is less than 3

    m1.erase(m1.begin(),m1.find(3));

    show(m1);

    int n;
    n = m1.erase(4);

    show(m1);

    map<int,int>::iterator itr=m1.lower_bound(5);

    cout<<"\tKey\tElement\n";
    while(itr!=m1.end())
    {
        cout<<"\t"<<itr->first<<"\t"<<itr->second<<endl;
        itr++;
    }
    //in lower bound the value specified is inclusive........(i.e it prints high and equal values,actually it returns pointer to starting of such range)
    

    //and in upper bound the specified value is exclusive(not included i.e it returns pointer to greater value than that)
    itr=m1.upper_bound(5);

    cout<<"\tKey\tElement\n";
    while(itr!=m1.end())
    {
        cout<<"\t"<<itr->first<<"\t"<<itr->second<<endl;
        itr++;
    }

    show(m1);

    map<int,int> m2;

    m2.insert(pair<int,int> (1,100));
    m2.insert(pair<int,int> (2,200));
    m2.insert(pair<int,int> (3,300));
    m2.insert(pair<int,int> (4,400));

    cout<<"The size of m1:"<<m1.size()<<"\nThe size of m2:"<<m2.size()<<endl;

    show(m2);
    cout<<"Value at Key-->2 of m2:"<<m2.at(2)<<endl; //200

    cout<<"Value at Key-->3 of m1:"<<m1[3]<<endl;

    //swap
    m1.swap(m2); 
    show(m1);
    show(m2);

    m1 = m2;
    show(m1);

    cout<<"The max size:"<<m1.max_size()<<endl;
    cout<<"The size of m1:"<<m1.size()<<endl;

    m1.clear();

    cout<<"After clearing size of m1:"<<m1.size()<<endl;
    m1.emplace(pair<int,int>(1,1000));
    show(m1);
    // such "m1.insert(pair<int,int>(1,2000));" //this insertion will be neglected because key 1 is already present..............


    show(m1);
    cout<<"count:"<<m1.count(1); //count(key) returns no of times it present

}