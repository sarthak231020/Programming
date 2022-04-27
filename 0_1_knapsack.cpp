#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> weights,vector<int> profits,int N,int capacity,int out,int &ans)
{

    if(N==0 || capacity == 0)
    {
        ans = max(ans,out);
        return;
    }

    if(weights[N-1] > capacity)
    {
        solve(weights,profits,N-1,capacity,out,ans);
    }
    else
    {
        solve(weights,profits,N-1,capacity-weights[N-1],out+profits[N-1],ans);
        solve(weights,profits,N-1,capacity,out,ans);
    }

}


//Integer returning function
int solve_ret(vector<int> weights,vector<int> profits,int N,int capacity)
{
    if(N==0 || capacity==0)
    {
        return 0;
    }

    if(weights[N-1] <= capacity)
    {
        return max(profits[N-1]+solve_ret(weights,profits,N-1,capacity-weights[N-1]),solve_ret(weights,profits,N-1,capacity));
    }
    else
    {
        return solve_ret(weights,profits,N-1,capacity);
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

    int ans=0;
    // solve(weights,profits,N,capacity,0,ans);

    // cout<<ans<<endl;

    cout<<solve_ret(weights,profits,N,capacity);

    return 0;
}

