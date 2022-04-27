#include<bits/stdc++.h>

using namespace std; 

int main() 
{
    int N,H,x;
    cin>>N>>H>>x;

    vector<int> v1(N);
    for(int i=0;i<N;i++)
    {
        cin>>v1[i];
    }

    int max = *max_element(v1.begin(),v1.end());

    if(max+x >= H)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
}