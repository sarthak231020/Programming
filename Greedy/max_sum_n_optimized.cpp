#include<iostream>
#include<vector> 
#include<algorithm>
using namespace std;

int main()
{
    int N,M;
    cin>>N>>M;
    vector<vector<int>> V(N,vector<int>(M));

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            cin>>V[i][j];
        }
    }

    int sum = *max_element(&V[N-1][0],&V[N-1][M-1]),prev=sum;
    int max_smaller;

    for(int i=N-2;i>=0;i--)
    {
        max_smaller = INT_MIN;  //This variable is for finding a maximun in i-th array which is also smaller than i+1 th array's maximum(by prev comparision)
        for(int j=0;j<M;j++)
        {
            if(V[i][j] < prev && V[i][j] > max_smaller)
            {
                max_smaller = V[i][j]; 
            }
        }
        if(max_smaller == INT_MIN)
        {
            cout<<0<<endl;
            break;
        }
        prev = max_smaller;
        sum += max_smaller;
    }
    if(max_smaller != INT_MIN)
    {
        cout<<sum<<endl;
    }

}