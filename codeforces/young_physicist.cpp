#include<iostream>
#include<vector>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int> (3));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
            // cout<<arr[i][j]<<" ";
        }
        // cout<<endl;
    }


    
    int sumx=0,sumy=0,sumz=0;
    for(int i=0;i<n;i++)
    {
        sumx += arr[i][0];
        sumy += arr[i][1];
        sumz += arr[i][2];
        // cout<<arr[i][2]<<" "<<endl;
        // cout<<sumx<<" "<<sumy<<" "<<sumz<<endl;
    }
    // cout<<sumx<<" "<<sumy<<" "<<sumz<<endl;

    if(sumx == 0 && sumy==0 && sumz==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}