#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int N;
    cin>>N;

    vector<int> v(N);

    for(int i=0;i<N;i++) 
    {
        cin>>v[i]; //Array contains 0's and 1's only.
    }

    int maxi = INT_MIN;
    int cnt = 0;
    for(int i=0;i<N;i++) 
    {
        if(v[i] == 1)
            cnt++;
        else 
            cnt = 0;
        maxi = max(maxi,cnt);
    }
    cout<<maxi<<endl;
    
}