// https://www.codechef.com/CCSTART2/problems/EXTRICHK
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float a,b,c;
    cin>>a>>b>>c;
    float s = (a+b+c)/2;
    // cout<<s<<endl;
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    if(area > 0)
    {
        if(a==b && b==c && a==c)
            cout<<"1"<<endl;
        else if(a==b || b==c || c==a)
            cout<<"2"<<endl;
        else if(a!=b && b!=c && a!=c)
            cout<<"3"<<endl;
    }
    else
        cout<<"-1"<<endl;
}

