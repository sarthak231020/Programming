#include<iostream>
using namespace std;
int main()
{
    //Pattern 1
    // int row,col;
    // cin>>row>>col;
    // for(int i=0;i<row;i++)
    // {
    //     for(int j=0;j<col;j++)
    //     {
    //         cout<<"*";
    //     }    
    //     cout<<endl;
    // }

    //Pattern2
    // int row,col;
    // cin>>row>>col;
    // for(int i=0;i<row;i++)
    // {
    //     for(int j=0;j<col;j++)
    //     {
    //         if(i==0 || i==row-1 || j==0 || j==col-1)
    //         {
    //             cout<<"*";
    //         }
    //         else
    //             cout<<" ";
    //     }
    //     cout<<endl;
    // }

    //Pattern3
    // int row;
    // cin>>row;
    // for(int i=0;i<row;i++)
    // {
    //     for(int j=0;j<=i;j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //Pattern4
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=n;j>i;j--)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // Pattern5
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         if(j >= n-i-1)
    //             cout<<"*";
    //         else
    //             cout<<" ";
    //     }
    //     cout<<endl;
    // }

    //Pattern6
    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=i;j++)
    //     {
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
    //Pattern6
    // int n;
    // cin>>n;
    // for(int i=n;i>=1;i--)
    // {
    //     for(int j=1;j<=i;j++)
    //     {
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    //Pattern7
    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=i;j++)
    //     {
    //         cout<<i;
    //     }
    //     cout<<endl;
    // } 

    //Pattern8
    // int n;
    // cin>>n;
    // for(int i=n;i>=1;i--)
    // {
    //     for(int j=1;j<=i;j++)
    //     {
    //         cout<<(n-i+1);
    //     }
    //     cout<<endl;
    // }   

    //Pattern9
    // int n;
    // cin>>n;
    // int count = 1; 
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=i;j++)
    //     {
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }

    //Pattern10
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<=i;j++)
    //     {
    //         if((i+j)%2 == 0)
    //             cout<<"1 ";
    //         else
    //             cout<<"0 ";
    //     }
    //     cout<<endl;
    // }

    // Pattern11
    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++)
    // {
    //     int k=i;
    //     for(int j=1;j<=n;j++)
    //     {
    //         if(j>=(n-i+1))
    //             cout<<k--<<" ";
    //         else    
    //             cout<<"  ";
    //     }
    //     for(int j=2;j<=i;j++)   
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    //Pattern11

    // int i,j,r;
    // cin>>r;
    // for(int i=0;i<=r;i++)
    // {
    //     int k=i;
    //     for(j=1;j<=(r-i);j++)
    //     {
    //         cout<<"  ";
    //     }
    //     for(;j<=r;j++)
    //     {
    //         cout<<k<<" ";
    //         k--;
    //     }
    //     k = 1;
    //     for(;j<(r+i);j++)
    //     {
    //         k++;
    //         cout<<k<<" ";
    //     }
    //     cout<<endl;
    // }

    //Patterns 12
    // int r;
    // cin>>r;
    // for(int i=1;i<=r;i++)
    // {
    //     int j;
    //     for(j=1;j<=(r-i);j++)
    //     {
    //         cout<<" ";
    //     }
    //     for(;j<=r;j++)
    //     {
    //         cout<<"*";
    //     }
    //     for(;j<(r+i);j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int i=r;i>=1;i--)
    // {
    //     int j;
    //     for(j=1;j<=(r-i);j++)
    //     {
    //         cout<<" ";
    //     }
    //     for(;j<=r;j++)
    //     {
    //         cout<<"*";
    //     }
    //     for(;j<(r+i);j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //Pattern 13
    // int r;
    // cin>>r;
    // for(int i=1;i<=r;i++)
    // {
    //     int j;
    //     for(j=1;j<=(r-i);j++)
    //     {
    //         cout<<" ";
    //     }
    //     cout<<"*";
    //     j++;
    //     for(;j<=r;j++)
    //     {
    //         cout<<" ";
    //     }
    //     for(;j<(r+i-1);j++)
    //     {
    //         cout<<" ";
    //     }
    //     if(i>1)
    //         cout<<"*";
    //     cout<<endl;
    // }
    // for(int i=r;i>=1;i--)
    // {
    //     int j;
    //     for(j=1;j<=(r-i);j++)
    //     {
    //         cout<<" ";
    //     }
    //     cout<<"*";
    //     j++;
    //     for(;j<=r;j++)
    //     {
    //         cout<<" ";
    //     }
    //     for(;j<(r+i-1);j++)
    //     {
    //         cout<<" ";
    //     }
    //     if(i>1)
    //         cout<<"*";
    //     cout<<endl;
    // }

    //Pattern13 by another method
    // int r;
    // cin>>r;
    // int j;
    // for(int i=1;i<=r;i++)
    // {
    //     for(j=1;j<=(r-i);j++)
    //     {
    //         cout<<" ";
    //     }
    //     for(;j<=(r+i-1);j++)
    //     {
    //         if(j==(r-i+1) || j==(r+i-1))
    //             cout<<"*";
    //         else
    //             cout<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=r;i>=1;i--)
    // {
    //     for(j=1;j<=(r-i);j++)
    //     {
    //         cout<<" ";
    //     }
    //     for(;j<=(r+i-1);j++)
    //     {
    //         if(j==(r-i+1) || j==(r+i-1))
    //             cout<<"*";
    //         else
    //             cout<<" ";
    //     }
    //     cout<<endl;
    // }
    
    //Pattern 14
    int r;
    cin>>r;
    // int j;
    // for(int i=1;i<=r;i++)
    // {
    //     for(j=1;j<=(r-i);j++)
    //     {
    //         cout<<"*";
    //     }
    //     for(;j<=(r+i-1);j++)
    //     {
    //         if(j==(r-i+1) || j==(r+i-1))
    //             cout<<"*";
    //         else
    //             cout<<" ";
    //     }
    //     for(;j<=2*r-1;j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }   
    // for(int i=r;i>=1;i--)
    // {
    //     for(j=1;j<=(r-i);j++)
    //     {
    //         cout<<"*";
    //     }
    //     for(;j<=(r+i-1);j++)
    //     {
    //         if(j==(r-i+1) || j==(r+i-1))
    //             cout<<"*";
    //         else
    //             cout<<" ";
    //     }
    //     for(;j<=2*r-1;j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // } 

    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=(2*r-1);j++)
        {
            if(j<=(r-i+1) || j>=(r+i-1))
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    for(int i=r;i>=1;i--)
    {
        for(int j=1;j<=(2*r-1);j++)
        {
            if(j<=(r-i+1) || j>=(r+i-1))
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
       
}