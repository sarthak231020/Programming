#include<bits/stdc++.h> 
using namespace std;

bool comp(pair<int,int> p1,pair<int,int> p2) 
{
    if(p1.first < p2.first) 
        return true;
    else if(p1.first == p2.first)
    {
        if(p1.second <= p2.second) 
            return true;
    }
    return false;
}

int main() 
{
    int N;
    cin>>N;

    vector<pair<int,int>> v1(N);

    int ele;
    for(int i=0;i<N;i++) 
    {
        cin>>ele;
        v1[i].first = ele;
    }
    for(int i=0;i<N;i++) 
    {
        cin>>ele;
        v1[i].second = ele;
    }

    sort(&v1[0],&v1[N-1],comp);

    vector<pair<int,int>> res;
    pair<int,int> p;

    p.first = v1[0].first;
    p.second = v1[0].second;

    for(int i=1;i<N;i++) 
    {
        if(p.second > v1[i].first) //It is overlapping 
        {
            p.second = max(p.second,v1[i].second);
        }
        else 
        {
            res.push_back(p);
            p.first = v1[i].first;
            p.second = v1[i].second;
        }
    }

    res.push_back(p);

    for(auto i:res)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
}

//LeetCode Solution
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> merged;
        for (auto interval : intervals) {
            // if the list of merged intervals is empty or if the current
            // interval does not overlap with the previous, simply append it.
            if (merged.empty() || merged.back()[1] < interval[0]) {
                merged.push_back(interval);
            }
            // otherwise, there is overlap, so we merge the current and previous
            // intervals.
            else {
                merged.back()[1] = max(merged.back()[1], interval[1]);
            }
        }
        return merged;
    }
};