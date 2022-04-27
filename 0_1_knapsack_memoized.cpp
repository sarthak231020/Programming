#include<bits/stdc++.h>
using namespace std; 

int T[102][1002];// = {0};
// memset(T,-1,102*1002*sizeof(T));

//Integer returning function
int solve_ret(vector<int> weights,vector<int> profits,int N,int capacity)
{
    if(N==0 || capacity==0)
    {
        return 0;
    }
    if(T[N][capacity] != -1)
    {
        return T[N][capacity];
    }

    if(weights[N-1] <= capacity)
    {
        return T[N][capacity] = max(profits[N-1]+solve_ret(weights,profits,N-1,capacity-weights[N-1]),solve_ret(weights,profits,N-1,capacity));
    }
    else
    {
        return T[N][capacity] = solve_ret(weights,profits,N-1,capacity);
    }
}


int main() 
{
    int N,capacity;
    cin>>N>>capacity;

    vector<int> weights(N);
    vector<int> profits(N);

    for(int i=0;i<N;i++)
    {
        cin>>weights[i];
    }

    for(int i=0;i<N;i++) 
    {
        cin>>profits[i];
    }

    memset(T,-1,sizeof(T));
    // for(int i=1;i<5;i++) 
    // {
    //     for(int j=1;j<5;j++) 
    //     {
    //         cout<<T[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int ans=0;
    // solve(weights,profits,N,capacity,0,ans);

    // cout<<ans<<endl;

    cout<<solve_ret(weights,profits,N,capacity);

    return 0;
}