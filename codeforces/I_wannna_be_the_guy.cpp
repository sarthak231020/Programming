#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    set<int> s;
    int p;
    cin>>p;
    int item;
    for(int i=0;i<p;i++)
    {
        cin>>item;
        s.insert(item);
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>item;
        s.insert(item);
    }
    int sum_total = (n)*(n+1)/2;
    int sum = 0;
    for(auto i:s)
    {
        sum_total -= i;
    }
    if(sum_total == 0)
        cout<<"I become the guy.";
    else    
        cout<<"Oh, my keyboard!";
    // int count = 1;
    // for(
    // {
    //     if(i != count)
    //     {
    //         cout<<"Oh, my keyboard!"<<endl;
    //         return 0;
    //     }
    //     count += 1;
    // }
    // cout<<"I become the guy."<<endl;
    // return 0;
}