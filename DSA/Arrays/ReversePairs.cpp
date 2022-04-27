#include<bits/stdc++.h>
using namespace std;


int merge(vector<int> &v,int low,int mid,int high) 
{   
    int cnt = 0;
    int j=mid+1;
    for(int i=low;i<=mid;i++) 
    {
        while(j<=high && v[i] > (2LL*v[j]))
        {
            j++;
        }
        cnt += (j-(mid+1));
    }

    int left=low,right = mid+1;
    vector<int> temp;
    while(left <= mid && right <= high) 
    {
        if(v[left] <= v[right]) 
        {
            temp.push_back(v[left++]);
        }
        else 
        {
            temp.push_back(v[right++]);
        }
    }

    while(left <= mid) 
        temp.push_back(v[left++]);
    while(right <= high) 
        temp.push_back(v[right++]);

    for(int i=low;i<=high;i++) 
    {
        v[i] = temp[i-low];
    }

    return cnt;
}

int mergeSort(vector<int> &v,int low,int high) 
{
    if(low >= high) 
        return 0;
    int mid = (low+high)/2;
    int cnt = mergeSort(v,low,mid);
    cnt += mergeSort(v,mid+1,high);
    cnt += merge(v,low,mid,high);
    return cnt;
}

 
int reversePair(vector<int> v,int low,int high) 
{
    return mergeSort(v,low,high);
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

    cout<<reversePair(v,0,N-1)<<endl;

    return 0;
}