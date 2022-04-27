// https://codeforces.com/problemset/problem/459/A
#include<iostream>
using namespace std;

int main()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;

    if(x1==y1 && x2==y2)
    {
        cout<<x1<<" "<<x2<<" "<<y2<<" "<<y1<<endl;
    }
    else if(x1==x2 && y1 != y2)
    {
        cout<<x1+abs(y1)+abs(y2)<<" "<<min(y1,y2)<<" "<<x1+abs(y1)+abs(y2)<<" "<<max(y1,y2)<<endl;
    }
    else if(y1==y2 && x1 != x2)
    {
        cout<<min(x1,x2)<<" "<<y1+abs(x1)+abs(x2)<<" "<<max(x1,x2)<<" "<<y1+abs(x1)+abs(x2)<<endl;
    }
    else
    {
        int x3 = ()
    }
}