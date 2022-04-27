// Forward list in STL implements singly linked list. Introduced from C++11, forward list are useful than other containers in insertion, removal and moving operations (like sort) and allows time constant insertion and removal of elements.

// It differs from list by the fact that forward list keeps track of location of only next element while list keeps track to both next and previous elements, thus increasing the storage space required to store each element. The drawback of forward list is that it cannot be iterated backwards and its individual elements cannot be accessed directly.

// Forward List is preferred over list when only forward traversal is required (same as singly linked list is preferred over doubly linked list) as we can save space. Some example cases are, chaining in hashing, adjacency list representation of graph, etc.


#include<iostream>
#include<forward_list>

using namespace std;

int main()
{
    forward_list<int> fl1,fl2;

    fl1.assign({1,2,3});
    fl2.assign(5,10); //10 five times

    cout<<"The elements in the first forward list:"<<endl;
    for(int&a : fl1)
    {
        cout<<a<<"  ";
    }
    cout<<endl;

    cout<<"The elements in the second forward list:"<<endl;
    for(int&b : fl2)
    {
        cout<<b<<"  ";
    }

    //2. push_front() :- This function is used to insert the element at the first position on forward list. The value from this function is copied to the space before first element in the container. The size of forward list increases by 1.

    // 3. emplace_front() :- This function is similar to the previous function but in this no copying operation occurs, the element is created directly at the memory before the first element of the forward
    fl2.push_front(5000);
    cout<<"Now after push_front the first element:"<<fl2.front()<<endl;

    fl2.emplace_front(1020);
    cout<<"Now after the emplace_front the front:"<<fl2.front()<<endl;

    fl2.pop_front();
    cout<<"After applying pop_front first element:"<<fl2.front()<<endl;

    forward_list<int>::iterator ptr;

    ptr = fl2.insert_after(fl2.begin(),{1,2,3}); //it will insert 1,2,3 after starting element(As fl2.begin())
    cout<<"The forward list after insert_after operation:"<<endl;

    for(int&c :fl2)
    {
        cout<<c<<"  ";
    }
    cout<<endl;
    
    ptr = fl2.emplace_after(ptr,2);

    for(int&c : fl2) 
    {
        cout<<c<<"  ";
    }
    cout<<endl;

    ptr = fl2.begin();
    advance(ptr,1);
    
    cout<<"The second element is:"<<(*ptr)<<endl;
    
    advance(ptr,1);
    cout<< "The third element is:"<<(*ptr)<<endl;

    fl2.remove(2); //it removes all 2's from the list........

    for(int&c : fl2)
    {
        cout<<c<<"   ";
    }
    cout<<endl;
    //remove_if is also there fl2.remove_if(odd);

    //splice_after 


    forward_list<int> newfl1 = {10,20,30},newfl2={40,50,60};
    
    newfl2.splice_after(newfl2.begin(),newfl1);

    cout<<"The forward list after the splice_after:";
    for(int&c : newfl2) 
    {
        cout<<c<<"  ";
    }
    cout<<endl;
    //Output 40  10  20  30  50  60  

    // cbegin()– Returns a constant iterator pointing to the first element of the forward_list.
    // cend()– Returns a constant iterator pointing to the past-the-last element of the forward_list.
    // before_begin()– Returns a iterator which points to the position before the first element of the forward_list.
    // cbefore_begin()– Returns a constant random access iterator which points to the position before the first element of the forward_list.
    // max_size()– Returns the maximum number of elements can be held by forward_list.
    // resize()– Changes the size of forward_list.


    ////////////////////////////////////////////////////////////

    //manipulating operations.........
    // 1. merge() :- This function is used to merge one forward list with other. If both the lists are sorted then the resulted list returned is also sorted.

    fl1.clear();
    fl2.clear();
    if(fl1.empty())
        cout<<"fl1 is empty...\n";
    if(fl2.empty())
        cout<<"fl2 is empty...\n";
    //BIG IMP NOTE -->push_back is not supported in forward_list ...............

    fl1.assign({100,200,300,400,500,600});
    fl2.assign({1,2,3,4,5,6});
    fl1.merge(fl2);

    for(int&c : fl1)
    {
        cout<<c<<"  ";
    }    
    cout<<endl;
    //o/p
    // 1  2  3  4  5  6  100  200  300  400  500  600  
    fl1.clear();
    fl1.assign({5,4,3,2,1});
    fl1.sort();
    for(int&i : fl1)
    {
        cout<<i<<"  ";
    }
    cout<<endl;

    fl1.clear();
    fl1.assign(5,10);
    fl1.push_front(1);
    fl1.push_front(2);
    fl1.push_front(3);
    fl1.push_front(10);
    fl1.push_front(10);
    cout<<"The forward list:"<<endl;
    for(int&c:fl1)
    {
        cout<<c<<"  ";
    }
    cout<<endl;

    fl1.unique();//Note :- only consecutive duplicacy will be removed......
    cout<<"\n\nThe results after the unique:"<<endl;
    for(int&c:fl1)
    {
        cout<<c<<"  ";
    }
    cout<<endl;

    fl1.reverse();
    cout<<"The results after the reverse:"<<endl;
    for(int&c : fl1)
    {
        cout<<c<<"  ";
    }
    cout<<endl;

    fl1.clear();
    fl2.clear();

    fl1.push_front(10);
    fl1.push_front(20);
    fl1.push_front(30);
    fl1.push_front(40);
    fl2.push_front(1000);
    fl2.push_front(2000);
    fl2.push_front(3000);
    fl2.push_front(4000);

    fl1.swap(fl2);

    for(int&c:fl1)
    {
        cout<<c<<"  ";
    }
    cout<<endl;

    for(int&c : fl2)
    {
        cout<<c<<"  ";
    }
    cout<<endl;
    return 0;
}   
