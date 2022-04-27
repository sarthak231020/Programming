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
                T1[i][j] = (T1[i-1][j-v[i-1]]+T1[i-1][j]);//Just Change || to + and counting will be done
            }
        }
    }
    return T1[N][sum];
}

int main() 
{
    int N,diff;
    // cout<<"Enter Number of Elements and Difference:"<<endl;
    cin>>N>>diff;
    // cout<<"Enter the values of array:"<<endl;
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
    int count = 0;
    // int s1;
    cout<<solve_top_down(v,N,(sum+diff)/2)<<endl;

    for(int s1=sum/2;s1>=0;s1--)  //Suppose s1 is the smaller one So S2=Sum-S1; and we have to minimize (S2-S1) which can also be written as (Range-S1-S1) ->(Range-2S1)
    {
        if(T1[N-1][s1])
        {
            if(sum-2*s1 == diff) 
            {
                count++;
            }
        }
    }
    // cout<<s1<<" "<<sum-s1<<endl;
    cout<<count<<endl;


    return 0;
}