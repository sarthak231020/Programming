#include<bits/stdc++.h>
using namespace std;


bool comp(int p1,int p2)
{
    return p1>p2;
}

int main()
{
    int N,M;
    cin>>N;
    vector<int> V(N);
    for(int i=0;i<N;i++)
    {
        cin>>V[i];
    }
    cin>>M;
    vector<int> V1(M);
    for(int i=0;i<M;i++)
    {
        cin>>V1[i];
    }

    vector<int> V2;
    sort(V.begin(),V.end(),comp);
    for(int i=0;i<N-1;i++)
    {
        if(V[i] != V[i+1])
        {
            V2.push_back(V[i]);
        }
    }
    if(V[N-1] != V[N-2])
    {
        V2.push_back(V[N-1]);
    }

    for(int i=0;i<V2.size();i++)
    {
        cout<<V2[i]<<"\t";
    }
    cout<<"\n";
    for(int i=0;i<M;i++)
    {
        if(V1[i] < V2[V2.size()-1])
        {
            cout<<V2.size()+1<<endl;
            continue;
        }
        else if(V1[i] > V2[0])
        {
            cout<<1<<endl; 
            continue;
        }
        int k = 0;
        for(int j=V2.size()-1;j>=0;j--)
        {
            if(V2[j] > V1[i])
            {   
                cout<<V2.size()-k+1<<endl;
                break;
            }
            else if(V2[j] == V1[i])
            {
                cout<<V2.size()-k<<endl;
                break;
            }
            k++;
        }
    }
    // for(int j=0;j<M;j++)
    // {
    //     int i=0;
    //     while((V1[j] > V2[i]) && (i<V2.size()))
    //     {
    //         i++;
    //     }
    //     cout<<i<<endl;
    //     continue;
    //     // for(int i=0;i<V2.size();i++)
        // {
        //     if(V1[j] < V2[i])
        //     {
        //         cout<<i+1<<endl;
        //         break;
        //     }
        // }
    // }
}

