#include<iostream>
using namespace std;

int main() 
{
    int T;
    cin>>T;
    while(T--)
    {
        string str;
        int prev=0,grp;
        getline(cin,str);
        for(auto i:str)
        {
            if(i=='1' && prev==0)
                grp++;
            prev = i;
        }
        // cout<<grp<<endl;
    }
}