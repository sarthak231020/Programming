#include<bits/stdc++.h> 
using namespace std; 
// consider 1<=E<=10 & 1<=F<=50;

int T[11][51];

int solve(int E,int F)
{
    if(E == 1 || F==0 || F==1) 
    {
        return F;
    }
    if(T[E][F] != -1)
    {
        return T[E][F];
    }

    int ans = INT_MAX;

    for(int K=1;K<=F;K++) 
    {
        int low,high;
        if(T[E-1][K-1] != -1) 
        {
            low = T[E-1][K-1];
        }
        else 
        {
            low = solve(E-1,K-1);
            T[E-1][K-1] = low;
        }
        if(T[E][F-K] != -1)     
        {
            high = T[E][F-K];
        }
        else 
        {
            high = solve(E,F-K);
            T[E][F-K] = high; 
        }

        //Case 1 solve(E-1,K) is for case if egg is get destroyed then we have to throw it by lower level floor and check whether it gets cracked.
        //Case 2 solve(E,F-K) is for case if egg not get cracked then we have to thrpw it by higher levels of floors. 
        int temp = 1+max(low,high); // max because we have to calculate the worst case where egg gets cracked.
        ans = min(ans,temp);    
    }
    return T[E][F] = ans;
}   


int main() 
{
    int Egg,Floor; //E-No of Eggs & F-Number of floors.
    cin>>Egg>>Floor; 
    if(Egg<=0 || Floor<0) 
    {
        cout<<"Invalid Input"<<endl;
    }

    memset(T,-1,sizeof(T));

    cout<<solve(Egg,Floor)<<endl;

    return 0;
}