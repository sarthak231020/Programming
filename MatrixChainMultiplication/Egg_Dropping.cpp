#include<bits/stdc++.h> 
using namespace std; 

int solve(int E,int F)
{
    if(E == 1 || F==0 || F==1) 
    {
        return F;
    }

    int ans = INT_MAX;

    for(int K=1;K<=F;K++) 
    {
        //Case 1 solve(E-1,K) is for case if egg is get destroyed then we have to throw it by lower level floor and check whether it gets cracked.
        //Case 2 solve(E,F-K) is for case if egg not get cracked then we have to thrpw it by higher levels of floors. 
        int temp = 1+max(solve(E-1,K-1),solve(E,F-K)); // max because we have to calculate the worst case where egg gets cracked.
        ans = min(ans,temp);    
    }
    return ans;
}   


int main() 
{
    int Egg,Floor; //E-No of Eggs & F-Number of floors.
    cin>>Egg>>Floor;

    cout<<solve(Egg,Floor)<<endl;

    return 0;
}