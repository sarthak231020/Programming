#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    vector<int> V;
    while(scanf("%d",&n) && n) // it keeps reading untill you hit the 0
    {
        V.emplace_back(n);
    }
    
    int element;
    cin>>element;
    // lower_bound function returns an iterator pointing to searched element (if it exists)
    // Otherwise it will return the iterator to next greater element 
    // make sure that iterator is pointing to that element 
    
    vector<int>::iterator itr = lower_bound(V.begin(),V.end(),element);
    if(*itr == element)
        cout<<"Yes, The element is present at index:"<<itr-V.begin()<<endl;
    else
    {
        cout<<"No,Element is Not exists in the vector"<<endl;
        cout<<"Actually the iterator is pointing to the:"<<*itr<<endl;
    }

    //If you are only interested in the index below line works for you but ensure that element is present over the vector....    
    // int index = lower_bound(V.begin(),V.end(),element)-V.begin(); //It will return the index of the element
}