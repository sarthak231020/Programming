#include<bits/stdc++.h>
using namespace std;

int firstOcc(vector<int> v,int N,int key)
{
    int res = -1;

    int low = 0,high = N-1; 
    while(low <= high) 
    {
        int mid = low + (high-low)/2; //to avoid overflow.
        
        if(v[mid] == key)
        {
            res = mid;
            high = mid-1;
        }
        else if(key < v[mid]) 
        {
            high = mid-1;
        }
        else 
        {
            low = mid+1;
        }
    }
    return res;

}


int lastOcc(vector<int> v,int N,int key)
{
    int res = -1;

    int low = 0,high = N-1; 
    while(low <= high) 
    {
        int mid = low + (high-low)/2; //to avoid overflow.
        
        if(v[mid] == key)
        {
            res = mid;
            low = mid+1;
        }
        else if(key < v[mid]) 
        {
            high = mid-1;
        }
        else 
        {
            low = mid+1;
        }
    }
    return res;
}

int countOfNum(vector<int> v,int N,int key)
{
    int firstOccurance = firstOcc(v,N,key);
    if(firstOccurance == -1)
        return 0; 
    int lastOccurance = lastOcc(v,N,key);
    return lastOccurance-firstOccurance+1;
}

int main() 
{
    int N,key;
    cin>>N>>key; 
    //Array is sorted.

    vector<int> v(N); 


    for(int i=0;i<N;i++) 
    {
        cin>>v[i]; 
    }


    cout<<countOfNum(v,N,key)<<endl;

}