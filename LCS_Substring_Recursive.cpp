#include<bits/stdc++.h>
using namespace std;



int LCS(string X,string Y,int N,int M,int &Res,int Out)
{
    if(N==0 || M==0)
    {
        Res = max(Res,Out);
        return 0;
    }
    

    if(X[N-1] == Y[M-1])
    {   
        Out++;
        Res = max(Res,Out);
        return 1+LCS(X,Y,N-1,M-1,Res,Out);
    }
    else 
    {
        Out = 0;
        return max(LCS(X,Y,N,M-1,Res,Out),LCS(X,Y,N-1,M,Res,Out));
    }
}

int main() 
{
    string X,Y;
    cin>>X;
    cin>>Y;
    int N = X.length();
    int M = Y.length();
    int Res = 0;
    cout<<LCS(X,Y,N,M,Res,0)<<endl;
    cout<<Res<<endl;
    return 0;
}