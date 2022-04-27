#include<iostream>

using namespace std;

template <typename T>
T add(T a,T b)
{
    return a+b;
}

int main()
{
    int a=10,b=20;
    float x=10.20,y=20.40;

    cout<<add<int>(a,b)<<endl;
    cout<<add<float>(x,y)<<endl;
    return 0;
}

//Use g++ functional_template.cpp -o functional_template in order to compile the code
//./functional_template in order to run the program

