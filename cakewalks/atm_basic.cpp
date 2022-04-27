#include<iostream>
#include<cstdio>
using namespace std;

int main() 
{
    int x;
    float y;
    cin>>x>>y;
    if(x % 5 == 0 && x<floor(y)) 
    {
        printf("%.2f\n",y-x-0.5);
    }
    else
    {
        printf("%.2f\n",y);
    }

}