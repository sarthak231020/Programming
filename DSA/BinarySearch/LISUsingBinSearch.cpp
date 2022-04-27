#include<bits/stdc++.h>
using namespace std;
// https://www.codingninjas.com/codestudio/problems/longest-increasing-subsequence_630459?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=1
// https://www.youtube.com/watch?v=on2hvxBXJH4&list=PLgUwDviBIf0qUlt5H_kiKYaNSqJ81PMMY&index=44
int longestIncreasingSubsequence(int v[], int N)
{    //DP method takes TC -> O(N^2) SC->O(N)
     //This method takes TC -> O(NlogN) SC->O(N).
	vector<int> temp;
	temp.push_back(v[0]); 
	int len = 1;
	for(int i=1;i<N;i++) 
	{
		if(v[i] > temp.back())
		{
			temp.push_back(v[i]);
			len++;
		}
		else 
		{
			int ind = lower_bound(temp.begin(),temp.end(),v[i])-temp.begin(); //take index of element if present otherwise just take next index to overwrite since we can not afford to write the complete subsesequences and finding max LIS.
			temp[ind] = v[i];
		}
	}
	return len;
	
	
    // Write Your Code here
}
