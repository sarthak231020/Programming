//In unbounded knapsack we can add multiple instance of an item.but if we have not selected in first time then we are not allowed to select it.
// A simple change is there that we are not writing profit[i-1]+T[i-1][j-weight[i-1]] we are writing profit[i-1]+T[i][j-weight[i-1]]
#include<bits/stdc++.h>
using namespace std; 
int T[102][1002];

int solve(vector<int> weights,vector<int> profits,int N,int capacity)
{
    /* Start Converting Base Condition of Recursive Code into iterative(top down) {it's called initialization} */
    for(int i=0;i<=N;i++) 
    {
        T[i][0] = 0;
    }
    for(int i=0;i<=capacity;i++) 
    {
        T[0][i] = 0;
    }
    /*End of Base Condition Code */

    for(int i=1;i<=N;i++) 
    {
        for(int j=1;j<=capacity;j++) 
        {
            if(weights[i-1] <= j)
            {
                T[i][j] = max(profits[i-1]+T[i][j-weights[i-1]],T[i-1][j]);
            }
            else
            {
                T[i][j] = T[i-1][j];
            }
        }
    }

    return T[N][capacity];  
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

    cout<<solve(weights,profits,N,capacity)<<endl;

    //For depicting what is done otherwise just converting recursive to iterative one works fine.
    for(int i=0;i<=N;i++) 
    {
        for(int j=0;j<=capacity;j++) 
        {
            cout<<T[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}