//We have to find an element which appears only one in an array where every element occurs twice. 
//Provide it is a sorted array
#include<bits/stdc++.h> 
using namespace std;

int SingleEle(vector<int> v,int N) 
{
    int low = 0;
    int high = N-2;
    while(high >= low)
    {
        int mid = (low+high)/2;
        
        cout<<v[low]<<" "<<v[high]<<endl;
        if(v[mid] == v[mid^1]) //single element is on right of mid.->mid^1 gives next ele if mid is even else gives prev 
        {
            low = mid+1;
        }
        else //single element is on left of mid.
        {
            high = mid-1;
        }
    } 
    cout<<v[low]<<endl;
    return v[low];
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

    cout<<SingleEle(v,N)<<endl;

    return 0;
}