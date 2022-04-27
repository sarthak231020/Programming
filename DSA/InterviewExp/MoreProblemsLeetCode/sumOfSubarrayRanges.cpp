#include<bits/stdc++.h>
using namespace std;

int solveBrut(vector<int> v,int N) 
{
    int res = 0;
    for(int i=0;i<N;i++) 
    {
        int maxi = v[i],mini=v[i];
        for(int j=i;j<N;j++) 
        {
            maxi = max(maxi,v[j]);
            mini = min(mini,v[j]);
            res += maxi-mini;
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

    //O(N^2) solution
    cout<<solveBrut(v,N)<<endl;
}