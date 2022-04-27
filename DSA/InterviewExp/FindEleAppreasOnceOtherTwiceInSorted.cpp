#include<bits/stdc++.h> 
using namespace std;

int main() 
{
    int N; 
    cin>>N;

    vector<int> v(N);

    for(int i=0;i<N;i++) 
    {
        cin>>v[i];
    }
    
    int low = 0,high = N-2;
    while(low <= high) 
    {
        int mid = (low+high)/2;
        
        if(v[mid] == v[mid^1]) //if mid is odd then it checks to it's left otherwise it takes mid is even then it check it's right if they are equal then we are of left part so move left to mid+1.
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }

    cout<<v[low]<<endl;
}