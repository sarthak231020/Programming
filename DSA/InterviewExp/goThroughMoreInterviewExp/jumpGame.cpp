#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/jump-game/
// https://www.youtube.com/watch?v=Yan0cv2cLy8
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int goal = nums.size()-1;  //Initially our goal post is at N-1th postion
        int N = nums.size();
        
        for(int i=N-1;i>=0;i--) 
        {
            if(i+nums[i] >= goal) //if from ith index we can reach the goal post so just move that goalpost to ith index.
                goal = i;
        }
        
        if(goal == 0) 
            return true;
        else 
            return false;
    }
};