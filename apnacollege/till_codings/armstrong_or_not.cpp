#include<iostream>
#include<cmath>
using namespace std; 

int main() 
{
    int n,last,arm=0,temp;
    cin>>n;
    temp = n;
    while(n)
    {
        last = n%10;
        arm += pow(last,3);
        n = n/10;
    }
    
    if(temp==arm)
        cout<<temp<<" is armstrong"<<endl;
    else 
        cout<<temp<<" is not a armstrong"<<endl;
}