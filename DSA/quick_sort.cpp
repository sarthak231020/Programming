#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> v,int l,int r)
{
    int pivot = v[r-1];
    int i=l;

    for(int j=l;j<=r-1;j++)
    {
        if(v[j] < pivot)
        {
            i++;
            swap(v[i],v[j]);
        }
    }
    swap(v[i+1],v[pivot]);
    return i+1;
}

void quick_sort(vector<int> &v,int l,int r){
    if(l < r)
    {
        int p = partition(v,l,r);
        quick_sort(v,l,p-1);
        quick_sort(v,p+1,r);
    }
}

int main() 
{
    int N;
    cin>>N;
    vector<int> V(N);
    for(int i=0;i<N;i++)
    {
        cin>>V[i];
    }

    quick_sort(V,0,V.size()-1);
}