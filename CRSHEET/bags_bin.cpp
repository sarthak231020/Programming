// Govinda Saxena's AC solution
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// ll mid_sum1,mid_sum2;
// bool bags_equal(vector<int> v,int m)
// {
//     mid_sum1=0,mid_sum2=0;
//     if(v[m+1] > v[m] && v[m-1] < v[m])
//     {
//         for(int i=0;i<m;i++)
//         {
//             mid_sum1 += v[i];
//         }
//         for(int i=m+1;i<v.size();i++)
//         {
//             mid_sum2 += v[i];
//         }
//         if(mid_sum1==0 || mid_sum2==0)
//             return false;
//         if(mid_sum1 == mid_sum2)
//             return true;
//     }
//     return false;
// }

// int main()
// {
//     int n;
//     while(cin>>n)
//     {
//         vector<int> v(n);

//         for(int i=0;i<n;i++)
//         {
//             cin>>v[i];
//         }

//         if(n==1 || n==2)
//         {
//             cout<<"NO"<<endl;
//             continue;
//         }
//         if(*max_element(v.begin(),v.end()) == *min_element(v.begin(),v.end()))
//         {
//             cout<<"NO"<<endl;
//             continue;
//         }

//         int l = 0,r = v.size()-1;
//         int flag = 0;
//         while(l <= r)
//         {
//             int m = (l+r)/2;
//             // cout<<v[m]<<endl;

//             if(bags_equal(v,m))
//             {
//                 cout<<"YES"<<endl;
//                 flag = 1;
//                 break;
//             }
//             else if
//             {
//                 l = m+1;
//             }
//             else
//             {
//                 r = m-1;
//             }
//         }
//         if(flag == 1)
//         {
//             continue;
//         }
//         else
//         {
//             cout<<"NO"<<endl;
//         }
//     }
// }


//Tester's Solution 

/*
              *******
When winter comes,You'll hear no lions roar,
no stags grazing the fields,
no roses growing in the meadows,
no snakes in the sand.
The krakens will freeze where they swim.
The flayed men will rot and wither.
No trouts swimming in the river and no falcons flying in the air.
Not even the dragons breath will warm you in your halls.
Only the wolfs howl in the night.
            WINTER IS COMING
*/
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mem(x,y) memset(x,y,sizeof(x))
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

const int N =1e5+7;
int a[N];
int lidx[N];
ll sum[N];

int main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     //freopen("output.txt","w",stdout);      
    // #endif
    fast_io;
    int n; 
    cin>>n;
    assert(n>=1 && n<=100000);
    mem(lidx,0);
    int mx=0;
    for(int i=1;i<=n;i++) 
    {
        cin>>a[i];
        mx=max(a[i],mx);
        assert(a[i]>=1 && a[i]<=100000);
    }
    //maximum stored in maximum

    sort(a+1,a+n+1);  //sorted
    sum[0]=0; //Prefix sum calculation
    
    for(int i=1;i<=n;i++) 
    {
        lidx[a[i]]=i;
        sum[i]=sum[i-1]+a[i];
    }

    for(int i=0;i<=n;i++)
    {
        cout<<sum[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<=n;i++)
    {
        cout<<lidx[i]<<" ";
    }
    cout<<endl;

    for(int i=1;i<mx;i++) 
    {
        cout<<endl;
        int l=1,r=n;
        int idx1 = 0;
        int iter = 0;
        while(l<=r) 
        {
            cout<<"Iteration :"<<iter<<endl;
            int mid=(l+r)/2;
            cout<<mid<<" "<<l<<" "<<r<<endl;
            if(a[mid]<i) idx1 = mid,l = mid+1;
            else r = mid-1;
            iter++;
        }
        cout<<idx1<<endl<<endl;
        int idx2=0;
        l=1,r=n;
        iter = 0;
        while(l<=r) 
        {
            cout<<"Iteration :"<<iter<<endl;
            int mid=(l+r)/2;
            cout<<mid<<" "<<l<<" "<<r<<" "<<endl;
            if(a[mid]>i) r=mid-1,idx2=mid;
            else l=mid+1;
            iter++;
        }

        cout<<idx2<<endl;

        cout<<sum[idx1]<<" "<<sum[n]<<" "<<sum[idx2-1]<<endl;
        ll v1=sum[idx1];
        ll v2=sum[n]-sum[idx2-1];

        cout<<v1<<" "<<v2<<endl;

        if(v1==v2) 
        {
            cout<<"YES\n";
            return 0;
        }

    }

    cout<<"NO\n";
    return 0;
}