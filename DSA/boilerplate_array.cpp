#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int N;
    cin>>N;
    vector<int> V(N);
    for(int i=0;i<N;i++)
    {
        cin>>V[i];
    }

    //Traverse 
    for(auto i:V)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    
}