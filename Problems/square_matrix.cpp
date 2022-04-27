#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int rtl=0,ltr=0;
    for(int i=0;i<n;i++)
    {
        rtl += arr[i][i];
        ltr += arr[i][n-i-1];
    }
    
    cout<<abs(rtl-ltr)<<endl;
}