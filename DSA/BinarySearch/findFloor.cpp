#include<bits/stdc++.h> 
using namespace std;

int findFloor(vector<int> v,int N,int key) 
{
    int low = 0,high=N-1; 
    int res = -1;
    while (low <= high)
    {
        int mid = low + (high-low)/2; 
        if(v[mid] <= key) 
        {
            res = v[mid]; 
            low = mid+1;
        }
        else 
        {
            high = mid-1;
        }
        /* code */
    }
    return res;
    
}

int findCeil(vector<int> v,int N,int key) 
{
    int low = 0,high=N-1; 
    int res = -1;
    while (low <= high)
    {
        int mid = low + (high-low)/2; 
        if(v[mid] <= key) 
        {
            low = mid+1;
        }
        else 
        {
            res = v[mid]; 
            high = mid-1;
        }
        /* code */
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

    
}