//Naive approach is using maps by using key as numbers and storing their frequencies...........
// It is taking O(N) of Extra space
// #include<bits/stdc++.h>
// using namespace std;

// int main() 
// {
//     int N;
//     cin>>N;
//     vector<int> V(N);
//     for(int i=0;i<N;i++)
//     {
//         cin>>V[i];
//     }

//     map<int,int> mp;
//     for(int i=0;i<N;i++) 
//     {
//         mp[V[i]] = 0;
//     }
//     for(int i=0;i<N;i++)
//     {
//         mp[V[i]]++;
//     }

//     for(int i=0;i<N;i++)
//     {
//         if(mp[V[i]]%2 == 1) 
//         {
//             cout<<V[i]<<" is occuring odd times"<<endl;
//         }
//     }    
// }


// Using XOR

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int N;
    cin>>N;
    vector<int>  V(N);
    for(int i=0;i<N;i++)
    {
        cin>>V[i];
    }

    
}