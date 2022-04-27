#include<iostream> 
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

    int choice,inp;
    cin>>choice;
    cin>>inp;
    int key = arr[inp];
    while(inp >= choice)
    {
        arr[inp] = arr[inp-1];
        inp --;
    }
    arr[choice] = key;
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}