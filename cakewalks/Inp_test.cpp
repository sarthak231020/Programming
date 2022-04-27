#include<iostream>
using namespace std; 

int main() 
{
    int n,k;
    cin>>n>>k;
    int count=0,T;
    while(n--)
    {
        cin>>T;
        if(T%k == 0)
            count++;
    }
    cout<<count<<endl;
}