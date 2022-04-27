#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int N,limit;
    cin>>N>>limit;
    vector<int> v(N); 

    for(int i=0;i<N;i++) 
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end()); 

    int i=0,j = v.size()-1;
    int ans = 0;
    while(i<=j) 
    {
        ans++;
        if(v[i]+v[j] <= limit) 
            i++;
        j--;
    }

    cout<<ans<<endl;
}