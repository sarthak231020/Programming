#include<bits/stdc++.h>
using namespace std;

void sort_n(vector<int> &arr,int n)
{
    int count_0 = 0; 
    for(int i=0;i<n;i++)
    {
        if(arr[i] == 0)
        {
            swap(arr[i],arr[count_0]);
            count_0++;
        }
    }
    int count_1 = count_0;

    for(int i=count_1;i<n;i++)
    {
        if(arr[i] == 1)
        {
            swap(arr[i],arr[count_1]);
            count_1++;
        }
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

    sort_n(v,N);

    for(int i=0;i<N;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}