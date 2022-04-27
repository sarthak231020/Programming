#include<bits/stdc++.h>
using namespace std;
    // N   SUM
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
    
    return T[N][sum] = solve(v,N-1,sum-v[N-1]) || solve(v,N-1,sum);

}

int T1[102][1002];
int solve_top_down(vector<int> v,int N,int sum)
{
    T1[0][0] = true; //sum 0 is possible with empty subset if array contains no items.
    for(int i=1;i<=sum;i++) // Any sum greater than is not possible with empty array.
    {
        T1[0][i] = false;
    }
    for(int i=1;i<=N;i++)  //Sum 0 is Possible with empty subset.
    {
        T1[i][0] = true;
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
                T1[i][j] = T1[i-1][j-v[i-1]]||T1[i-1][j];
            }
        }
    }
    return T1[N][sum];
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
    memset(T1,-1,sizeof(T1));
    cout<<solve_top_down(v,N,11)<<endl;

    for(int i=0;i<=N;i++)
    {
        for(int j=0;j<=11;j++)
        {
            cout<<T1[i][j]<<" ";
        }
        cout<<endl;
    }
}