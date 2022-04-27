#include<bits/stdc++.h> 
using namespace std; 

class Solution {
public:
    void generateAllPermutations(vector<vector<int>> &ans,map<int,bool> &mp,vector<int> &out,vector<int> nums,int N) 
    {
        if(out.size() == N) 
        {
            ans.push_back(out);
            return;
        }
        
        for(int i=0;i<N;i++) 
        {
            if(mp[i] == false)
            {
                out.push_back(nums[i]);
                mp[i] = true;
                generateAllPermutations(ans,mp,out,nums,nums.size());
                out.pop_back();
                mp[i] = false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        map<int,bool> mp;
        vector<int> out;
        for(int i=0;i<nums.size();i++) 
        {
            mp[i] = false; //this works since all elements are unique.
            //Otherwise you can also use the index as key directly.
        }
        
        generateAllPermutations(ans,mp,out,nums,nums.size());
        
        return ans;
    }
};