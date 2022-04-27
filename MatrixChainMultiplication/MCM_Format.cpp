// Just for format we will follow in matrix chain multiplication questions
#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> v,int i,int j) 
{
    if(i>j) 
    {
        return 0;
    }

    for(int k=i;k<=j;k++)  //K's range depends on specific questions.
    {
        int temp_ans = solve(v,i,k)+solve(v,k+1,j); // + (can be any operations here)
        int ans = min(temp_ans,ans); //min (can be any function here)
    }
    return ans;
}