#include<iostream>
#include<vector>
using namespace std; 

int main()
{
    long long T,N,K;
    cin>>T;
    while(T--)
    {
        cin>>N>>K;
        vector<long long> V(N);
        int i=0;
        while(N--)
        {
            cin>>V[i];
            i++;
        }
        for(long long i=0;i<V.size();i++)
        {
            if(V[i]%K == 0)
            {
                cout<<1;
            }
            else
            {
                cout<<0;
            }
        }
        cout<<endl;
    }
}