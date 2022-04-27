#include<iostream>

using namespace std;

// int main()
// {
//     int row,col;
//     cin>>row>>col;

//     for(int i=0;i<row;i++)
//     {
//         for(int j=0;j<col;j++)
//         {
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
// }

// int main()
// {
//     int row,col;
//     cin>>row>>col;
//     for(int i=0;i<row;i++) 
//     {
//         for(int j=0;j<col;j++)
//         {
//             if((i==0)||(i==row-1)||(j==0)||(j==col-1))
//                 cout<<"*";
//             else
//                 cout<<" ";
//         }
//         cout<<"\n";
//     }
// }

// int main()
// {
//     int n;
//     cin>>n; 
//     for(int i=n;i>0;i--)
//     {
//         for(int j=i;j>0;j--)
//         {
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
// }

// int main()
// {
//     int n;
//     cin>>n; 
//     for(int i=n;i>=1;i--)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             if(j>=i)
//             {
//                 cout<<"*";
//             }
//             else
//             {
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             if(j<=i)
//                 cout<<i;
//         }
//         cout<<endl;
//     }
// }

int main()
{
    int n,count=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}