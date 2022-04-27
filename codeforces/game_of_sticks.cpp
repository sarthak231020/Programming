// #include<bits/stdc++.h>
// using namespace std;

// int main() 
// {
//     int n,m;
//     cin>>n>>m;

//     if(n%2 == 1 && m%2==1)
//     {
//         cout<<"Akshat"<<endl;
//     }
//     else if(n%2 == 0 && m%2==0)
//     {
//         cout<<"Malvika"<<endl;
//     }
//     else if(n%2==1 && m%2==0)
//     {
//         cout<<"Malvika"<<endl;
//     }
//     else if(n%2==0 && m%2==1)
//     {
//         cout<<"Malvika"<<endl;
//     }
// }

#include<iostream>
using namespace std;

int main() 
{
    int n,m;
    cin>>n>>m;

    if(min(n,m)%2 == 0) 
    {
        cout<<"Akshat"<<endl;
    }
    else
    {
        cout<<"Malvika"<<endl;
    }
    
}