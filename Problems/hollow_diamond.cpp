#include<iostream>
using namespace std;

// void pattern14()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n-i;j++)
//         {
//             cout<<" ";
//         }
//         if(i==1)
//         {
//             cout<<" *";
//         }
//         else
//         {
//             cout<<"*";
//             for(int j=1;j<=2*i-1;j++)
//             {
//                 cout<<" ";
//             }
//             cout<<"*";
//         }
//         cout<<endl; 
//     }   
//     for(int i=n;i>=1;i--)
//     {
//         for(int j=1;j<=n-i;j++)
//         {
//             cout<<" ";
//         }
//         if(i==1)
//         {
//             cout<<" *";
//         }
//         else
//         {
//             cout<<"*";
//             for(int j=1;j<=2*i-1;j++)
//             {
//                 cout<<" ";
//             }
//             cout<<"*";
//         }
//         cout<<endl; 
//     }   
// }

void pattern14()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            if(j==1 || j==2*i-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            if(j==1 || j==2*i-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    pattern14();
}
