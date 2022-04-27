#include<iostream>
using namespace std;

int main() 
{
    int n,x;
    cin>>n>>x;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // bool flag = false;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == x)
        {
            cout<<"Item is Found at:"<<i<<"th index"<<endl;
            return 0;
        }
    }
    cout<<"Item is not found"<<endl;

}

//Modular way
