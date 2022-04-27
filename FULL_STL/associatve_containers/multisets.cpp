// Multisets are a type of associative containers similar to set, with an exception that multiple elements can have same values.

#include<iostream>
#include<set>
#include<iterator>

using namespace std;

void show(multiset<int, greater<int>> ms)
{
    for(multiset<int,greater<int>>::iterator itr=ms.begin();itr!=ms.end();itr++)
    {
        cout<<(*itr)<<"  ";
    }
    cout<<endl;
}

void traverse_set(multiset<int> s)
{
    for(set<int>::iterator itr=s.begin();itr!=s.end();itr++)
    {
        cout<<(*itr)<<"  ";
    }
    cout<<endl;
}


int main()
{
    multiset<int, greater<int>> ms1;

    ms1.insert(10);
    ms1.insert(10);
    ms1.insert(20);
    ms1.insert(20);
    ms1.insert(30);
    ms1.insert(1);
    ms1.insert(2);
    
    show(ms1);
    // 30  20  20  10  10  2  1  
    ms1.erase(ms1.begin(),ms1.find(10)); //stop is exclusive,start is inclusive........
    
    show(ms1);
    // 10  10  2  1

    ms1.insert(100);
    ms1.insert(50);

    ms1.erase(50); //50 is erased

    show(ms1);
    multiset<int> s1(ms1.begin(),ms1.end());

    traverse_set(s1);
    multiset<int>::iterator itr=s1.lower_bound(10);

    while(itr!=s1.end())
    {
        cout<<(*itr)<<"  ";
        itr++;
    }
    cout<<"\n";
    // o/p--> 10  10  100

    itr = s1.upper_bound(10);
    while(itr!=s1.end())
    {
        cout<<(*itr)<<"  ";
        itr++;
    }
    //     //o/p --> 100
    //     begin() – Returns an iterator to the first element in the multiset.
    // end() – Returns an iterator to the theoretical element that follows last element in the multiset.
    // size() – Returns the number of elements in the multiset.
    // max_size()– Returns the maximum number of elements that the multiset can hold.
    // empty() – Returns whether the multiset is empty.
    // pair insert(const g) – Adds a new element ‘g’ to the multiset.
    // iterator insert (iterator position,const g) – Adds a new element ‘g’ at the position pointed by iterator.
    // erase(iterator position)– Removes the element at the position pointed by the iterator.
    // erase(const g)– Removes the value ‘g’ from the multiset.
    // clear()– Removes all the elements from the multiset.
    // key_comp() / value_comp()– Returns the object that determines how the elements in the multiset are ordered (‘<' by default).
    // find(const g)– Returns an iterator to the element ‘g’ in the multiset if found, else returns the iterator to end.
    // count(const g)– Returns the number of matches to element ‘g’ in the multiset.
    // lower_bound(const g)– Returns an iterator to the first element that is equivalent to ‘g’ or definitely will not go before the element ‘g’ in the multiset.
    // upper_bound(const g)– Returns an iterator to the first element that is equivalent to ‘g’ or definitely will go after the element ‘g’ in the multiset.
    // multiset::swap()– This function is used to exchange the contents of two multisets but the sets must be of same type, although sizes may differ.
    // multiset::operator=– This operator is used to assign new contents to the container by replacing the existing contents.
    // multiset::emplace()– This function is used to insert a new element into the multiset container.
    // multiset equal_range()– Returns an iterator of pairs. The pair refers to the range that includes all the elements in the container which have a key equivalent to k.
    // multiset::emplace_hint() – Inserts a new element in the multiset.
    // multiset::rbegin()– Returns a reverse iterator pointing to the last element in the multiset container.
    // multiset::rend()– Returns a reverse iterator pointing to the theoretical element right before the first element in the multiset container.
    // multiset::cbegin()– Returns a constant iterator pointing to the first element in the container.
    // multiset::cend()– Returns a constant iterator pointing to the position past the last element in the container.
    // multiset::crbegin()– Returns a constant reverse iterator pointing to the last element in the container.
    // multiset::crend()– Returns a constant reverse iterator pointing to the position just before the first element in the container.
    // multiset::get_allocator()– Returns a copy of the allocator object associated with the multiset.


}
