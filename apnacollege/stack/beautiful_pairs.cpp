//Bruteforce TLE O(N^2)
// #include<bits/stdc++.h>
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);  
//     cin.tie(NULL);
//     int T;
//     cin>>T;
//     while(T--)
//     {
//         int n;
//         cin>>n;
//         vector<double> v(n);
//         for(int i=0;i<n;i++)
//         {
//             cin>>v[i];
//         }
//         int count = 0;
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 if((i != j) && ((v[i]-v[j])/v[i]) < ((v[i]-v[j])/v[j]))
//                     count++;// cout<<"("<<i<<","<<j<<")"<<endl;
//             }
//         }
//         cout<<count<<endl;
//     }
// }

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        vector<int> v(N);
        long long int  maxele = -1;
        for(int i=0;i<N;i++)
        {
            cin>>v[i];
            maxele = (maxele,v[i]);
        }
        vector<int> freq(maxele,0);
        // for(auto it:freq)
        //     cout<<it<<" ";
        // cout<<endl;
        for(int i=0;i<N;i++)
        {
            freq[v[i]-1]++;
        }

        // for(auto it:freq)
        //     cout<<it<<" ";
        // cout<<endl;
        long long int sum = 0;
        cout<
        for(auto it:freq)
        {
            sum += ((N-it)*it);
            cout<<sum<<endl;
        }
        cout<<sum<<endl;
    }
}