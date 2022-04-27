#include<bits/stdc++.h> 
using namespace std;

bool canPlaceCows(vector<int> v,int N,int Cows,int dist) 
{
    int cnt = 1,coOrd = v[0]; 

    for(int i=1;i<N;i++) 
    {
        if(v[i]-coOrd <= dist)
        {
            coOrd = v[i];
            cnt++;
        }
        if(cnt == Cows)
            return true;
    }
    return false;
}

int solve(vector<int> &v,int N,int Cows) 
{
    sort(v.begin(),v.end());
    int low = 1;
    int high = v[N-1]-v[0];
    int res = 0;
    while(low <= high) 
    {
        int mid = (low+high)/2;
        if(canPlaceCows(v,N,Cows,mid))
        {
            res = mid;
            high = mid-1;
        }
        else 
        {
            low = mid+1; 
        }
    }
    return res;
}

int main() 
{
    int N,Cows;
    cin>>N>>Cows;

    vector<int> v(N); 

    for(int i=0;i<N;i++) 
    {
        cin>>v[i];
    }

    cout<<solve(v,N,Cows)<<endl;

}