#include<iostream>
using namespace std;

class ApnaCollege
{
    public:
        void fun()
        {
            cout<<"I am a function with no argument\n";
        }
        void fun(int a)
        {
            cout<<"I am a function with int as argument\n";
        }
        // int fun(int a) //Nahi kaam Karega 
        //int ApnaCollege::fun(int)' cannot be overloaded with 'void ApnaCollege::fun(int)'
        // {
        //     cout<<"I am a function with int as argument and returning an int"<<endl;
        //     return a;
        // }
        void fun(double a)
        {
            cout<<"I am a function with double as argument\n";
        }
};

int main() 
{
    ApnaCollege a;
    a.fun();
    a.fun(4);
    // ApnaCollege c; Nahi Kaam Karega 
    // int val = c.fun(16);
    cout<<val<<endl;
    a.fun(4.32);
}

