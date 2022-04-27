// Encapsulation is hiding the sensitive data
//Protected data members can be used in the derived class 
#include<iostream>
using namespace std;
class car
{
    public:
        int a;
        void funcA()
        {
            cout<<"funcA get called\n";
        }
    private:
        int b;
        void funcB() 
        {
            cout<<"funcB get called\n";
        }
    protected:
        int c;
        void funcC()
        {
            cout<<"funcC get called\n";
        }
};
int main()
{
    car a;
    a.funcA();
    // a.funcB();//Can not Accessed here ERROR
    // a.funcC();//Protected members can only be used in the derived class
}
