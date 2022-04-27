#include<iostream>
using namespace std; 

class student{
    public:
    string name;
    int age;
    bool gender;
    //If a Var is declared as private variable then we can simply access it by using the member functions.........
    student()
    {
        cout<<"Default Constructor\n";
    }//Default Contructor

    student(string n,int a,bool g)
    {
        name =n;
        age = a;
        gender = g;
    }//Parameterized Constructor

    student(student &a)
    {
        name = a.name;
        age = a.age;
        gender = a.gender;
    }//Copy Contructor -->Performs Deep Copy

    //If We make a copy constructor then it performs deep y icopt means no ambiguity at all 
    //If we do not create a copy constructor then C++ compilplier excitly create and performs a shallow copy 
    //Shallow copy only works well when no variable is allocated dynamically
    // https://www.geeksforgeeks.org/shallow-copy-and-deep-copy-in-c/

    ~student()
    {
        cout<<"Destructor is Called\n";
    }//Destructor

    //Operator Overloading
    bool operator == (student &a)
    {
        if(name == a.name && age==a.age && gender==a.gender)
            return true;
        else
            return false;
    }

    void printinfo(){
        cout<<name<<" "<<age<<" "<<gender<<endl;
    }
};

int main() 
{
    student a("Govinda",18,1);
    student b("Sarthak",19,1);
    a.printinfo();
    // a.name = "Govinda";
    // a.age = 18;
    // a.gender = 1;
    // cout<<a.name<<" "<<a.age<<" "<<a.gender<<endl;
    student c=a;
    c.printinfo();
    if(b == a)
    {
        cout<<"Same"<<endl;
    }
    else
    {
        cout<<"Not Same"<<endl;
    }
}   