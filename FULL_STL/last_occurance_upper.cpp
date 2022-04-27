#include<iostream> 
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int N;
    vector<int> V; 
    while(scanf("%d",&N) && N)
    {
        V.emplace_back(N);
    }
    int element; 
    cin>>element;
    vector<int>::iterator itr = upper_bound(V.begin(),V.end(),element);

    if(*(itr-1) == element)
    {
        cout<<"The Last Occurance of "<<element<<" is at index:"<<itr-1-V.begin()<<endl;
    }
    else
    {
        cout<<"The element is Not present in the container"<<endl;
    }
    
}