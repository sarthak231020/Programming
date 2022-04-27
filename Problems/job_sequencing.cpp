#include<iostream>
#include<vector> 
#include<algorithm>
using namespace std;

bool comp(pair<int,int> P1,pair<int,int> P2)
{
    return P1.first > P2.first;
}
//Algorithm..........
// 1) Sort all jobs in decreasing order of profit.
// 2) Iterate on jobs in decreasing order of profit.For each job , do the following :
// a)Find a time slot i, such that slot is empty and i < deadline and i is greatest.Put the job in
// this slot and mark this slot filled.
// b)If no such i exists, then ignore the job.
int main()
{
    int N;
    cin>>N;
    vector<pair<int,int>> V(N);     //first for profit and second for deadlines..............
    for(int i=0;i<N;i++) 
    {
        cin>>V[i].first>>V[i].second;
    }

    sort(V.begin(),V.end(),comp);
    vector<bool> slot(N,false);
    int profit = 0;
    for(int i=0;i<N;i++)
    {
        for(int j=min(N,V[i].second)-1;j>=0;j--)
        {
            if(slot[j] == false)
            {
                profit += V[i].first;
                slot[j] = true;
                break; 
            }
        }
    }
    cout<<profit<<endl;   
}

