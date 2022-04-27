#include<bits/stdc++.h>
using namespace std; 

int main() 
{
    int N,target;
    cin>>N>>target;
    
    vector<int> v(N);

    for(int i=0;i<N;i++)  //Given Array is sorted already.
    {
        cin>>v[i];
    }

    int low=0,high = N-1;
    while(low <= high) 
    {
        int mid = (low+high)/2;
        if(v[mid] <= target) 
        {
            low = mid+1;
        }
        else 
            high = mid-1;
    }

    int upperBound = low;
    low = 0;
    high = N-1;

    while(low <= high) 
    {
        int mid = (low+high)/2;
        if(v[mid] >= target) 
            high = mid-1;
        else 
            low = mid+1;
    }
    int lowerBound = high;
    
    cout<<v[lowerBound]<<" "<<v[upperBound]<<endl;

    cout<<"Occurance of "<<target<<" "<<upperBound-lowerBound-1<<endl;
}