#include<bits/stdc++.h>
using namespace std;

void maxHeapify(vector<int> v,int i)  //V is 1 based indexed. 
{
    int l = 2*i;
    int r = 2*i+1;
    int largest;
    if(l <= v.size() && v[l] > v[i])
        largest = l; 
    else 
        largest = i;
    if(r <= v.size() && v[r] > v[largest]) 
        largest = r;
    if(largest != i) 
    {
        swap(v[largest],v[i]);
        maxHeapify(v,largest); 
    }
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