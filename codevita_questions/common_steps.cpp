#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int N;
    cin>>N;
    vector<int> V; 
    V.emplace_back(1);   // for N=0;
    V.emplace_back(1);   // for N=1;
    V.emplace_back(2);

    for(int i=3;i<=N;i++)
    {
        V[i] = V[i-3]+V[i-2]+V[i-1];
    }

    cout<<V[N]<<"\n";
}