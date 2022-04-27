#include<iostream>
#include<string>
#include<algorithm>
#define MOD 1000000007;
using namespace std;

int is_palindromic(string str)
{
    string rev = str;
    reverse(str.begin(),str.end());
    return (str==rev);
}

int main() 
{
    // int T;
    // cin>>T;
    // while(T--)
    // {
        int N,K,count=0;
        string str,str2;
        cin>>N>>K;
        cout<<N<<"  "<<K<<endl;
        getline(cin,str);
        // cin.ignore();
        getline(cin,str2);
        // string str2(N,'a');
        cout<<str2<<endl;
        do
        {
            cout<<str2<<endl;
            // if(is_palindromic(str2))
            // {
            //     if(str2.compare(str) < 0)
            //         count = (count+1)%MOD;
            // }
        }while(next_permutation(&str2[0],&str2[str2.length()-1]));
        cout<<count<<endl;
    // }
}