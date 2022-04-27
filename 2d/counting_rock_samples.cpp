#include<iostream>
#include<vector>
using namespace std;

int main() 
{
    int N,Q,start,end,count;
    cin>>N>>Q;
    vector<int> V(N);
    for(int i=0;i<N;i++)
    {
        cin>>V[i];
    }
    while(Q--)
    {
        count = 0;
        cin>>start>>end;
        for(int i=0;i<N;i++)
        {
            if(V[i]>=start && V[i]<=end)
                count++;
        }   
        cout<<count<<endl;
    }
}