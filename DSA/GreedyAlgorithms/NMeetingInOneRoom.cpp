#include<bits/stdc++.h> 
using namespace std;

struct meeting
{
    int start;
    int end;
    int ind;
}; 

bool comparator(meeting m1,meeting m2) 
{
    if (m1.end < m2.end) return true; 
    else if(m1.end > m2.end) return false; 
    else if(m1.ind < m2.ind) return true; 
    return false; 
}

int main() 
{
    int N;
    cin>>N; 
    vector<int> start(N),end(N); 

    for(int i=0;i<N;i++) 
    {
        cin>>start[i];
    }

    for(int i=0;i<N;i++) 
    {
        cin>>end[i];
    }

    meeting arr[N];
    for(int i=0;i<N;i++) 
    {
        arr[i].start = start[i];
        arr[i].end = end[i];
        arr[i].ind = i;
    }

    sort(&arr[0],&arr[N-1],comparator);

    // for(int i=0;i<N;i++) 
    // {
    //     cout<<arr[i].start<<" "<<arr[i].end<<" "<<arr[i].ind<<endl;
    // }

    int maximum = arr[0].end;
    cout<<arr[0].start<<" "<<arr[0].end<<" "<<arr[0].ind<<endl;
    int count = 1;
    for(int i=1;i<N;i++) 
    {
        if(arr[i].start >= maximum)
        {
            cout<<arr[i].start<<" "<<arr[i].end<<" "<<arr[i].ind<<endl;
            count++;
            maximum = arr[i].end;
        }
    }
}