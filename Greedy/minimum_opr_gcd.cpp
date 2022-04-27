#include<iostream>
#include<vector>
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
    int result=0;
    for(int i=0;i<N;i++)
    {
        if(V[i] != 1 && V[i] > K)
        {
            result += min(V[i]%K,K-V[i]%K);
        }
        else
        {
            result += K-V[i];
        }
    }  
    cout<<result<<endl;
}