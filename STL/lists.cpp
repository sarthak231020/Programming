#include<iostream>
#include<list>
using namespace std;


int main() 
{
    list<int> L(10);

    L.push_back(0);
    for(int i=0;i<10;i++)
    {
        L.push_back(i+1);
    }

    list<int>::iterator it = find(L.begin(),L.end(),0);
    L.insert(it,5);
    it = find(L.begin(),L.end(),7);
    L.erase(it);


    for(list<int>::iterator it=L.begin();it!=L.end();it++) 
    {
        cout<<(*it)<<endl;
    }
}
