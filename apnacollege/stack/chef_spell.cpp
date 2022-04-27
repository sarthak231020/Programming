#include<iostream>
using namespace std;

int main() 
{
    int T;
    cin>>T;
    while(T--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        cout<<(max(A+C,max(A+B,B+C)))<<endl;
    }
    
}