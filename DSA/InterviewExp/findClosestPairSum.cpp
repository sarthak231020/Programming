#include<bits/stdc++.h> 
using namespace std;

int main() 
{
    int N,sum;
    cin>>N>>sum;

    vector<int> v(N);

    for(int i=0;i<N;i++)  //Given Array is Sorted here.
    {
        cin>>v[i];
    }


    int l=0,r = N-1; 
    int resL=-1,resR=-1,minSum = INT_MAX;
    while(l<r) 
    {
       
        if(abs(v[l] + v[r] - sum) < minSum)   
        {
            resL = l;
            resR = r;
            minSum = abs(v[l] + v[r] - sum);
        }
        if(v[l]+v[r] < sum) 
        {
            l++;
        }
        else 
        {
            r--;
        }
    }
    
    cout<<v[resL]<<" "<<v[resR]<<endl;
    
}