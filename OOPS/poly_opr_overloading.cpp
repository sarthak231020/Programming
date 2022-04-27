// #include<iostream>
// using namespace std;

// class Complex
// {
//     private:
//     int real,imag;
//     public:
//     Complex(int r=0,int i=0)
//     {
//         real = r;
//         imag = i;
//     }

//     Complex operator +(Complex const &obj)
//     {
//         Complex res;
//         res.real = real+obj.real;
//         res.imag = imag+obj.imag;
//         return res;
//     }

//     void display()
//     {
//         cout<<real<<"+"<<imag<<"i"<<endl;
//     }

// };

// int main()
// {
//     Complex c1(12,7);
//     Complex c2(6,7);
//     Complex c3=c1+c2;
//     c3.display();
//     return 0;
// }


// CPP program to illustrate
// working of Virtual Functions
#include <iostream>
using namespace std;
 
class base {
public:
    void fun_1() { cout << "base-1\n"; }
    virtual void fun_2() { cout << "base-2\n"; }
    virtual void fun_3() { cout << "base-3\n"; }
    virtual void fun_4() { cout << "base-4\n"; }
};
 
class derived : public base {
public:
    void fun_1() { cout << "derived-1\n"; }
    void fun_2() { cout << "derived-2\n"; }
    void fun_4(int x) { cout << "derived-4\n"; }
};
 
int main()
{
    base* p;
    derived obj1;
    p = &obj1;
 
    // Early binding because fun1() is non-virtual
    // in base
    p->fun_1();
 
    // Late binding (RTP)
    p->fun_2();
 
    // Late binding (RTP)
    p->fun_3();
 
    // Late binding (RTP)
    p->fun_4(5);
 
    // Early binding but this function call is
    // illegal(produces error) becasue pointer
    // is of base type and function is of
    // derived class
    // p->fun_4(5);
}