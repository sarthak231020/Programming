#include<bits/stdc++.h>
using namespace std;


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

    int sum = 0;
    for(int i=0;i<N;i++) 
    {
        sum += v[i];
    }
    memset(T1,-1,sizeof(T1));
    int partition;
    if(sum%2 != 0)
    {
        partition = 0;
        cout<<"Equal sum partitioning is not possible with this set."<<endl;
    }
    else 
    {
        partition = solve_top_down(v,N,sum/2);
        if(partition == true)
        {
            cout<<"Yes This set have Equal sum partitioning"<<endl;
        }
        else 
        {
            cout<<"Equal sum partitioning is not possible with this set."<<endl;
        }
    }

    return 0;
}