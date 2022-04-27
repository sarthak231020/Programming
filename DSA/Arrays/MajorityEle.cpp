#include<bits/stdc++.h> 
using namespace std; 

int MajorityMooreVoting(vector<int> v,int N) 
{   //It is given there is no case where majority ele not present 
    //majority ele always appears  > floor(N/2) times in arr.
    int ele = -1;
    int cnt = 0;
    for(int i=0;i<N;i++) 
    {
        if(cnt == 0)  //Count will become 0 whenever minorty == majority 
        {
            ele = v[i];
        }
        if(ele == v[i]) 
            cnt++; //it is majority 
        else 
            cnt--; //Minority.
    }
    return ele;  //finally last updated ele will be the majority element.
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

    cout<<MajorityMooreVoting(v,N);

    return 0;
}