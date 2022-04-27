// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main() 
// {
//     int n,m;
//     cin>>n>>m;
//     vector<int> v(m);
//     for(int i=0;i<m;i++)
//     {
//         cin>>v[i];
//     }
//     // cout<<*max_element(v.begin(),v.begin()+4)<<endl;
//     // cout<<*min_element(v.begin(),v.begin()+4)<<endl;


//     int min_diff = INT_MAX,minimum,second_min,minidx;
//     for(int i=0;i<=m-n;i++)
//     {
//         minimum = INT_MAX;
//         second_min = INT_MAX;
//         minidx = i;
//         for(int j=i;j<i+n;j++)
//         {
//             if(minimum > arr[j])
//             {
//                 minimum = arr[j];
//                 minidx  = j;
//             }
//         }
//         for(int j=i;j<i+n;j++)
//         {
//             if(second_min > arr[j] && j!=minidx)
//             {
//                 second_min = arr[j];
//             }
//         }
//         min_diff = min(second_min-minimum,min_diff);
//     }

//     cout<<min_diff<<endl;
// }


#include<bits/stdc++.h> 
using namespace std;

int main() 
{
    int n,m;
    cin>>n>>m;
    vector<int> v(m);
    for(int i=0;i<m;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    // cout<<v[n-1]-v[0]<<endl;
    // // cout<<v[n]-v[0];
    // // for(int i=0;i<v.size();i++)
    // // {
    // //     cout<<v[i]<<" ";
    // // }
    // // cout<<endl;
    int min_diff = INT_MAX;

    for(int k=0;k<=m-n;k++)
    {
        min_diff = min(min_diff,v[k+n-1]-v[k]);
        // cout<<min_diff<<endl;
    }

    cout<<min_diff<<endl;
}