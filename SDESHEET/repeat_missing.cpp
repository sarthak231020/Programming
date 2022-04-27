// Using sort method

// #include<bits/stdc++.h>
// using namespace std;

// int main() 
// {
//     int N;
//     cin>>N; 

//     vector<int> v(N);

//     for(int i=0;i<N;i++)
//     {
//         cin>>v[i];
//     }

//     sort(v.begin(),v.end());

//     for(int i=0;i<N;i++)
//     {
//         if(v[i]+1 != v[i+1])
//         {
//             cout<<"Missing Number is:"<<v[i]+1<<endl;
//             break;
//         }
//     }


//     for(int i=0;i<N;i++)
//     {
//         if(v[i] == v[i+1])
//         {
//             cout<<"Repeating Number is:"<<v[i]<<endl;
//             break;
//         }
//     }
    
//     // Using HashMaps 
//     // TC -> O(N)
//     // SC -> O(N)

//     vector<int> v1(N);
//     for(int i=0;i<N;i++)
//     {
//         cin>>v1[i];
//     }

//     vector<int> freq(*max_element(v1.begin(),v1.end()),0);

//     for(int i=0;i<N;i++)
//     {
//         freq[v[i]] += 1;
//     }

//     for(int i=1;i<freq.size();i++)
//     {
//         if(freq[i] == 0)
//         {
//             cout<<"Missing Number is:"<<i<<endl;
//             break;
//         }
//     }

//     for(int i=1;i<freq.size();i++)
//     {
//         if(freq[i] >= 2)
//         {
//             cout<<"Repeating Number is:"<<i<<endl;
//             break;
//         }
//     }
// }


#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int N;
    cin>>N;
    vector<int> v(N);
    for(int i=0;i<N;i++)
    {
        cin>>v[i];

    }

    for(int i=0;i<N;i++) 
    {
        cout<<v[i]<<" ";
    }

    cout<<endl;
    
    int sum = accumulate(v.begin(),v.end(),0);
    cout<<sum<<endl;
    int sum1 = (N+1)*(N+2)/2;
    cout<<sum1<<endl;
    cout<<"Missing Number is:"<<sum1-sum<<endl;

    sum += (sum1-sum);

}