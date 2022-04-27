#include<bits/stdc++.h>
using namespace std;
int T[102][1002];
bool solve(vector<int> v,int N,int sum) 
{
    if(sum == 0) 
    {
        return true; 
    }
    if((N==0 && sum != 0) || sum < 0)
    {
        return false;
    }
    if(T[N][sum] != -1)
    {
        return T[N][sum];
    }

    if(sum-v[N-1] >= 0)
        return T[N][sum] = solve(v,N-1,sum-v[N-1]) || solve(v,N-1,sum);
    else 
        return T[N][sum] = solve(v,N-1,sum);

}

int main()  
{
    int N;
    cin>>N;

    vector<int> v(N);
    for(int i=0;i<N;i++) 
    {
        cin>>v[i];
    }
    memset(T,-1,sizeof(T));
    cout<<solve(v,N,11)<<endl;

    for(int i=0;i<=N;i++) 
    {
        for(int j=0;j<=11;j++) 
        {
            cout<<T[i][j]<<" ";
        }
        cout<<endl;
    }
}