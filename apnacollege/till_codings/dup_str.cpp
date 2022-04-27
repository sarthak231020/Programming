#include<iostream>
#include<string>
#include<map>
using namespace std;

// int main() 
// {
//     string S;
//     getline(cin,S);

//     map<char,int> m;

//     for(int i=0;i<S.length();i++)
//     {
//         m[S[i]]++;
//     }

//     for(auto it:m)
//     {
//         if(it.second > 1)
//             cout<<it.first<<", count = "<<it.second<<"\n";
//     }

// }
 
//Optimized Approach O(n) Using Hashing

#include<iostream>
#include<string>
using namespace std;
#define No_of_char 256 //i.e total number of ascii values

int main() 
{
    string str;
    getline(cin,str);

    int *count = (int *)calloc(No_of_char,sizeof(int)); //It Initializes all with 0.
    // cout<<count[0]<<" "<<count[1]<<endl;
    for(int i=0;i<str.length();i++)
    {
        count[int(str[i])]++;
    }

    for(int i=0;i<No_of_char;i++)
    {
        if(count[i] > 1)
            cout<<char(i)<<" "<<count[i]<<endl;
    }

    for(int i=0;i<str.length();i++)
    {
        cout<<int(str[i])<<" ";
        // cout<<str[i]<<" ";
    }

}