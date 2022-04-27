#include<bits/stdc++.h>
using namespace std;

int solveBrut(vector<int> v,int N) 
{
    set<int> s; 
    for(int i=0;i<N;i++) 
    {
        s.insert(v[i]);
    }
    int cnt = 0;
    cout<<"Unique Elements are:"<<endl;
    for(auto i:s)
    {   cout<<i<<" ";
        v[cnt++] = i;
    }
    cout<<endl;

    return cnt;
}

int solveOpt(vector<int> v,int N) 
{
    int i=0,j=i+1;

    while(j < N) 
    {
        if(v[i] != v[j]) 
        {
            i++;
            v[i] = v[j];
        }
        j++;
    }

    cout<<"Unique elements are:"<<endl;
    for(int k=0;k<=i;k++) 
    {
        cout<<v[k]<<" ";
    }
    cout<<endl;
    return i+1;
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

    cout<<solveBrut(v,N)<<endl;

    cout<<solveOpt(v,N)<<endl;
}

//AC solution on GFG 
