#include<bits/stdc++.h>
using namespace std;

struct job
{
    int job_id;
    int profit;
    int deadline;
    job()
    {

    }
    job(int i,int j,int k)
    {
        job_id = i;
        profit = j;
        deadline = k;
    }
};

bool comp(struct job ele1,struct job ele2)
{
    if(ele1.profit > ele2.profit)
    {
        return true; 
    }
    return false;
}

int maxDeadline(struct job arr[],int n)
{
    int ans = INT_MIN;
    for(int i=0;i<n;i++)
    {
        ans = max(ans,arr[i].deadline);
    }
    return ans;
}

struct DisjointSet
{
    int *parent;

    DisjointSet(int n) 
    {
        parent = new int[n+1];

        for(int i=0;i<=n;i++) 
        {
            parent[i] = i;
        }
    }

    int find(int s)   //It returns maximum available set here 0->No available set,1->{0,1},2->{1,2},3->{2,3} and so on.
    {
        if(s == parent[s]) 
            return s;
        return parent[s] = find(parent[s]);
    }

    void union1(int u,int v)  //It sets u as parent of v.
    {
        parent[v] = u;
    }
};

int main()
{
    int N;
    cin>>N;
    struct job arr[N];
    for(int i=0;i<N;i++)
    {
       int j_id,pro,dead;
       cin>>j_id>>pro>>dead;
       struct job obj(j_id,pro,dead);
       arr[i] = obj; 
    }

    // cout<<"before sorting array"<<endl; 
    // for(int i=0;i<N;i++)
    // {
    //     cout<<arr[i].job_id<<" "<<arr[i].profit<<" "<<arr[i].deadline<<endl;
    // }

    sort(arr,arr+N,comp);
    // cout<<"after sorting array"<<endl;
    // for(int i=0;i<N;i++)
    // {
    //     cout<<arr[i].job_id<<" "<<arr[i].profit<<" "<<arr[i].deadline<<endl;
    // }

    int maxdead = maxDeadline(arr,N);
    vector<int> result;
    DisjointSet obj(maxdead);
    int profit = 0;
    for(int i=0;i<N;i++)
    {
        int available = obj.find(arr[i].deadline);
        if(available > 0)
        {
            obj.union1(arr[i].deadline-1,arr[i].deadline);
            profit += arr[i].profit;
            result.push_back(i);
        }
    }

    cout<<profit<<endl;

    for(int i=0;i<result.size();i++)
    {
        cout<<arr[result[i]].job_id<<" "<<arr[result[i]].profit<<" "<<arr[result[i]].deadline<<endl;
    }

}