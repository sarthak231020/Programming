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

    int ans = INT_MIN, max_ending_here = 0;

    for(int i=0;i<n;i++)
    {
        max_ending_here += arr[i];
        ans = max(max_ending_here,ans);
        if(max_ending_here < 0)
            max_ending_here = 0;
        cout<<ans<<" ";
    }
    cout<<endl;
    cout<<ans<<endl;
}

//we can also write it as

// if(arr[i] < max_ending_here+arr[i])
//     max_ending_here += arr[i];
// else
//     max_ending_here = arr[i];
// if(max_ending_here > ans)
//     max_so_far = ans;

// return ans

//We can also write it as 