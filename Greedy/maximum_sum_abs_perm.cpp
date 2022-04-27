// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<math.h>
// using namespace std;

// int s(vector<int> V1,int n)
// {
//     int summation = 0;
//     for(int i=0;i<n-1;i++)
//     {
//         summation += abs(V1[i]-V1[i+1]);
//     }
//     summation += abs(V1[0]-V1[n-1]);
//     return summation;
// }

// int main()
// {
//     int N;
//     cin>>N;
//     vector<int> V(N);
//     for(int i=0;i<N;i++)
//     {
//         cin>>V[i];
//     }
//     sort(V.begin(),V.end());
//     int sum = s(V,V.size());
//     int maximum = sum;
//     while(next_permutation(V.begin(),V.end()))
//     {
//         if(s(V,V.size()) > maximum)
//         {
//             maximum = s(V,V.size());
//         }
//     }

//     cout<<maximum<<endl;
// }


//Optimized Way

#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
// Algorithm: To get the maximum sum, we should have a sequence in which small and large elements comes alternate. This is done to get maximum difference.
int main()
{
    int N;
    cin>>N;
    vector<int> V(N);
    for(int i=0;i<N;i++)
    {
        cin>>V[i];
    }
    sort(V.begin(),V.end());
    vector<int> V1;
    for(int i=0;i<V.size()/2;i++)
    {
        V1.emplace_back(V[i]); 
        V1.emplace_back(V[N-i-1]);
    }
    if(V.size()%2 == 1)
    {
        V1.emplace_back(V[V.size()/2]);
    }

    for(int i=0;i<V1.size();i++)
    {
        cout<<V1[i]<<"\t";
    }

    int sum = 0;

    for(int i=0;i<N-1;i++)
    {
        sum += abs(V1[i]-V1[i+1]);
    }
    sum += abs(V1[0]-V1[N-1]);
    cout<<sum<<endl;
}