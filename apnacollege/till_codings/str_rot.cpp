#include<iostream>
using namespace std;

// It is O(n^2) solution 
// void rotate(string &str)
// {
//     char j = str[str.length()-1];
//     for(int i=str.length()-1;i>=0;i--)
//     {
//         str[i] = str[i-1];
//     }
//     str[0] = j;
// }

// int main() 
// {
//     string str1,str2;
//     cin>>str1;
//     cin>>str2;
//     if(str1 == str2)
//     {
//         cout<<"YES"<<endl; 
//         return 0;
//     }
//     for(int i=0;i<str1.length()-1;i++)
//     {
//         rotate(str1);
//         if(str1 == str2)
//         {
//             cout<<"YES"<<endl; 
//             return 0;
//         }
//     }
//     cout<<"NO";
// }


// It is Optimized O(n1+n2) 

#include<iostream>
using namespace std;

int main() 
{
    string str1,str2;
    cin>>str1;
    cin>>str2;
    if(str1.length() != str2.length())
        cout<<"NO"<<endl;
    else
    {
        str1 = str1+str1;
        if(str1.find(str2) != string::npos)
            cout<<"YES";
        else
            cout<<"NO";
    }
}

