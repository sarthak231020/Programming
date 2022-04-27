#include<bits/stdc++.h>
using namespace std;

int countRotation(vector<int> v,int N) 
{
    // https://www.youtube.com/watch?v=4WmTRFZilj8&list=PL_z_8CaSLPWeYfhtuKHj-9MpYb6XQJ_f2&index=7
    if(v.size() == 0) 
        return 0;

    int low = 0,high = N-1;
    if(low == high) 
        return low;
    
    while(low <= high) 
    {
        int mid = low+(high-low)/2; //(low+high)/2

        int prev = (mid+N-1)%N; //for seg fault
        int next = (mid+1)%N; //for seg fault

        if(v[prev] >= v[mid] && v[mid] <= v[next]) 
        {
            return mid;
        }
        else if(v[mid] <= v[high]) 
        {
            high = mid-1; //move to unsorted part.
        }
        else 
        {
            low = mid+1; //move to unsorted part.
        }
    }
    return 0;
}

int binarySearch(vector<int> v,int low,int high,int key) 
{
    while(low<=high) 
    {
        int mid = (low+high)/2;
        if(v[mid] == key) 
            return mid;
        else if(key < v[mid]) 
            high = mid-1; 
        else 
            low = mid+1;
    }
    return -1;
}

int findElement(vector<int> v,int N,int key) 
{
    int findMin = countRotation(v,N);
    int findInleft = binarySearch(v,0,findMin-1,key);
    int findInRight = binarySearch(v,findMin,N-1,key);

    if(findInleft == -1 && findInRight == -1) 
        return -1;
    else if(findInleft == -1) 
        return findInRight;
    return findInleft;
}
int main() 
{
    int N,key;
    cin>>N>>key;

    vector<int> v(N);

    for(int i=0;i<N;i++) 
    {
        cin>>v[i];
    }

    cout<<findElement(v,N,key)<<endl;
}