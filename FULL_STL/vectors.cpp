// // C++ program to illustrate the 
// // iterators in vector 
// #include <iostream> 
// #include <vector> 

// using namespace std; 
  
// int main() 
// { 
//     vector<int> g1(5); 
  
//     for (int i = 0; i <5; i++) 
//         g1[i] = i+1;

//     cout<<"The output for begin and end:";
//     for(vector<int>::iterator it=g1.begin();it!=g1.end();it++)
//     {
//         if(it != g1.begin())
//         {
//             cout<<(*it)<<endl;
//         }
//     }

//     cout<<"The size of the vector:"<<g1.size()<<endl;

//     cout<<"The maximum size:"<<g1.max_size()<<endl;

//     cout<<"The capacity is:"<<g1.capacity()<<endl;

//     g1.resize(15);

//     cout<<"Now the size of the vector:"<<g1.size()<<endl;

//     if(g1.empty())
//     {
//         cout<<"The vector is empty"<<endl;
//     }
//     else
//     {
//         cout<<"The vector is not empty"<<endl;
//     }

//     // g1.shrink_to_fit();

//     // cout<<"Now after shrink to fit the size of the vector:"<<g1.size()<<endl;

//     // cout<<"Once more resizing"<<endl;
//     g1.resize(10);

//     for(int i=0;i<10;i++)
//     {
//         cout<<"Element at position "<<i+1<<" is:"<<g1[i]<<endl;
//     }

//     //at(g) – Returns a reference to the element at position ‘g’ in the vector



//     cout<<"The elements at position 2 is:"<<g1.at(2)<<endl;

//     cout<<"The element at index 0 is:"<<g1.at(0)<<endl;

//     // cout<<"By using 'at' position 2 to 4 elements are:"<<endl;
//     // for(vector<int>::iterator it=g1.at(2);it!=g1.at(4);it++) 
//     // {
//     //     cout<<(*it)<<endl;
//     // }

//     cout<<"The 1st element:"<<g1.front()<<endl;

//     cout<<"The last element:"<<g1.back()<<endl;

//     //It also creates a pointer to the first element
//     int *pos = g1.data();

//     cout<<"The first element address:"<<g1.data()<<"The value at this address:"<<*g1.data()<<endl;

//     //assign(no_of_times,element) in order to replace old ones with a fresh value.......

//     g1.assign(5,10);

//     cout<<"After assigning 10 five times values:"<<endl;

//     for(int i=0;i<10;i++) 
//     {
//         cout<<"The Elements:"<<g1[i]<<" ";
//     }
//     cout<<endl;

//     //push_back (same as we append in python)

//     g1.push_back(20000);
//     cout<<"Now the last element after push_back:"<<g1.back()<<endl;

//     //Removing them........
//     g1.pop_back();

//     g1.insert(g1.begin(),5); //inserting at 1 position(index 0)

//     g1.insert(g1.begin()+1,1000000); //inserting at 2 postion
//     for(int i=0;i<10;i++) 
//     {
//         cout<<"The element at position:"<<i+1<<" is:"<<g1[i]<<endl;
//     }


//     //NOTE:-push_front,pop_front,cend,cbegin,rend,rbegin,emplace,emplace_back are depreciated...............

//     g1.erase(g1.begin()+2);//Erases 3 position element


//     //Clearing whole vector......
//     g1.clear();

//     cout<<"Now the size of the vector:"<<g1.size()<<endl;

//     //Swap in vectors

//     vector<int> v1,v2;

//     v1.push_back(1);
//     v1.push_back(2);
//     v1.push_back(3);
//     v2.push_back(10);
//     v2.push_back(20);

//     v1.swap(v2);
//     for(int i=0;i<3;i++)
//     {
//         cout<<"The element at position:"<<i+1<<" "<<v1[i]<<endl;
//     }

//     for(int i=0;i<3;i++)
//     {
//         cout<<"The element at position:"<<i+1<<" "<<v2[i]<<endl;
//     }
    
//     return 0; 
// } 

#include<iostream>
#include<vector>

using namespace std;

void traverse(vector<int> v)
{
    for(vector<int>::iterator itr=v.begin();itr!=v.end();itr++)
    {
        cout<<(*itr)<<"\t";
    }
    //Or by 
    // for(int i=0;i<v.size();i++) 
    // {
    //     cout<<v[i]<<"\t";
    // }
}
int main()
{
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);

    traverse(v1);

    for(vector<int>::iterator itr=v1.end()-1;itr!=v1.begin()-1;itr--)
    {
        cout<<(*itr)<<"\t";
    }
    int pos;
    vector<int>::iterator itr=v1.begin();
    cout<<"Enter Pos:";
    cin>>pos;
    
    for(int i=0;i!=pos;i++)
    {
        itr++;
    }
    v1.emplace(itr,10000);

    traverse(v1);

    // for(vector<int>::iterator itr=v1.rbegin();itr!=v1.rend();itr++)
    // {
    //     cout<<(*itr)<<"\t";
    // }
}