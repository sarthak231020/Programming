#include<bits/stdc++.h> 
using namespace std;

string func()
{
    int N,X;
    cin>>N>>X;
    vector<int> A(N);
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }

    if(N==1)
    {
        if(X == A[0])
        {
            return "YES";
        }
        else
        {
            return "NO";
        }
    }
    vector<int> pre(A.size());
    pre[0] = A[0];
    for(int i=1;i<A.size();i++)
    {
        pre[i] = abs(pre[i-1]+A[i]);
    }
    for(int i=1;i<A.size();i++) 
    {
        if(A[i] == -10 && i!=A.size()-1)
        {
            if(((pre[i-1]+1)==X) || ((pre[i-1]-1) == X) || (pre[i-1] == X))
            {
                return "NO";
            }
        }
        else if(A[i] == -10 && i==A.size()-1)
        {
            if(pre[i-1] == X)
            {
                return "NO";
            }
            else if((pre[i-1]+1==X)|| (pre[i-1]-1 == X))
            {
                return "YES";
            }
        }
    }
    return "NO";
}
int main() 
{
    cout<<func()<<endl;
}