#include<iostream>
using namespace std;

bool abcs(int x)
{
    return ((x==10)?true:false);
}
int main() 
{
    int x;
    cin>>x;
    cout<<abcs(x)<<endl;
}