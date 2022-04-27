// https://www.codechef.com/CCSTART2/problems/REVSTRPT
#include<iostream>
using namespace std;
int main() 
{
    int N;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=N-i;j++)
        {
            cout<<" ";
        }
        for(int j=N-i+1;j<=N;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}