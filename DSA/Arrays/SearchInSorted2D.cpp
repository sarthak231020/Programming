#include<bits/stdc++.h>
using namespace std;

bool usingBinSearch(vector<vector<int>> v,int N,int M,int target)
{   //Only valid for leetcode problem 
    //In which it is given that first of next row will always be smaller than last of previous row and all rows are sorted 
    int low=0;
    int high = N*M-1;
    while(low <= high) 
    { 
        int mid = (low+high)/2;
        int r = mid/M; //Will give us the row number of matrix
        int c = mid%M; //Will give us the col number of matrix
        if(v[r][c] == target) 
        {
            cout<<"Element found at row col :"<<r<<" "<<c<<endl;
            return true;
        }
        else if(v[r][c] < target) 
        {
            low = mid+1;
        }
        else 
        {
            high = mid-1;
        }
    }
    return false;
}

int main() 
{
    int N,M,target;
    cin>>N>>M>>target;

    vector<vector<int>> v(N,vector<int> (M));

    for(int i=0;i<N;i++) 
    {
        for(int j=0;j<M;j++) 
        {
            cin>>v[i][j];
        }
    }

    int pointer = v[0][v[0].size()-1];
    int i=0,j=v[0].size()-1;
    pair<int,int> result;
    result.first = -1;
    result.second = -1;
    while(j>=0 && i<=N-1)
    {
        if(v[i][j] == target) 
        {
            result.first = i;
            result.second = j;
            break;
        }
        if(v[i][j] > target)
        {
            j--;
        }
        else 
        {
            i++;
        }
    }

    cout<<result.first<<" "<<result.second<<endl;


    cout<<usingBinSearch(v,N,M,target);

}