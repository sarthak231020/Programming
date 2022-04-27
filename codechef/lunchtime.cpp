// #include<bits/stdc++.h>
// using namespace std;

// int main() 
// {
//     int T;
//     cin>>T;
//     while(T--)
//     {
//         int A,B,A1,B1,A2,B2;
//         cin>>A>>B>>A1>>B1>>A2>>B2;

//         if((A==A1 && B==B1) || (A==B1 && B==A1))
//             cout<<1<<endl;
//         else if((A==A2 && B==B2) || (A==B2 && B==A2))
//             cout<<2<<endl;
//         else
//             cout<<0<<endl;
//     }
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main() 
// {
//     int T;
//     cin>>T;
//     while(T--)
//     {
//         int N;
//         cin>>N;
//         long long int sum = (N)*(N+1)/2;
//         if(sum%2 == 0)
//         {
//             cout<<N<<endl;
//             continue;
//         }
//         int i=1;
//         int temp = N;
//         for(int i=1;i<=N;i++)
//         {
//             sum -= i;
//             temp--;
//             if(sum%2 == 0)
//             {
//                 cout<<temp<<endl;
//                 break;
//             }
//         }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main() 
// {
//     int T;
//     cin>>T;
//     while(T--)
//     {
//         int N,K;
//         cin>>N>>K;
//         vector<int> v(N);
//         for(int i=0;i<N;i++)
//         {
//             cin>>v[i];
//         }
//         int min_ele = *min_element(v.begin(),v.end());
//         int max_ele = *max_element(v.begin(),v.end());
//         if(min_ele == max_ele)
//         {
//             cout<<N-K+1<<endl;
//             continue;
//         }
//         int count = 0;
//         // int L = 0,R=K;
//         for(int i=K-1;i<N;i++)
//         {
//             // int m = 0;
//             // for(int j=L;j<=R-L-1;j++)
//             // {
//             //     m = max(v[j],m);
//             // }
//             // L++;
//             // R++;
//             if(v[i] == max_ele)
//                 count++;
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
        for(int i=0;i<N;i++)
        {
            cin>>v[i];
        }
        int ele = v[0];
        int i;
        for(i=1;i<N-1;i++)
        {
            if(ele < v[i])
                break;
        }
        if(i != N-1)
        {
            cout<<-1<<endl;
            continue;
        }
        int mv = 1;
        for(int j=1;j<N-1;j++)
        {    
            // cout<<"VALUE:"<<v[j]<<endl;
            if(v[j-1] >= v[j])
            {
                // bool flag = false;
                int i;
                for(i=j;i<N-1;i++)
                {
                    // cout<<v[i]<<" ";
                    if(v[i] < v[i+1])
                    {   
                        // cout<<"INNER LOOP:"<<v[i]<<" "<<v[i+1]<<endl;
                        mv++;
                        break;
                    }
                }
                // cout<<endl;
                j = i+1;
            }
        }
        mv++;
        cout<<mv<<endl;
    }
}