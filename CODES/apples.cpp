#include<iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }

    // cout<<sum/n<<endl;
    int min_apple = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] > (sum/n))
        {
            min_apple += arr[i]-(sum/n);
        }
    }
    cout<<min_apple<<endl;

}