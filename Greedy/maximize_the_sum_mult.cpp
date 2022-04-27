#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int N;
    cin>>N;
    vector<int> V(N);
    for(int i=0;i<N;i++)
    {
        cin>>V[i];
    }
    sort(V.begin(),V.end());

    int sum = 0;
    for(int i=0;i<N;i++)
    {
        sum += V[i]*i;
    }

    cout<<sum<<endl;
}