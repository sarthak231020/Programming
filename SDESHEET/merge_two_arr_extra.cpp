#include<bits/stdc++.h> 
using namespace std;

int main() 
{
    int N,M;
    cin>>N>>M;
    vector<int> v1(N),v2(M);  //Both are sorted we have to create a new array
    //Having v1 and v2's element and sorted.

    for(int i=0;i<N;i++)
    {
        cin>>v1[i];
    }

    for(int j=0;j<M;j++) 
    {
        cin>>v2[j];
    }

    int i=0,j=0;
    vector<int> v3(v1.size()+v2.size());

    for(int k=0;k<v3.size();k++) 
    {
        if(v1[i] < v2[j] && i<N)
        {
            v3[k] = v1[i++];
        }
        else if(j<M)
        {
            v3[k] = v2[j++];
        }
    }

    for(int i=0;i<v3.size();i++) 
    {
        cout<<v3[i]<<" ";
    }

    cout<<endl;
}