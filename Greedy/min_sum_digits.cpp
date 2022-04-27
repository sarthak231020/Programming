#include<iostream>
#include<vector>
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
    
}