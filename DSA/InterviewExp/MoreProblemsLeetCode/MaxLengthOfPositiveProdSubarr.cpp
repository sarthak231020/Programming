#include<bits/stdc++.h>
using namespace std;

int solveOpt(vector<int> v,int N) 
{
    int ans = 0,positive = 0,negative = 0;

    for(int i=0;i<N;i++) 
    {
        if(v[i] == 0) 
        {
            positive = 0;
            negative = 0;
        }
        else if(v[i] > 0) 
        {
            positive++;
            negative = negative == 0? 0 : negative+1;
        }
        else
        {
            int temp = positive;
            positive = negative == 0? 0 : negative+1;
            negative = temp+1;
        }
        ans = max(ans,positive);
    }
    return ans;
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


}