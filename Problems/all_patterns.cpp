#include<iostream>
using namespace std; 

void pattern1() 
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) 
    {
        for(int j=1;j<=n;j++)
        {
            cout<<"*";
        }
    }
}

void pattern2() 
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) 
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 || i==n || j==1 || j==n)
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

void pattern3() 
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++) 
        {
            cout<<"*";
        }
    }
}

void pattern4() 
{
    int n;
    cin>>n;
    for(int i=n;i>=1;i++) 
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern5() 
{
    int n; 
    cin>>n;
    for(int i=n;i>=1;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j>=i)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}

void pattern6() 
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) 
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern7() 
{
    int n;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++) 
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern8() 
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) 
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" "; 
        }
        cout<<endl;
    }
}

void pattern9() 
{
    int n;
    cin>>n; 
    for(int i=n;i>=1;i++) 
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void pattern10()
{
    int n,cnt=1;
    cin>>n; 

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++) 
        {
            cout<<cnt<<" ";
            cnt++;
        }
        cout<<endl;
    }
}

void pattern11() 
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++) 
        {
            if((i+j)%2==0)
            {
                cout<<"1 ";
            }
            else
            {
                cout<<"0 "; 
            }
        }
        cout<<endl;
    }
}

void pattern12()
{
    int n;
    cin>>n; 
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<j<<" ";
        }
        for(int j=2;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern13() 
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
            cout<<"*";
        }
        cout<<endl;
    }
    
    for(int i=n;i>=1;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
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

void pattern15() 
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++) 
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main() 
{
    pattern15(); //Pyramid pattern

}