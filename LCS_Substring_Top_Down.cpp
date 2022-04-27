#include<bits/stdc++.h>
using namespace std; 

int T[1002][1002];

int solve(string X,string Y,int N,int M)
{
    int result = INT_MIN;
    for(int i=0;i<=N;i++) 
    {
        T[i][0] = 0;
    }
    for(int i=0;i<=M;i++)
    {
        T[0][i] = 0; 
    }

    for(int i=1;i<=N;i++) 
    {
        for(int j=1;j<=M;j++) 
        {
            if(X[i-1]==Y[j-1]) 
            {
                T[i][j] = 1+T[i-1][j-1];
                result = max(result,T[i][j]);
            }
            else 
            {
                T[i][j] = 0;
            }
        }
    }
    return result; 
}


int main() 
{
    string X,Y;
    cin>>X;
    cin>>Y;
    memset(T,-1,sizeof(T));
    int N=X.length();
    int M=X.length();

    cout<<solve(X,Y,N,M)<<endl;

    for(int i=0;i<=N;i++) 
    {
        for(int j=0;j<=M;j++) 
        {
            cout<<T[i][j]<<" ";
        }
        cout<<endl;
    }
}