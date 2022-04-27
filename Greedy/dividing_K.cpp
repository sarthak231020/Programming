#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int N,K;
    cin>>N>>K;
    vector<int> V(N);
    for(int i=0;i<N;i++)
    {
        cin>>V[i];
    }

    sort(V.begin(),V.end());

    int minimum = min(K,N-K);

    int sum1 = 0,sum2 = 0;
    for(int i=0;i<minimum;i++)
    {
        sum1 += V[i];
    }
    for(int i=minimum;i<N;i++)
    {
        sum2 += V[i];
    }
    cout<<sum2-sum1<<endl;
}



