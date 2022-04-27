// https://www.codechef.com/CCSTART2/problems/REVMEE
#include<iostream>
using namespace std;

int main() 
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    int low = 0,high=N-1;
    while(low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }

    for(int i=0;i<N;i++)
    {
        cout<<arr[i]<<" ";
    }

}