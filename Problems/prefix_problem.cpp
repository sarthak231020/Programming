#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,Q,ele,temp;
    cin>>N>>Q;
    temp = N;
    vector<int> V;
    while(temp--)
    {
        cin>>ele;
        V.emplace_back(ele);
    }
    vector<int> P(N+1);
    P[0] = V[0];
    for(int i=1;i<V.size();i++)
        P[i] = V[i]+P[i-1];
    int q,beg,end;
    while(Q--)
    {
        cin>>q>>beg>>end;
        beg = beg-1;
        int s=0;
        if(q == 1)
        {
            for(int i=beg;i<end;i++)
            {
                if(V[i] == 0)
                    V[i] = 1;
                else
                    V[i] = 0;
            }

            P[0] = V[0];
            for(int i=1;i<V.size();i++)
                P[i] = V[i]+P[i-1]; 
        }
        else if(q == 2)
        {
            for(int i=beg;i<end;i++)
            {
                s += P[i];
            }
            cout<<s<<endl;
        }
    }
}