#include<bits/stdc++.h> 
using namespace std;

struct item
{
    float weight;
    float profit;
    float pw;
};

bool comp(item i1,item i2) 
{
    if(i1.pw > i2.pw) 
        return true;
    return false;
}


int main() 
{
    int N,Capacity;
    cin>>N>>Capacity;

    item Items[N];
    float ele;
    for(int i=0;i<N;i++) 
    {   
        cin>>ele;
        Items[i].weight = ele;
    }

    for(int i=0;i<N;i++) 
    {
        cin>>ele;
        Items[i].profit = ele;
        Items[i].pw = Items[i].profit/Items[i].weight;
    }

    sort(&Items[0],&Items[N-1],comp);

    float profit = 0.0;

    int i;
    for(i=0;i<N;i++) 
    {
        if(Capacity > Items[i].weight)
        {
            profit += Items[i].profit;
            Capacity -= Items[i].weight;
        }
        else 
        {
            break;
        }
    }

    if(i != N)
        profit += (Items[i].profit/Items[i].weight)*(Capacity);
    
    cout<<profit<<endl;

    
}