#include<bits/stdc++.h> 
using namespace std;

double power(double X,int N) 
{
    if(N == 0) 
        return 1.0; 
    if(N%2 == 0) 
    {
        return power(X*X,N/2);
    }
    else 
    {
        return X*power(X*X,N/2);
    }
}

double powerItr(double X,int N) 
{
    double ans = 1.0;
    int temp = N;
    if(N <= 0 )
        N = -1*N;
    while(N > 0) 
    {
        if(N%2 == 0) 
        {
            X = X*X;
            N = N/2;
        }
        else 
        { 
            ans *= X;
            N--;
        }
    }
    if(temp < 0) 
        return (double)(1.0)/(double)ans;
    return ans;
}

int main() 
{
    int X,N; 
    cin>>X>>N;

    cout<<power(X,N);
}