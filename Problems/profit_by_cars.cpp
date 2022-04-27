#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,N;
    cin>>T;
    while(T--)
    {
        cin>>N;
        set<int> S;
        int i=0; 
        int ele;
        while(N--);
        {
            cin>>ele; 
            S.insert(ele);
        }

        for(set<int>::iterator itr=S.begin();itr!=S.end();itr++)
        {
            cout<<(*itr)<<"   ";
        }
        cout<<endl;
        // for(auto i:S)
        // {
        //     cout<<i<<endl; 
        // }
        // int sum = 0;
        // for(auto i:S)
        // {
        //     sum += i;
        // }

        // cout<<sum<<endl;
    }
}