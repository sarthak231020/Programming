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
    vector<bool> slot(N+1,false);
    vector<int> result(N+1,0);
    int profit = 0;
    for(int i=0;i<N;i++) 
    {
        for(int j=min(N,arr[i].deadline);j>=1;j--)
        {
            if(slot[j] == false)
            {
                slot[j] = true;
                result[j] = i;
                profit += arr[i].profit;
                // cout<<arr[i].job_id<<" "<<arr[i].profit<<" "<<arr[i].deadline<<endl;
                break;
            }
        }
    }


    for(int i=1;i<=result.size();i++)
    {
        if(slot[i])
            cout<<arr[result[i]].job_id<<" "<<arr[result[i]].profit<<" "<<arr[result[i]].deadline<<endl;
    }
    cout<<profit<<endl;

    cout<<endl;
}

// bool comp(pair<int,int> ele1,pair<int,int> ele2)
// {
//     if(ele1.first > ele2.first) 
//         return true;
//     return false;
// }

// int main() 
// {
//     int N;
//     cin>>N;
//     vector<pair<int,int>> v;
//     for(int i=0;i<N;i++)
//     {
//         int pro,dead;
//         cin>>pro>>dead;
//         v.push_back(make_pair(pro,dead));
//     }

//     sort(v.begin(),v.end(),comp);

//     // for(int i=0;i<v.size();i++) 
//     // {
//     //     cout<<v[i].first<<" "<<v[i].second<<endl;
//     // }

//     // for
//     int maxi = INT_MIN;
//     for(int i=0;i<N;i++)
//     {
//         maxi = max(maxi,v[i].second); 
//     }
//     vector<int> vec(maxi,0);
//     int profit = 0;
//     for(int i=0;i<N;i++)
//     {
//         for(int j=min(N,v[i].second);j>=0;j--)
//         {
//             if(vec[j] == 0 && v[i].second<=j)
//             {   
//                 vec[j] = i;
//                 profit += v[i].first;
//                 break;
//             }
//         }
//     }
//     cout<<profit<<endl;
//     for(int i=0;i<vec.size();i++)
//     {
//         cout<<vec[i]<<" ";
//     }
//     cout<<endl;
// }