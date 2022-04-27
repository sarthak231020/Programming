#include<bits/stdc++.h>
using namespace std;

int SolveBrut(vector<int> v,int N,int target) 
{
    int ind = -1;
    for(int i=0;i<v.size();i++) 
    {
        if(v[i] == target) 
        {
            ind = i;
            break; 
        }
    }
    return ind;
}

int Solve(vector<int> v,int N,int target) 
{
    int low = 0;
    int high = N-1;

    while(low <= high) 
    {
        int mid = (low+high)/2;
        if(v[mid] == target) 
            return mid;
        if(v[low] <= v[mid]) 
        {
            if(v[low]<=target && target<=v[mid])
                high = mid-1;
            else 
                low = mid+1;
        }
        else
        {
            if(v[mid]<=target && target<=v[high])
                low = mid+1;
            else 
                high = mid-1;
        }
    }
    return -1;
}

int main() 
{
    int N,target;
    cin>>N>>target;
    vector<int> v(N); 

    for(int i=0;i<N;i++) 
    {
        cin>>v[i];
    }

    cout<<Solve(v,N,target)<<endl;

    return 0; 
}