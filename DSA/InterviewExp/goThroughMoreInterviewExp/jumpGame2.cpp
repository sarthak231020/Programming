#include<bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        
        
        int goal = nums.size()-1;
        int N = nums.size();
        int i;
        int cnt = 0;
        while(goal != 0) 
        {   
            int mini = goal;
            for(int i=goal-1;i>=0;i--) 
            {
                if(i+nums[i] >= goal) 
                    mini = min(mini,i);
            }
            cnt++;
            goal = mini;
        }
        return cnt;
        // queue<int> q;
        // q.push(0);
        // int N = nums.size();
        // vector<int> visited(N,0);
        // visited[0] = 1;
        // while(!q.empty()) 
        // {
        //     int node = q.front();
        //     q.pop();
        //     if(node == N-1) 
        //         return true;
        //     for(int i=1;i<=v[node];i++) 
        //     {
        //         q.push(node+i);
        //         visited[node+i] = 1;
        //         if(visited[N-1] == 1)
        //             return true;
        //     }
        // }
        // return false;
    }
};

// https://www.youtube.com/watch?v=dJ7sWiOoK7g
//More Optimised One 
class Solution1 {
public:
    int jump(vector<int>& nums) {
        
        int res = 0;
        int l=0,r=0; //l represents start index of bfs and r indicates last index of bfs covering
        
        while(r < nums.size()-1) 
        {
            int farthest = 0;
            for(int i=l;i<=r;i++) 
            {
                farthest = max(farthest,i+nums[i]);
            }
            l = r+1; //Since we have covered all adjacent max reach by l to r so lets go through next set of range that is r+1 to farthest(max reach).
            r = farthest;
            res += 1;
        }
        return res;
        
    }
};