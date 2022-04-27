#include<iostream>
#include<string>

using namespace std;

int main() 
{
    string greeting = "Hello";

    cout<<greeting<<endl;

    string fname = "Govinda";
    string lname = "Saxena";

    cout<<fname+lname<<endl;


    fname.append(lname); //also works //it is faster than '+'

    cout<<fname<<endl;


    string x = "10",y="20";
    cout<<x+y<<endl; //1020

    int z = 10;

    // cout<<x+z<<endl; // produces error

    //in order to achieve it use..
    cout<<x+to_string(z)<<endl;//1010

    //or 
    cout<<stoi(x)+z<<endl;//20


    //length

    string s="govindasaxena";

    cout<<"The size of the 's' string:"<<s.length()<<endl; //you can also use s.size() same o/p will be there
    cout<<"The size of the 's' string:"<<s.size()<<endl;


    // [] operator on strings

    cout<<s[0]<<endl;//g
    cout<<s[1]<<"  "<<s[s.size()-1]<<endl;  //o  a

    string s1 = "Hello";

    // assigning characters by indexing 

    s1[0] = 'J';
    cout<<s1<<endl;


    //Taking strings as input from the user

    string firstname;
    cout<<"Enter your first name:";
    cin>>firstname;
    
    cout<<"Your first name is:"<<firstname<<endl;

    //You are not allowed to use the cin for string containing white spaces or tabspaces 

    // string fullname;
    // cout<<"Enter your full name:";
    // cin>>fullname; //govinda saxena
    // cout<<"Your full name is:"<<fullname<<endl; //it will print only before white space
    // //govinda only will be printed
    string str;
    scanf("%[^\n]s",&str);

    cout<<"The Initial String is:"<<str<<endl;

    str.push_back('s');

    cout<<"Now The string is:"<<str<<endl;

    str.pop_back();
    cout<<"Now the string is:"<<str<<endl;

    
}