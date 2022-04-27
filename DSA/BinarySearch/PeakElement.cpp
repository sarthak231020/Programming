#include<bits/stdc++.h>
using namespace std;

int peakElement(vector<int> v,int N)
{
    
    // if(v[0] > v[1]) 
    //     return 0;
    // if(v[v.size()-1] > v[v.size()-2]) 
    //     return v.size()-1;   

    int low = 0,high = N-1;
    
    while(low <= high)
    {
        int mid = low + (high-low)/2;
        
        if((mid==0 || v[mid-1] <= v[mid]) && (mid == N-1 || v[mid] >= v[mid+1]))
        {
            return mid; 
        }
        else if(v[mid-1] > v[mid]) 
            high = mid-1;
        else 
            low = mid+1;
    }
    return -1;
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

    cout<<peakElement(v,N)<<endl;
}