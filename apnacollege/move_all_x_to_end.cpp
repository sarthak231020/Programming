// #include<iostream>
// using namespace std; 

// void shift_x(string s,int n,int i)
// {
//     if(i == n)
//     {
//         cout<<s<<endl;
//         return ;
//     }
//     if(s[i] == 'x')
//     {
//         cout<<"if get executed :"<<i<<endl;
//         s.erase(i,1);
//         s = s+"x";
//         shift_x(s,n,i);
//     }
//     else
//     {
//         cout<<"else gets executed :"<<i<<endl;
//         shift_x(s,n,i+1);
//     }
// }

// int main() 
// {
//     string s;
//     getline(cin,s);
//     shift_x("axxbdxcefxhix",s.length(),0);
// }


#include<iostream>
using namespace std;

string shift_x(string s)
{
    if(s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = shift_x(s.substr(1));
    if(ch == 'x')
    {
        return ans+ch;
    }
    return ch+ans;
}

int main() 
{
    string s;
    getline(cin,s); 
    cout<<shift_x(s)<<endl;
}