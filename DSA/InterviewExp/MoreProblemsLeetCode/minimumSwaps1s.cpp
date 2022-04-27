#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/minimum-swaps-to-group-all-1s-together/
int main() 
{
    int N;
    cin>>N;
    vector<int> v(N); 

    for(int i=0;i<N;i++) 
    {
        cin>>v[i];
    }

    int cnt1 = 0;
    for(int i=0;i<N;i++) 
    {
        if(v[i] == 1) 
            cnt1++;
    }

    int right = 0,left=0,curr1 = 0,maxCurr1 = 0;
    while(right < N) 
    {
        curr1 += v[right++];
        if(right-left > cnt1) 
            curr1 -= v[left++];
        maxCurr1 = max(maxCurr1,curr1);
    }

    cout<<"Minimum Number of Swaps to group all Ones -> "<<cnt1-maxCurr1<<endl; 
}