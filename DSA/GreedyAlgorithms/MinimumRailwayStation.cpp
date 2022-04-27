#include<bits/stdc++.h>
using namespace std;

struct meeting 
{
    int arrival;
    int departure;
    int ind;
};

bool comparator(meeting m1,meeting m2) 
{
    return m1.departure <= m2.departure;
}

void MinRailStationBrut(vector<int> arrival,vector<int> dep,int N) 
{
    meeting arr[N];

    for(int i=0;i<N;i++) 
    {
        arr[i].arrival = arrival[i];
        arr[i].departure = dep[i];
        arr[i].ind = i;
    }

    sort(&arr[0],&arr[N-1],comparator);
    
    
    int count = 0;
    for(int i=0;i<N;i++) 
    {
        if(arr[i].ind != INT_MAX)
        {
            int limit = arr[0].departure;
            arr[i].ind = INT_MAX;
            for(int j=i+1;j<N;j++) 
            {
                if(arr[j].arrival > limit)
                {
                    arr[j].ind = INT_MAX;
                    limit = arr[j].departure;
                }
            }
            count++;
        }
    }
 
    cout<<"No of platforms required : "<<count<<endl;
    
}

void MinRailStationOpt(vector<int> arrival,vector<int> dept,int N) 
{
    sort(&arrival[0],&arrival[N-1]);
    sort(&dept[0],&dept[N-1]); //We will go with the time.

    int maxi = INT_MIN;

    int i=1,j=0;
    int plat_needed = 1,result = 1;
    while(i<N && j<N) 
    {
        if(arrival[i] <= dept[j]) 
        {
            plat_needed++;
            i++;
        }
        else 
        {
            plat_needed--;
            j++;
        }
        if(plat_needed > result)
            result = plat_needed;
    }

    cout<<"Minimum number of platforms required are : "<<result<<endl;



}


int main() 
{
    int N; 
    cin>>N;
    
    vector<int> arrival(N),dep(N);

    for(int i=0;i<N;i++) 
    {
        cin>>arrival[i];
    }

    for(int i=0;i<N;i++) 
    {
        cin>>dep[i];
    }

    MinRailStationOpt(arrival,dep,N);
}   