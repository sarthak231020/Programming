#include<bits/stdc++.h>
using namespace std;

void farthestMin(vector<int> v,int N) 
{
    vector<int> suffMin(N);
    suffMin[N-1] = v[N-1];
    for(int i=N-2;i>=0;i--) 
    {
        suffMin[i] = min(v[i],suffMin[i+1]);
    }

    for(int i=0;i<N;i++) 
    {
        int low = i+1,high = N-1,ans = -1;
        while(low <= high) 
        {
            int mid = (low+high)/2;
            if(suffMin[mid] < v[i]) 
            {
                ans = mid;
                low = mid+1; //since we are looking for farthest smaller.
            }
            else 
            {
                high = mid-1;
            }
        }
        cout<<ans<<" ";
    }


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

    farthestMin(v,N);

}