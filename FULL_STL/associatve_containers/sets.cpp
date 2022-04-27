// Sets are a type of associative containers in which each element has to be unique, because the value of the element identifies it. The value of the element cannot be modified once it is added to the set, though it is possible to remove and add the modified value of that element.
#include<iostream>
#include<set>
#include<iterator>
using namespace std;

void traverse(set<int,greater<int>> s) 
{
    for(set<int,greater<int>>::iterator itr=s.begin();itr!=s.end();itr++)
    {
        cout<<(*itr)<<"  ";
    }
    cout<<endl;
}

void setshow(set<int> s3)
{
    for(set<int>::iterator itr=s3.begin();itr!=s3.end();itr++)
    {
        cout<<"\t"<<(*itr);
    }
    cout<<endl;
}

// greater<int> returns the true when a>b and false when a<b
int main()
{
    set<int,greater<int>> s1;

    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(5);
    s1.insert(15);

    traverse(s1);

    //assigning elements of s1 to s2 set(s2 is without greater in it......)
    set<int> s2(s1.begin(),s1.end());

    cout<<"The elements of the set s2:"<<endl;
    setshow(s2);

    //in order print it in reverse order..............
    for(set<int>::reverse_iterator itr=s2.rbegin();itr!=s2.rend();itr++)
    {
        cout<<"\t"<<(*itr);
    }
    cout<<endl;

    //cbegin returns a constant pointer to the first element...
    //cend returns a constant pointer to last element.......
    for(set<int>::iterator itr=s2.cbegin();itr!=s2.cend();itr++)
    {
        cout<<(*itr)<<"  ";
    }
    cout<<endl;

    //crend() same as rend(except the contant pointer thing)...
    //crbegin() same as rbegin(except the contant pointer thing)...
    
    cout<<"Size:"<<s2.size()<<endl;
    cout<<"Max_size:"<<s2.max_size()<<endl;

    s2.insert(200);
    
    // iterator insert (iterator position, const g) – Adds a new element ‘g’ at the position pointed by iterator.
    set<int>::iterator itr = s2.begin();
    advance(itr,2);
    s2.insert(itr,50000);
    
    cout<<"Now the s2 elements will be:"<<endl;
    setshow(s2);
    cout<<endl;

    s2.erase(itr);
    s2.erase(200);
    cout<<"After applying erase the set:"<<endl;
    setshow(s2);

    s2.clear();//will remove all the elements from the set....
    //Let's check it...........
    cout<<"The size of the set after clearing it:"<<s2.size()<<endl;
    s2.insert(10);
    s2.insert(20);
    s2.insert(30);

    setshow(s2);

    itr = s2.find(30);
    cout<<"finded by find(30) is:"<<(*itr)<<endl;

    cout<<"Count of 30:"<<s2.count(30)<<endl;

    // lower_bound(const g) – Returns an iterator to the first element that is equivalent to ‘g’ or definitely will not go before the element ‘g’ in the set.
    itr = s2.lower_bound(20);
    cout<<"Lower bound of 20:"<<(*itr)<<endl;

    itr = s2.upper_bound(30);
    cout<<"Upper bound of 30:"<<(*itr)<<endl;
}