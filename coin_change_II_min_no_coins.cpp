#include<bits/stdc++.h>
using namespace std;

int T1[102][1002];
int solve_top_down(vector<int> v,int N,int sum)
{
    for(int i=1;i<=N;i++)  //Sum 0 is Possible with empty subset.
    {
        T1[i][0] = 0;
    }
    //If I don't have any coins then we are assuming that infinite coins are required to produce the sum.
    for(int i=0;i<=sum;i++) // Any sum greater than is not possible with empty array.
    {
        T1[0][i] = INT_MAX-1; //we are storing int_max-1 because we dont want it to roll over after adding 1 to it.
    }
    // T1[0][0] = INT_MAX-1;
    // T1[0][0] = 0;

    for(int i=1;i<=sum;i++) 
    {
        if(i%v[0] == 0)
        {
            T1[1][i] = i/v[0];
        }
        else 
        {
            T1[1][i] = INT_MAX-1;
        }
    }

    for(int i=1;i<=N;i++) 
    {
        for(int j=1;j<=sum;j++)
        {
            if(v[i-1] > j) 
            {
                T1[i][j] = T1[i-1][j];
            }
            else 
            {
                T1[i][j] = min(T1[i][j-v[i-1]]+1,T1[i-1][j]);
            }
        }
    }
    return T1[N][sum];
}

int main()  
{
    int N,sum;
    cin>>N>>sum;

    vector<int> v(N);
    for(int i=0;i<N;i++) 
    {
        cin>>v[i];
    }
    memset(T1,-1,sizeof(T1));
    cout<<solve_top_down(v,N,sum)<<endl;

    // int min_no_coins;


    
    // cout<<"Minimum number of coins for "<<5<<" required "<<min_no_coins<<endl;

    for(int i=0;i<=N;i++)
    {
        for(int j=0;j<=sum;j++)
        {
            cout<<T1[i][j]<<" ";
        }
        cout<<endl;
    }
}