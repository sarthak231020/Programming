#include<bits/stdc++.h>
using namespace std;

int countRotation(vector<int> v,int N) 
{
    // https://www.youtube.com/watch?v=4WmTRFZilj8&list=PL_z_8CaSLPWeYfhtuKHj-9MpYb6XQJ_f2&index=7
    if(v.size() == 0) 
        return 0;

    int low = 0,high = N-1;
    if(low == high) 
        return low;
    
    while(low <= high) 
    {
        int mid = low+(high-low)/2; //(low+high)/2

        int prev = (mid+N-1)%N; //for seg fault
        int next = (mid+1)%N; //for seg fault

        if(v[prev] >= v[mid] && v[mid] <= v[next]) 
        {
            return mid;
        }
        else if(v[mid] <= v[high]) 
        {
            high = mid-1; //move to unsorted part.
        }
        else 
        {
            low = mid+1; //move to unsorted part.
        }
    }
    return 0;
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

    // basically 
    // Number of times the sorted array rotated = index of value of min element 
    // if array is already sorted it will be at 0th position indicates that no rotation is there.

    // https://www.geeksforgeeks.org/find-rotation-count-rotated-sorted-array/

    cout<<countRotation(v,N)<<endl;
}
