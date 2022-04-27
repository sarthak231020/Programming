#include<iostream>
#include<vector>
using namespace std;

int gcd(int a,int b)
{
    if(b == 0)
        return a;
    else
        return gcd(b,b%a);
}

bool co_prime(int a,int b)
{
    if(gcd(a,b) == 1)
        return true;
    return false;
}

int main()
{
    vector<vector<int> > V(5,vector<int>(5,0));
    
    for(int i=1;i<4;i++)
    {
        for(int j=1;j<4;j++)
        {
            cin>>V[i][j];
        }
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<V[i][j]<<"\t";
        }
        cout<<"\n";
    }

    for(int i=1;i<4;i++)
    {
        for(int j=1;j<4;j++)
        {
            if(i==1 && j==1) 
            {
                for(int k=1;k<=2;k++) 
                {
                    for(int l=1;l<=2;l++)
                    {
                        if(k != 1 && l!=1)
                        {
                            if(co_prime(V[i][j],V[k][l]) == false)
                            {
                                if(k==1 && j==2)
                                {
                                    V[i-1][j] = V[i][j];
                                    V[i][j] = INT_MAX;
                                }
                                
                            }
                        }
                    }
                }
            }
        }
    }
    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         if(i==j && i!=1 && j!=1)
    //         {
    //             if(i==0 && j==0)
    //             {
    //                 if(co_prime())
    //             }                
    //         }
    //         else if(i==1 || j == 1 && i!=j)
    //         {

    //         }
    //     }
    // }

}