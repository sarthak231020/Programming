// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int monk(vector<ll> A,vector<ll> B,ll mid)
// {
//     ll ind = upper_bound(B.begin(),B.end(),mid)-B.begin();
//     int n = B.size();
//     ind--;
//     ll ind1 = lower_bound(A.begin(),A.end(),mid)-A.begin();
//     if(ind != n && B[ind] == mid && ind1 >= 0 && A[ind1] == mid && ind >= ind1)
//     {
//         return (ind-ind1);
//     }
//     return -1;
// }

// int main()
// {
//     int TC;
//     cin>>TC;
//     while(TC--)
//     {
//         int N;
//         cin>>N;
//         vector<ll> A(N),B(N);
//         for(int i=0;i<N;i++)
//         {
//             cin>>A[i];
//         }
//         for(int i=0;i<N;i++)
//         {
//             cin>>B[i];
//         }
//         for(int i=0;i<N;i++)
//         {
//             cout<<A[i]<<" "<<B[i]<<endl;
//         }
//         cout<<"CHECK"<<endl;
//         if(A[A.size()-1] > B[0])
//         {
//             cout<<0<<endl;
//             continue;
//         }
//         cout<<"CHECK"<<endl;
//         ll l=1,r=max(A[0],B[0]),idx1=0,idx2=0;

//         cout<<"FIRST BIN"<<endl;
//         while(l<=r)
//         {
//             cout<<l<<" "<<r<<endl;
//             ll mid = (l+r)/2; 
//             cout<<mid<<endl;
//             ll res = monk(A,B,mid);
//             cout<<res<<endl;
//             if(res != -1)
//             {
//                 idx1 = max(idx1,res);
//                 cout<<idx1<<endl;
//                 l=mid+1;
//             }
//             else
//             {
//                 r = mid-1;
//             }
//         }

//         l = 1;
//         r = max(A[0],B[0]);
//         idx2 = 0;
//         ll mid,res;
//         cout<<"SECOND BIN"<<endl;
//         while(l <= r)
//         {   
//             cout<<l<<" "<<r<<endl;
//             mid = (l+r)/2;
//             cout<<mid<<endl;
//             res = monk(A,B,mid);
//             cout<<res<<endl; 
//             if(res != -1)
//             {
//                 idx2 = max(idx2,res);
//                 cout<<idx2<<endl;
//                 r = mid-1;
//             }
//             else
//             {
//                 l = mid+1;
//             }
//         }

//         cout<<max(idx1,idx2)<<endl;
//     }
// }


//

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int N;
    cin>>N;
    vector<int> A(N),B(N);

    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<N;i++)
    {
        cin>>B[i];
    }
    ll ans = 0;
    ll l = min(A[A.size()-1],B[B.size()-1]),r = max(A[0],B[0]);
    for(ll i=l;i<=r;i++)
    {
        ll l_b = lower_bound(A.begin(),A.end(),i,std::greater<int>())-A.begin();
        ll u_b = upper_bound(B.begin(),B.end(),i,std::greater<int>())-B.begin();
        u_b--;
        if(l_b >= 0 && u_b != N && u_b >= l_b && A[l_b] == i && B[u_b]==i)
        {
            ans = max(ans,u_b-l_b);
        }
        else
        {
            continue;
        }
    }
    cout<<ans<<endl;
}