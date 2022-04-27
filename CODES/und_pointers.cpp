#include<iostream>
using namespace std;

struct node
{
    int i;
    int *c;
};

int main() 
{
    struct node a[2],*p;
    int b[2] = {30,40};
    p = &a[0];
    a[0].i = 10;
    a[1].i = 20;
    a[0].c = b;

    // cout<<*a[0].c<<endl;
    //1.
    // printf("%d\n",(p++)->i);
    
    // cout<<p->i<<endl;
    // for(int j=0;j<2;j++) 
    // {
    //     cout<<a[j].i<<endl;
    // }

    // int x;
    // x = *p->c; 

    // cout<<x<<endl;

    // int x = *p++->c;
    // cout<<x<<endl;
    // cout<<*p->c<<endl;
    int x = *p++->c;
    cout<<x<<endl;
    cout<<p->i<<endl; 
    //NOW P is pointing to the a[1].....
    // if(&a[1] == p)
    //     cout<<true<<endl;
    
}