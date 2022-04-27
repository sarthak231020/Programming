// Multimap is similar to map with an addition that multiple elements can have same keys. Also, it is NOT required that the key value and mapped value pair has to be unique in this case.
#include<iostream>
#include<map>
#include<iterator>

using namespace std;

void show(multimap<int,int> m)
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
    multimap<int,int> mm1;
    mm1.insert(pair<int,int>(1,1000));
    mm1.insert(pair<int,int>(2,20));
    mm1.insert(pair<int,int>(3,30));
    mm1.insert(pair<int,int>(4,40));
    mm1.insert(pair<int,int>(5,50));
    mm1.insert(pair<int,int>(6,60));
    mm1.insert(pair<int,int>(7,70));
    mm1.insert(pair<int,int>(1,100)); //allowed in multimap but not in maps

    show(mm1);
    
    //because of such duplicacy the operator[],at() is not allowed in multimaps....
    //removing elements which key is less than 4

    mm1.erase(mm1.begin(),mm1.find(4));
    show(mm1);
    
    int n;
    n = mm1.erase(1);//returns bool type if key 1 is present there in multimap then "1", else "0"
    cout<<"Erased element:"<<n<<endl;
    show(mm1);


    multimap<int,int>::iterator itr=mm1.lower_bound(5);

    cout<<"\tKey\tElement\n";
    while(itr!=mm1.end())
    {
        cout<<"\t"<<itr->first<<"\t"<<itr->second<<endl;
        itr++;
    }
    //in lower bound the value specified is inclusive........(i.e it prints high and equal values,actually it returns pointer to starting of such range)
    

    //and in upper bound the specified value is exclusive(not included i.e it returns pointer to greater value than that)
    itr=mm1.upper_bound(5);

    cout<<"\tKey\tElement\n";
    while(itr!=mm1.end())
    {
        cout<<"\t"<<itr->first<<"\t"<<itr->second<<endl;
        itr++;
    }

    show(mm1);

    multimap<int,int> m2;

    m2.insert(pair<int,int> (1,100));
    m2.insert(pair<int,int> (2,200));
    m2.insert(pair<int,int> (3,300));
    m2.insert(pair<int,int> (4,400));

    cout<<"The size of m1:"<<mm1.size()<<"\nThe size of m2:"<<m2.size()<<endl;

    show(m2);

    //swap
    mm1.swap(m2); 
    show(mm1);
    show(m2);

    mm1 = m2;
    show(mm1);

    cout<<"The max size:"<<mm1.max_size()<<endl;
    cout<<"The size of m1:"<<mm1.size()<<endl;

    mm1.clear();

    cout<<"After clearing size of m1:"<<mm1.size()<<endl;
    mm1.emplace(pair<int,int>(1,1000));
    show(mm1);
    // such "m1.insert(pair<int,int>(1,2000));" //this insertion will be neglected because key 1 is already present..............


    show(mm1);
    cout<<"count:"<<mm1.count(1); //count(key) returns no of times it present

    cout<<"\nThe size of multimap2:"<<m2.size()<<endl;

    //emplace_hint(position,key,element) position->from where start searching  it provide hints that from where you sholude start searching before insertion and inserts also

    itr=m2.begin();
    // advance(itr,);
    cout<<itr->first<<"\t"<<itr->second<<endl;
    m2.emplace_hint(itr,5,3000); 

    advance(itr,3);
    cout<<itr->first<<"\t"<<itr->second<<endl;
    m2.emplace_hint(itr,8,80); //starts searching from 6 60

    show(m2);
    
}