// #include<bits/stdc++.h>
// using namespace std; 
// typedef long long int ll;
// #define MOD 1000000007
// vector<long long int> chefora_nums(100001,-1);
// int c = 0,curr=100;

// // int digits(int n)
// // {
// //     int count = 0;
// //     while(n)
// //     {
// //         count++;
// //         n /= 10;
// //     }
// //     return count;
// // }

// bool chefora(ll n)
// {
//     // int d = digits(n);
//     int d = floor(log10(n)+1);
//     if(d % 2 == 1) 
//     {
//         int t = d-1;
//         int i=0;
//         bool flag = true;
//         while(t>d/2 && i<d/2)
//         {
//             if((ll(n/pow(10,t))%10) == (ll(n/pow(10,i))%10))
//             {
//                 flag = true;
//             }
//             else
//             {
//                 flag = false;
//                 break;
//             }
//             t--;
//             i++;
//         }
//         return flag;
//         // int k=d-1,sum=0,temp=n; 
//         // vector<int> v(d);
//         // while(n)
//         // {
//         //     v[k] = n%10;
//         //     k--;
//         //     n = n/10;
//         // }
//         // for(int j=0;j<d;j++)
//         // {
//         //     sum += v[j]*(pow(10,j));
//         // }
//         // if(sum == temp)
//         // {
//         //      return true;
//         // }
//     }
//     return false;
// }
// // void all_chefora()
// // {

// //     while(true)
// //     {
// //         if(digits(curr)%2 == 0)
// //         {
// //             i = i*10;
// //         }
// //         if(chefora_nums[chefora_nums.size()-1] != -1)
// //         {
// //             break;
// //         }   
// //         if(chefora(curr))
// //         {
// //             chefora_nums[c++] = curr;
// //         }
// //     }
// // }



// void all_chefora(int R)
// {   
//     ll i = 10;
//     while(true)
//     {
//         // int d=digits(i);
//         int d = floor(log10(i)+1);
//         if(chefora_nums[R] != -1)
//         {
//             break;
//         }
//         if(d%2 == 0)
//         {
//             i = i*10;
//         }
//         if(chefora(i))
//         {
//             // cout<<i<<endl;
//             chefora_nums[c++] = i;
//             for(int j=0;j<9;j++)
//             {
//                 chefora_nums[c++] = i+pow(10,d/2);
//                 i = i+pow(10,d/2);
//             }
//         }
//         i++;
//     }
// }

// int power(long long x, unsigned int y, int p)
// {
//     int res = 1;     
//     x = x % p; 
//     if (x == 0) 
//         return 0;
//     while (y > 0)
//     {
//         if (y & 1)
//             res = (res*x) % p;
//         y = y>>1;
//         x = (x*x) % p;
//     }
//     return res;
// }

// // int main()
// // {
// //     int n,m;
// //     cin>>n>>m;

// //     cout<<calc_power(n,m)<<endl;
// // }


// int main()
// {
//     // int T;
//     // cin>>T;

//     // for(int i=0;i<100000;i++)
//     // {
//     //     chefora_nums[i] = -1;
//     // }
//     for(int i=0;i<9;i++)
//     {
//         chefora_nums[c++] = i+1;
//     }
//     // all_chefora();
//     // for(int i=0;i<100000;i++)
//     // {
//     //     cout<<chefora_nums[i]<<" ";
//     // }
//     // chefora_nums[100000] = 10000000001;
    

//     int T;
//     cin>>T;

//     while(T--)
//     {
//         int L,R;
//         cin>>L>>R;
//         L--;
//         R--;
//         all_chefora(R+1);
//         ll num = chefora_nums[L];
//         // cout<<num<<endl;
//         ll sum = 0;
//         for(int i=L+1;i<=R;i++)
//         {
//             sum += chefora_nums[i];
//         }
//         // cout<<sum<<endl;
//         cout<<power(num,sum,MOD)<<endl;
//     }
    
//     // while(T--)
//     // {
//     //     int n;
//     //     cin>>n;
//     //     cout<<chefora(n)<<endl;
//     // }
// }



//Accepted Solution

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll MOD = 1000000007;
const ll maxn = 100005;

ll mul(ll x,ll y)
{
    ll res = x*y;
    return (res >= MOD ? res%MOD : res);
}

ll power(ll x,ll y)
{
    if(y < 0)
        return 1;
    ll res = 1;
    x %= MOD;
    while(y)
    {
        if(y&1)
            res = mul(res,x);
        y >>= 1;
        x = (mul(x,x));
    }
    return res;
}

int main()
{
    vector<ll> Chefora;
    Chefora.push_back(0);
    for(ll i=1;i<maxn;i++)
    {
        ll res = i,num = i;
        num /= 10;
        while(num != 0)
        {
            res = res*10 + num%10;
            num /= 10;
        }
        Chefora.push_back(res);
    }

    vector<ll> pref;
    pref.push_back(0);
    ll sz = Chefora.size(),sum=0;
    for(ll i=1;i<sz;i++)
    {
        sum += Chefora[i];
        pref.push_back(sum);
    }

    ll Q;
    cin>>Q;
    while(Q--)
    {
        ll L,R;
        cin>>L>>R;
        cout<<power(Chefora[L],pref[R]-pref[L])<<endl;
    }
}