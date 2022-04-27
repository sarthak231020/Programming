// #include<iostream> 
// #include<string>
// using namespace std;
// string rev;

// void reverse(string s,int i,int n)
// {
//     if(i==n-1)
//     {
//         rev.append(sizeof(char),s[i]);
//         return;
//     }
//     reverse(s,i+1,n);
//     rev.append(sizeof(char),s[i]);
// }

// int main() 
// {
//     string s;
//     getline(cin,s);
//     reverse(s,0,s.length());
//     cout<<rev<<endl;
// }


#include<iostream>
using namespace std;

void reverse(string s)
{
    if(s.length() == 0)  // Base case
    {
        return;
    }

    string ros = s.substr(1);//It will give us the rest of the string by omitting first character....
    reverse(ros);
    cout<<s[0];
}

int main() 
{
    reverse("binod");
}