#include<bits/stdc++.h> 
using namespace std;

double multiply(double number,int N) 
{
    double ans = 1.0;
    for(int i=1;i<=N;i++) 
    {
        ans = ans*number;
    }
    return ans;
}

double getNthRoot(int N,int M)
{   //O(N*log2(M*10^d)) d is precision asked N is like Nth root 
    double low = 1.0;
    double high = M;
    double eps = 1e-6; //If asked precision is of five digits.

    while((high-low) > eps) 
    {
        double mid = (low + high)/2.0;
        if(multiply(mid,N) < M)
        {
            low = mid;
        }
        else 
        {
            high = mid;
        }
    }

    cout<<low<<" "<<high<<endl; //both will be same

    cout<<pow(M,(double)(1.0/(double)(N)))<<endl;

    return low;
} 
int main() 
{
    int N,M;
    cin>>N>>M;

    cout<<getNthRoot(N,M)<<endl;
}