#include<bits/stdc++.h>
using namespace std;

int T1[102][1002];
int solve_top_down(vector<int> v,int N,int sum)
{
    T1[0][0] = 1; //sum 0 is possible with empty subset if array contains no items.
    for(int i=1;i<=sum;i++) // Any sum greater than is not possible with empty array.
    {
        T1[0][i] = 0;
    }
    for(int i=1;i<=N;i++)  //Sum 0 is Possible with empty subset.
    {
        T1[i][0] = 1;
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
                T1[i][j] = (T1[i][j-v[i-1]]+T1[i-1][j]);//Just Change || to + and counting will be done
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
    memset(T1,-1,sizeof(T1));
    cout<<solve_top_down(v,N,5)<<endl;

    // for(int i=0;i<=N;i++)
    // {
    //     for(int j=0;j<=11;j++)
    //     {
    //         cout<<T1[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}