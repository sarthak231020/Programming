#include<iostream>
using namespace std;

int main() 
{
    string s1;
    getline(cin,s1);
    
    while(s1.length() >= 3 && s1.find("WUB") != string::npos)
    {
        int start = s1.find("WUB");
        s1.erase(start,3);
        s1.insert(start," ");
    }

    cout<<s1<<endl;
}