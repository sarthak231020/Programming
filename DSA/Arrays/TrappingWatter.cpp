#include<bits/stdc++.h> 
using namespace std;

int solve(vector<int> v,int N) 
{
    vector<int> pre(N),suf(N); 

    int maxi = INT_MIN;
    for(int i=0;i<N;i++)
    {
        maxi = max(maxi,v[i]);
        pre[i] = maxi;
    }

    maxi=INT_MIN;
    for(int i=N-1;i>=0;i--) 
    {
        maxi = max(maxi,v[i]); 
        suf[i] = maxi;
    }

    int ans = 0;
    for(int i=0;i<N;i++) 
    {
        ans += min(pre[i],suf[i])-v[i];
    }

    return ans;
}

int solveOptimized(vector<int> v,int N) 
{
    int left=0,right=N-1;
    int leftmax = 0,rightmax=0;
    int res = 0;
    while(left <= right) 
    {
        if(v[left] <= v[right]) 
        {
            if(v[left] >= leftmax) 
                leftmax = v[left];
            else
                res += (leftmax-v[left]);
            left++;
        }
        else 
        {
            if(v[right] >= rightmax) 
                rightmax = v[right];
            else 
                res += (rightmax-v[right]);
            right--;
        }
    }
    
    return res;
}

int main() 
{
    int N; 
    cin>>N;

    vector<int> v(N); 

    for(int i=0;i<N;i++) 
    {
        cin>>v[i];
    }

    cout<<solve(v,N)<<endl;

    cout<<solveOptimized(v,N)<<endl;
}