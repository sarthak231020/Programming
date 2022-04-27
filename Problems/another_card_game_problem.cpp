#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        float pc,pr; 
        cin>>pc>>pr;
        pc = ceil(pc/9.0);
        pr = ceil(pr/9.0);
        if(pc >= pr)
        {
            cout<<1<<" "<<pr<<endl;
        }
        else
        {
            cout<<0<<" "<<pc<<endl;
        }
    }
}