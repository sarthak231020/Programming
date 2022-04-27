#include<iostream> 
#include<vector>
#include<algorithm>
using namespace std;

bool comp(pair<float,float> P1,pair<float,float> P2)
{
    float r1 = P1.first/P1.second;
    float r2 = P2.first/P2.second;

    return r1>r2;
}

int main()
{
    int N,C;  //N--> No of objects C-->Capacity.......
    cin>>N>>C;
    vector<pair<float,float> > V(N);   
    pair<float,float> P;
    for(int i=0;i<N;i++)
    {
        cin>>P.first>>P.second;
        V[i].first = P.first;
        V[i].second = P.second;
    }

    sort(V.begin(),V.end(),comp);
    float profit = 0.0;
    int i;
    for(i=0;i<N;i++)
    {
        if(C>0 && V[i].second <= C)
        {
            C = C-V[i].second;
            profit += V[i].first;
        }
        else
        {
            break;
        }
    }

    if(C > 0)
    {
        profit +=  V[i].first*(C/V[i].second);
    }

    cout<<"FINAL PROFIT:"<<profit<<endl; 
}
