// #include<iostream>

// using namespace std;

// template<class T>

// class A
// {
//     public:
//         T a[2];
//         T add();
//         A();
// };

// A::A()
// {
//     cin>>a[0]>>a[1];
// }

// template <class T>

// T A.add()
// {
//     return a[0]+a[1];
// }

// int main() 
// {
//     A<int> intobj;
//     cout<<intobj.add();
// }


#include<iostream>
using namespace std;

template <class T>

class A
{
    public:
        T a,b;
        A()
        {
            cin>>a>>b;
        }
        T add()
        {
            return a+b;
        }
};

int main()
{
    A<int> intobj;
    cout<<"The Sum is:"<<intobj.add()<<endl;
    A<float> floatobj;
    cout<<"The sum is:"<<floatobj.add()<<endl;

}

