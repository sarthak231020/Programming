#include<iostream> 
#include<vector>
#include<algorithm>
using namespace std; 

bool comp(int a,int b)
{
    return a>b;
}
int main()
{
    int N,M;
    cin>>N>>M;
    vector<vector<int>> V(N,vector<int> (M));

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            cin>>V[i][j];
        }
    }

    for(int i=0;i<N;i++)
    {
        sort(V[i].begin(),V[i].end(),comp);
    }

    int sum = V[N-1][0],prev = V[N-1][0],j;

    for(int i=N-2;i>=0;i--)
    {
        for(j=0;j<M;j++)
        {
            if(V[i][j] < prev)
            {
                prev = V[i][j];
                sum += prev;
                break;
            }
        }
    }    
    
    if(j == M)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<sum<<endl;
    }
    
}