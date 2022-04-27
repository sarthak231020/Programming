#include<iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    vector<int> v(n)

    for(int i=0;i<n;i++) 
    {
        cin>>v[i];
    }

    vector<int> ans;
    unordered_map<int ,int> mpp;
    for(int i=0;i<n;i++)
    {
        if(mpp.find(target-nums[i]) != mpp.end()) 
        {
            ans.push_back(mpp[target_nums[i]]);
            ans.push_back(i);
            return ans;
        }
        mpp[nums[i]] = i;
    }
    return ans;
}