#include<bits/stdc++.h> 
using namespace std;

int SearchInNearlySorted(vector<int> v,int N,int key)
{
    int low = 0,high = N-1;

    //The ith element is misplaced to either i+1th or i-1th position so that is the nearly sorted thing.

    while(low <= high) 
    {
        int mid = low + (high-low)/2;
        
        if(v[mid] == key) 
            return mid;
        if(mid+1 < N && v[mid+1] == key)    
            return mid+1;
        if(mid-1 >= 0 && v[mid-1] == key) 
            return mid-1;
        if(v[mid] < key)    
            low = mid+2;
        else 
            high = mid-2;
    }
    return -1; //item is not found.
}


int main() 
{
    int N,key;
    cin>>N>>key;
    vector<int> v(N); 

    for(int i=0;i<N;i++) 
    {
        cin>>v[i];
    }

    cout<<SearchInNearlySorted(v,N,key)<<endl;
}