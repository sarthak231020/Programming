#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> v,int i,int j) 
{
    if(i>=j) 
    {
        return 0;
    }
    int ans = INT_MAX;
    for(int k=i;k<=j-1;k++)  
    {
        int temp_ans = solve(v,i,k)+solve(v,k+1,j)+(v[i-1]*v[k]*v[j]); 
        ans = min(temp_ans,ans); 
    }
    return ans;
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

    cout<<solve(v,1,N-1)<<endl;

}