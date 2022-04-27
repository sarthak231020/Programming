#include<bits/stdc++.h> 
using namespace std;

int binSearch(vector<int> v,int low,int high,int key) 
{
    while(low <= high) 
    {
        int mid = low+(high-low)/2; 
        if(v[mid] == key) 
        {
            return mid;
        }
        else if(v[mid] < key) 
        {
            low = mid+1;
        }
        else 
        {
            high = mid-1;
        }
    }
    return -1
}

int searchInf(vector<int> v,int N,int key) 
{
    int low = 0,high = 1; 
    while(key > v[high]) 
    {
        low = high; 
        high = high*2;
    }

    return binSearch(v,low,high,key);
}

int main() 
{
    int N,key; //Here N can be very large Unknown number so we have to find range of key then eliminate that inifinte part and finally return index.
    cin>>N>>key;
    vector<int> v(N); 

    for(int i=0;i<N;i++) 
    {
        cin>>v[i];
    }

    
}