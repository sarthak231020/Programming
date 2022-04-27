// Q. find the first occurance of a X in a sorted array if it not present -1

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> V;
    int n;
    while(scanf("%d",&n) && n)
    {
        V.emplace_back(n);
    }
    int element;
    cin>>element;

    //lower bound always gives you an iterator to first occurance........
    int index = lower_bound(V.begin(),V.end(),element)-V.begin(); 

    if(index != V.size() && V[index] == element)
        cout<<index<<endl;
    else
        cout<<-1<<endl;
}