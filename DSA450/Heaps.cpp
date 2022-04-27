#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() 
{
    vector<int> v1={10,40,20,30,50};

    make_heap(v1.begin(),v1.end());  //Creates a max Heap

    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    cout<<"Max:"<<v1.front()<<endl;

    v1.push_back(100);

    push_heap(v1.begin(),v1.end()); //reorder again

    cout<<"Max:"<<v1.front()<<endl;

    sort_heap(v1.begin(),v1.end());

    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    cout<<is_heap(v1.begin(),v1.end())<<endl;

    auto it = is_heap_until(v1.begin(),v1.end());

    for(vector<int>::iterator itr=v1.begin();itr!=it;itr++)
    {
        cout<<(*itr)<<" ";
    }
    cout<<endl;
}   