#include<bits/stdc++.h>
using namespace std; 

int main() 
{
    int N,M;
    cin>>N>>M;

    vector<int> v1(N),v2(N);  //Insert two sorted array.

    for(int i=0;i<N;i++) 
    {
        cin>>v1[i];
    }

    for(int i=0;i<M;i++) 
    {
        cin>>v2[i];
    }

    int i=0;
    int j=0;
    while(i<N && j<M) 
    {
        if(v2[j] < v1[i]) 
        {
            int temp = v1[i];
            v1[i] = v2[j];
            v2[j] = temp;
            cout<<v1[i]<<" "<<v2[j]<<endl;

            int val = v2[j];
            int k = j+1; 
            while(k<M && v2[k] < val)
            {
                v2[k-1] = v2[k];
                k++;
            }
            v2[k-1] = val;
        }
        else
        {
            i++;
        }
    }

    for(auto i:v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(auto j:v2)
    {
        cout<<j<<" ";
    }
    cout<<endl;

    return 0;
}