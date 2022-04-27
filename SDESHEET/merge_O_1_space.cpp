#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int N,M;
    cin>>N>>M;
    vector<int> arr1(N+M),arr2(M);
    int j=0;
    for(int i=0;i<M;i++)
    {
        if(arr2[i] <= arr1[j])
        {
            arr1.insert(arr1.begin()+j,arr2[i]);
            j++;
        }
        else
        {
            
        }
    }
    
}