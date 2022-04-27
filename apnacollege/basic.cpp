#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n,m,N;
    cin>>n>>m>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }

    int cap = n*m;
    int temp = cap;
    int count=1;

    for(int i=0;i<N;i++)
    {
        if(cap-arr[i]*arr[i] >= 0)
        {
            cap -= arr[i]*arr[i];
        }
        else
        {
            cap = temp;
            cap -= arr[i]*arr[i];
            if(arr[i] !=0 )
                count++;    
        }
    }
    cout<<count<<endl;
}