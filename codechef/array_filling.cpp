// #include<bits/stdc++.h>
// #include<numeric>
// using namespace std;
// #define ll long long int
// // #define s 1000000007
// // bitset<s> bs;
// bool comp(pair<int,int> ele1,pair<int,int> ele2) 
// {
//     if((ele1.first > ele2.first) && (ele1.second > ele2.second))
//         return true;
//     else if((ele1.first > ele2.first) && (ele1.second<=ele2.second))
//         return true;
//     return false;
// }

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     int T; 
//     cin>>T;
//     while(T--) 
//     {
//         int N,M;
//         cin>>N>>M;
//         vector<pair<int,int>> vec;
//         for(int i=0;i<M;i++)
//         {
//             int x,y;
//             cin>>x>>y;
//             vec.push_back(make_pair(x,y));
//         }
//         // bs.reset();
//         sort(vec.begin(),vec.end(),comp);

//         // for(int i=0;i<M;i++) 
//         // {
//         //     cout<<vec[i].first<<" "<<vec[i].second<<endl;
//         // }
//         ll sum = 0;

//         if(M == 1)
//         {
//             cout<<vec[0].first*(N-(N/vec[0].second))<<"\n";
//             continue;
//         }
//         vector<int> v; 
//         vector<ll> pre_lcm(M);
//         pre_lcm[0] = vec[0].second;
//         for(int i=1;i<M;i++) 
//         {
//             pre_lcm[i] = (pre_lcm[i-1]*vec[i].second)/(pre_lcm[i-1],vec[i].second);
//         }
//         for(int i=0;i<1;i++) 
//         {
//             int div = N/(vec[i].second); 
//             // for(int j=1;j*vec[i].second<=N;j++)
//             // { 
//             //     v.push_back(j*vec[i].second);
//             // }
//             for(int j=vec[i].second;j<=N;j+=vec[i].second)
//             {
//                 v.push_back(j);
//             }
//             sum += (vec[i].first)*(N-div);
//         }
//         // cout<<sum<<endl;
//         for(int i=1;i<M;i++)
//         {
//             for(int j=0;j<v.size();j++) 
//             {
//                 if(v[j]%pre_lcm[i] != 0)
//                 {
//                     sum += vec[i].first;
//                 }
//             }
//             // for(int j=0;j<v.size();j++)
//             // {
//             //     if(v[j]%vec[i].second != 0)
//             //     {
//             //         // cout<<"EXECUTING"?;?
//             //         v[j] = 0;
//             //         sum += vec[i].first;
//             //         // cout<<"NOW SUM="<<sum<<endl;
//             //     }
//             // }

//             // // v.clear();

//             // // for(int j=1;j*vec[i].second<=N;j++) 
//             // // {
//             // //     v.push_back(j*vec[i].second);
//             // // }

//             // for(int j=vec[i].second;j<=N;j+=vec[i].second)
//             // {
//             //     v.push_back(j);
//             // }

//             // if(v.size() == 0)
//             //     break; 
//         }
//         // cout<<endl;
//         cout<<sum<<"\n"; 
//         // for(int j=N;j>=1;j--)
//         // {
//         //     for(int i=0;i<M;i++)
//         //     {
//         //         if((bs.test(j) == false) && (j%vec[i].second != 0))
//         //         {
//         //             sum += vec[i].first;
//         //             bs.set(j);
//         //         }
//         //     }
//         // }
//         // cout<<sum<<endl;
//         // v.clear();
//         // if(M == 1) 
//         // { 
//         //     ll sum = 0;
//         //     for(int j=1;j<=N;j++) 
//         //     {
//         //         if(v[j] == 0 && (j%vec[1].second) != 0)
//         //             v[j] = vec[1].first;
//         //         sum += v[j];
//         //     }
//         //     cout<<sum<<endl;
//         //     continue;
//         // }
//         // sort(vec.begin(),vec.end(),comp);
//         // for(int i=0;i<M;i++)
//         // {
//         //     cout<<vec[i].first<<" "<<vec[i].second<<endl;
//         // }
//         // ll sum = 0;
//         // for(int i=0;i<M;i++) 
//         // {
//         //     for(int j=1;j<=N;j++)
//         //     {
//         //         if(((j%vec[i].second) != 0) &&  (v[j] == 0))
//         //         {
//         //             v[j] = vec[i].first;
//         //         }
//         //         for(int k=1;k<=N;k++) 
//         //         {
//         //             cout<<v[k]<<" ";
//         //         }
//         //         cout<<endl;
//         //     }
//         // }

//         // for(int i=1;i<=N;i++) 
//         // {
//         //     sum += v[i];
//         // }
//         // cout<<sum<<endl;
//     }
// }


#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int main() 
{
    ll T;
    cin>>T;
    while(T--)
    {
        ll N,M; 
        cin>>N>>M;
        vector<pair<ll,ll>> p(M);
        for(ll i=0;i<M;i++)
        {
            cin>>p[i].first>>p[i].second;
        }

        sort(p.begin(),p.end(),greater<pair<ll,ll>>());

        ll emp_cell = N,rem,ans=0,l=1;
        
        for(auto [x,y]:p)
        {
            l = ((l*y)/__gcd(l,y));
            rem = (N/l);
            ans += x*(emp_cell-rem);
            emp_cell = rem;
            if(emp_cell == 0) 
                break;
        }

        cout<<ans<<endl;
    }
}