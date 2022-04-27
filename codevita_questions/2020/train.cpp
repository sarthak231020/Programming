#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;

bool comp(pair<int,int> P1,pair<int,int> P2)
{
    return P1.second<P2.first;
}

int main()
{
    int N;
    cin>>N;
    vector<pair<int,int>> V(N);
    for(int i=0;i<N;i++)
    {
        cin>>V[i].first>>V[i].second;
        V[i].second = V[i].first+V[i].second;
    }

    sort(V.begin(),V.end());

    int stations = 1;
    bool flag = true;
    for(int i=1;i<N;i++)
    {
        flag = false;
        int j = i-1;
        while(j != -1)
        {
            if(V[i].first < V[j].second)
            {
                flag = true;
                break;
            }
            j--;

            if(flag == false)
            {
                stations += 1;
            }
        }
    }
    cout<<stations<<endl;
}