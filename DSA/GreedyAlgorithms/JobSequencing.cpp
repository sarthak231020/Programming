#include<bits/stdc++.h>
using namespace std;

struct job
{
    int id;
    int deadline;
    int profit;
};

bool comp(job j1,job j2) 
{
    if(j1.profit > j2.profit)
        return true;
    return false;
}

int main() 
{
    int N; 
    cin>>N; 

    job Jobs[N+1];

    for(int i=1;i<=N;i++) 
    {
        Jobs[i].id = i;
    }

    int ele;
    for(int i=1;i<=N;i++) 
    {
        cin>>ele;
        Jobs[i].deadline = ele;
    }

    for(int i=1;i<=N;i++) 
    {
        cin>>ele;
        Jobs[i].profit = ele;
    }

    sort(&Jobs[1],&Jobs[N+1],comp);

    int maxi = Jobs[1].deadline;
    for(int i=2;i<=N;i++) 
    {
        maxi = max(maxi,Jobs[i].deadline);
    }

    vector<int> occupied(maxi+1);

    for(int i=0;i<=occupied.size();i++) 
    {
        occupied[i] = -1;
    }
    int count = 0;
    int profit = 0;
    for(int i=1;i<=N;i++) 
    {
        int j=Jobs[i].deadline;
        while(occupied[j] != -1 && j >1 ) 
        {
            j--;
        }
        if(j >= 1 && occupied[j] == -1) 
        {
            occupied[j] = Jobs[i].id;
            count++;
            profit += Jobs[i].profit;
        }
    }

    cout<<"Number of Jobs "<<count<<" "<<profit<<endl;

    for(int i=0;i<=occupied.size()-1;i++) 
    {
        cout<<occupied[i]<<" ";
    }
    return 0;
}