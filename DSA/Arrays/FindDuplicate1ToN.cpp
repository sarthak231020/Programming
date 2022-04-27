#include<bits/stdc++.h>
using namespace std; 

void findDup(vector<int> v,int N) 
{ // since Integers are in 1 to N range and also are in 
    int slow = v[0];
    int fast = v[0]; 

    do 
    {
        slow = v[slow];
        fast = v[v[fast]];
    }while(slow != fast); 

    fast = v[0];

    while(slow != fast) 
    {
        slow = v[slow]; 
        fast = v[fast];
    }
    cout<<slow<<endl;
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

    findDup(v,N);
}