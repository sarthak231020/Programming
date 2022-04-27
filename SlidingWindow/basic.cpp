//Naive Approach O(n^2)
#include<bits/stdc++.h> 
using namespace std;

// int main() 
// {
//     int n,k;
//     cin>>n>>k;

//     vector<int> v(n);
//     for(int i=0;i<n;i++) 
//     {
//         cin>>v[i];
//     }
//     if(k > n)
//     {
//         cout<<"Invalid"<<endl;
//         return 0;
//     }
//     int max_sum = INT_MIN;

//     for(int i=0;i<n-k+1;i++) 
//     {   
//         int sum = 0;
//         for(int j=i;j<i+k;j++){
//             sum += v[j];
//         }
//         max_sum = max(sum,max_sum);
//     }
//     cout<<max_sum<<endl;
// }


int main() 
{
    int n,k;
    cin>>n>>k;

    vector<int> v(n);
    for(int i=0;i<n;i++) 
    {
        cin>>v[i];
    }
    if(k > n)
    {
        cout<<"Invalid"<<endl;
        return 0;
    }

    int sum = 0;
    int max_sum = INT_MIN;
    for(int i=0;i<k;i++) 
    {
        sum += v[i];
    }
    max_sum = max(max_sum,sum);
    int j = 0;
    for(int i=k;i<n;i++) 
    {
        sum -= v[j++];
        sum += v[i];
        max_sum = max(max_sum,sum);
    }
    cout<<max_sum<<endl;
}