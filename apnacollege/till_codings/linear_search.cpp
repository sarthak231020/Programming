#include<bits/stdc++.h> 
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int key=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == x) 
        {
            key = i;
            break;
        }
    }
    if(key == -1)
    {
        cout<<"Item is not present"<<endl;
    }
    else
    {
        cout<<"Item is present at index:"<<key<<endl;
    }
}