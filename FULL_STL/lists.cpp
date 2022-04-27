#include<iostream>
#include<list>

using namespace std;

list<int> l1,l2;

void printlist(list<int> l)
{
    int count = 1;
    list<int>::iterator it=l.begin();
    while(it!=l.end())
    {
        cout<<"The element at position:"<<count<<" is:"<<(*it)<<endl;
        count++;
        it++;
    }
}

bool odd(const int& value)
{
    return (value%2)==1;
}

int main()
{
    for(int i=0;i<10;i++)
    {
        l1.push_back(i+1);
        l2.push_back((i+1)*10);
    }

    printlist(l1);

    printlist(l2);

    cout<<"Reversing the list:"<<endl;

    l1.reverse();
    printlist(l1);

    cout<<"Pushing more values:"<<endl<<endl;

    l2.push_back(1);
    l2.push_back(2);

    printlist(l2);

    l2.sort();
    cout<<"After sorting the list"<<endl<<endl;
    printlist(l2);

    cout<<"After reversing the sorted list"<<endl<<endl;
    l2.reverse();
    printlist(l2);

    cout<<"The first element is:"<<l1.front();

    cout<<"The last element is:"<<l1.back();

    l1.push_front(1020);
    cout<<"After push_front first element:"<<l1.front()<<endl;

    l1.push_back(20120);
    cout<<"After push_back last element:"<<l1.back()<<endl;

    //using reverse iterator

    l1.pop_back();
    l1.pop_front();
    cout<<"After pop_front and pop_back"<<endl;
    cout<<"The First element:"<<l1.front()<<endl;
    cout<<"The last element:"<<l1.back()<<endl;

    if(l1.empty())
    {
        cout<<"The list is empty"<<endl;
    }
    else
    {
        cout<<"The list is not empty"<<endl;
    }

    // insert() – Inserts new elements in the list before the element at a specified position.
    // insert(pos_iter, ele_num, ele) pos_iter: Position in the container where the new elements are inserted.
    // ele_num: Number of elements to insert. Each element is initialized to a copy of val.
    // ele: Value to be copied (or moved) to the inserted elements.
    
    list<int>::iterator itr = l1.begin();
    advance(itr,2);
    l1.insert(itr,10020);
    itr = l1.begin();
    advance(itr,2);
    cout<<"After insertion:"<<(*itr)<<endl;
    printlist(l1);
    //     iterator list_name.erase(iterator position)
    // iterator list_name.erase(iterator first, iterator last)
    
    l1.erase(l1.begin());
    cout<<"After erasing the first element now first element is:"<<l1.front()<<endl;

    printlist(l1);
    itr = l1.begin();
    advance(itr,2);
    cout<<"Now iterator is pointing to the:"<<(*itr)<<endl;//8
    l1.erase(l1.begin(),itr);//till 8,8 itself will not get erased............
    cout<<"After Erasing first three elements:"<<l1.front()<<endl;

    printlist(l1);


    //assign

    cout<<"After assigning new values via assign:"<<endl<<endl;
    l1.assign(3,1);//assign 1 three times in front of the list...... it also deletes all old values
    printlist(l1); //o/p 1 1 1

    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);

    l1.remove(1);//after applying remove all ones got removed.......
    cout<<"After applying remove......"<<endl<<endl;
    printlist(l1);

    // list::remove_if() in C++ STL– Used to remove all the values from the list that correspond true to the predicate or condition given as parameter to the function.
    cout<<"\n\n\nRemove if........"<<endl;
    l1.remove_if(odd);
    printlist(l1);


    cout<<"The size of the list:"<<l1.size()<<endl;
    l1.push_back(5);
    l1.push_back(6);
    
    cout<<"Now the size:"<<l1.size()<<endl;
    l1.resize(3);
    cout<<"after resizing the size:"<<l1.size()<<endl;

    cout<<"The maximum elements a list can contain:"<<l1.max_size()<<endl;
    
    //for testing unique adding some duplicacy in list........
    l1.push_back(2);
    l1.push_back(2);
    printlist(l1);

    l1.unique();//it eliminates only consecutive duplicacy.......
    printlist(l1);
    
    //emplace_front and emplace_back are not supported 

    l1.clear();//Removes all elements from the list..
    cout<<"The size of the list:"<<l1.size()<<endl;

    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);

    printlist(l1);


    cout<<"The first element:"<<l1.front()<<endl;

    printlist(l2);


    list<int> l3;
    l3.push_back(20);
    l3.push_back(40);
    l3.push_back(60);
    l3.push_back(80);

    l2.swap(l3); //This function is used to swap the contents of one list with another list of same type and size.
    //Now l2 have l3's content and l3 have l2's contents.......
    printlist(l3);
    cout<<endl<<endl;
    printlist(l2);

    


    return 0;
}