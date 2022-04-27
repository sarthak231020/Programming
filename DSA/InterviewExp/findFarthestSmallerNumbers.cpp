#include<bits/stdc++.h> 
using namespace std;
// https://www.geeksforgeeks.org/find-the-farthest-smaller-number-in-the-right-side/
int main() 
{
    int N; 
    cin>>N;

    vector<int> v(N); 

    for(int i=0;i<N;i++) 
    {
        cin>>v[i];
    }

    //Brut solution is to o(N^2)    in which first loop is 0->N-1 and second loop from N-1 to i and if smalller then print and break the inner loop.
    
    //O(NLogn) sol
    
    vector<int> suff(N);
    suff[N-1] = v[N-1];
    for(int i=N-2;i>=0;i--) 
    {
        suff[i] = min(suff[i+1],v[i]);
    }

    for(int i=0;i<N;i++) 
    {
        int low = i+1,high = N-1,ans=-1;
        while(low <= high) 
        {
            int mid = (low+high)/2;

            if(suff[mid] < v[i]) 
            {
                ans = mid;
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        cout<<ans<<" ";
    }


}