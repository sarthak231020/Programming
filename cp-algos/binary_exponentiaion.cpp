#include<iostream>

using namespace std;

int main()
{
    int base,pow,result=1;
    cout<<"Enter the base and power:";
    cin>>base>>pow;
    
    for(int i=0;i<pow;i++) 
    {
        result = result*base;
    }

    cout<<"\nThe result is:"<<result;
    return 0;
}
