#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> V;
    int n; 
    while(scanf("%d",&n) && n) // it keeps reading untill you hit the 0
    {
        V.emplace_back(n);
    }
    
    int element;
    cin>>element;
    //upper bound always return an iterator to next element(it do not care that element is present or not)
    //It will help you to get last occurance of a number in a container 
    vector<int>::iterator itr = upper_bound(V.begin(),V.end(),element);
    if(*(itr-1) == element)
        cout<<"Yes, The element is present at index:"<<itr-V.begin()<<endl;
    else
    {
        cout<<"No,Element is Not exists in the vector"<<endl;
        cout<<"Actually the iterator is pointing to the:"<<*itr<<endl;
    }
}