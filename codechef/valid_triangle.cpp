// https://www.codechef.com/CCSTART2/problems/TRIVALCH
#include<iostream>
#include<cmath>
using namespace std;

int main() 
{
    double a,b,c;
    cin>>a>>b>>c;
    double s=(a+b+c)/2;
    // cout<<s<<endl;
    double A = sqrt(s*(s-a)*(s-b)*(s-c));
    // cout<<A<<endl;
    if(A > 0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
}