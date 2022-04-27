// https://www.codechef.com/CCSTART2/problems/FINDMELI
#include<iostream>
using namespace std;

int main() 
{
    int n,k;
    cin>>n>>k;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i] == k)
        {
            cout<<"1"<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;    
}