#include<bits/stdc++.h>
using namespace std; 

int main() 
{
    int arr[6][6];
    pair<int,int> p;

    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++) 
        {
            cin>>arr[i][j];
            if(arr[i][j])
            {
                p.first = i;
                p.second = j;
            }
        }
    }
    // cout<<p.first<<" "<<p.second<<endl;
    int count = 0;
    while(p.first < 3 )
    {
        p.first = p.first+1;
        count++;
    }
    while(p.first > 3)
    {
        p.first = p.first-1;
        count++;
    }

    while(p.second < 3)
    {
        p.second += 1;
        count++;
    }

    while(p.second > 3)
    {
        p.second -= 1;
        count++;
    }
    cout<<count<<endl;
}