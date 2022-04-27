#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
// The cin.clear() clears the error flag on cin (so that future I/O operations will work correctly), and then cin.ignore(10000, '\n') skips to the next newline (to ignore anything else on the same line as the non-number so that it does not cause another parse failure). It will only skip up to 10000 characters, so the code is assuming the user will not put in a very long, invalid line

int main() 
{
    string str; //Declares a String of Length 10.
    str = "Govinda";

    cout<<str<<endl;

    string S(5,'n');
    cout<<S<<endl;

    string abc(str); //It Copies str to abc string.
    cout<<abc<<endl;

    string s1;
    cin>>s1;
    cin.ignore(); //To ignore Newline otherwise getline will not work.
    cout<<s1<<endl;
    string s2;
    getline(cin,s2); //It Does accept the Whitespaces.

    cout<<s2<<endl;


    //Functions

    string s3="fam",s4="ily";
    s3.append(s4); //Is same as s1=s1+s2;
    cout<<s3<<endl;

    string s5="nincompoop";
    // s5.assign("Govinda"); //IS same as s5="Govinda";
    cout<<s5<<endl;

    cout<<s5.at(3)<<endl; //s5[3]

    // s5.clear(); //O(1)
    if(s5.empty())
        cout<<"String is Empty";
    cout<<endl;
    string s6 = "abc",s7="xyz";
    cout<<s6.compare(s7)<<endl; //If value is greater than 0 it means s7 is greater
    //-ve s6 is greater  0 -> both are equal

    // s5.erase(3,3);
    // cout<<s5<<endl;

    // s5.find("com");

    s5.insert(3,"q");
    cout<<s5<<endl;
    s5.erase(3,1);
    cout<<s5<<endl;

    cout<<s5.length()<<endl;

    s5.c_str(); //To append "/0" at the end of string

    s5.resize(10);
    cout<<s5<<endl;

    cout<<s5.substr(3,4)<<endl;

    string s="786";
    int x = stoi(s);
    cout<<x+2<<endl;

    cout<<to_string(x)+"2"<<endl; 

    string s8="xhddwjjsssca";
    sort(s8.begin(),s8.end());

    cout<<s8<<endl;

}