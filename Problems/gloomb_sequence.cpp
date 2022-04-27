#include<bits/stdc++.h>
#define MAX 100000000000
using namespace std; 
long long GolombSequence(long long L,long long R) 
{ 
  
    long long arr[MAX]; 

    long long cnt = 0; 

    arr[0] = 0; 
    arr[1] = 1; 
    map<long long,long long> M; 
  
    M[2] = 2; 

    for (long long i = 2; i <= R; i++) { 
        if (cnt == 0) { 
            arr[i] = 1 + arr[i - 1]; 
            cnt = M[arr[i]]; 
            cnt--; 
        } 
        else { 
            arr[i] = arr[i - 1]; 
            cnt--; 
        } 
  
        M[i] = arr[i]; 
    } 
    long long sum=0;
    for(long long i=L;i<=R;i++)
    {
        cout<<arr[i]<<"  ";
    }

    return sum%1000000007;
} 
  
int main() 
{ 
    long long T;
    long long L,R;
    cin>>T;
    while(T--)
    {
        cin>>L>>R;
        cout<<GolombSequence(L,R)<<endl;
    }
    return 0; 
} 