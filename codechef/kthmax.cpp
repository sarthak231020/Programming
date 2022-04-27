#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,K;
        cin>>N>>K;
        vector<int> v(N);
        for(int i=0;i<N;i++)
        {
            cin>>v[i];
        }

        int mx = *max_element(v.begin(),v.end());

        long long int ans = 0;
        for(int i=K-1;i<N;i++)
        {
            if(v[i] == mx)
            {
                ans += N-i;
            }
        }

        cout<<ans<<endl;
    }
}