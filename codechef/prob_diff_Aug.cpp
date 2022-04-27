#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin>>T;
    while(T--) 
    {
        vector<int> v(4);
        cin>>v[0]>>v[1]>>v[2]>>v[3];
        sort(v.begin(),v.end());
        if(v[0] == v[3])
        {
            cout<<0<<endl;
        }
        else if(((v[0] == v[1]) && (v[1] == v[2]))|| ((v[1] == v[2]) && (v[2] == v[3])))
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
    }
}