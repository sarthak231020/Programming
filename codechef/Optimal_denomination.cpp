#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); 
    ll T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        vector<ll> arr(n),pre_gcd(n),suff_gcd(n);
        ll sum = 0;
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
            sum += arr[i];
        }
         if(n==1)
        {
            cout<<1<<endl;
            continue;
        }

        pre_gcd[0] = arr[0];
        suff_gcd[n-1] = arr[n-1];
        for(ll i=1;i<n;i++)
        {
            pre_gcd[i] = __gcd(pre_gcd[i-1],arr[i]);
        }

        
        for(ll i=n-2;i>=0;i--)
        {
            suff_gcd[i] = __gcd(arr[i],suff_gcd[i+1]); 
        }

        ll ans = (sum)/pre_gcd[n-1];

        for(ll i=0;i<n;i++)
        {
            ll k = __gcd((i-1<0 ? 0 : pre_gcd[i-1]),(i+1 >= n ? 0 : suff_gcd[i+1])); 
            ans = min(ans,1LL + (sum-arr[i])/k);
        }

        cout<<ans<<endl;
    }
    return 0;
}


// #include<bits/stdc++.h>
// #define ll long long int 
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     ll TC;
//     cin>>TC;
//     while(TC--)
//     {
//         ll n,sum=0;
//         cin>>n;
//         vector<ll> arr(n);

//         for(auto &x:arr)
//         {
//             cin>>x;
//             sum += x;
//         }
//         if(n == 1)
//         {
//             cout<<1<<endl;
//             continue;
//         }

//         vector<ll> pref(n),suf(n);
//         pref[0] = arr[0];
//         for(ll i=1;i<n;i++)
//         {
//             pref[i] = __gcd(pref[i-1],arr[i]);
//         }
        
//         suf[n-1] = arr[n-1];

//         for(ll i=n-2;i>=0;i--)
//         {
//             suf[i] = __gcd(suf[i+1],arr[i]);
//         }

//         ll ans = sum/pref[n-1];

//         for(ll i=0;i<n;i++)
//         {
//             ll k = __gcd((i-1 < 0 ? 0 : pref[i-1]),i+1>=n ? 0 : suf[i+1]);
//             ans = min(ans,1LL+(sum-arr[i])/k);
//         }

//         cout<<ans<<endl;
//     }
//     return 0;
// }


