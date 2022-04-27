// problem 1
// #include<iostream>
// using namespace std;

// int main() 
// {
//     int T;
//     cin>>T;

//     while(T--)
//     {
//         int d,x,y,z;
//         cin>>d>>x>>y>>z;
//         int f_w_sum = x*7;
//         int s_w_sum = (y*d)+(z*(7-d));

//         cout<<max(f_w_sum,s_w_sum)<<endl;
//     }
// }

//problem 2

// #include<iostream>
// using namespace std;

// int main() 
// {
//     int T;
//     cin>>T;

//     while(T--)
//     {
//         int g,c;
//         cin>>g>>c;

//         cout<<((c*c)/(2*g))<<endl;
//     }
// }


// #include<iostream>
// using namespace std;

// int main() 
// {
//     int a,b,temp;
//     cin>>a>>b;
//     temp = a;
//     cout<<temp<<endl;
//     a = a^b;
//     cout<<a<<endl;
//     b = temp^a;
//     cout<<b<<endl;

//     cout<<a<<b<<endl;

// }


//Problem - 3
// #include<bits/stdc++.h>
// using namespace std;

// int is_power_2(int n)
// {
//     int count = 0;
//     while(n>1)
//     {
//         n/=2;
//         count++;
//     }
//     return count+1;
// }   

// bool getbit(int n,int pos)
// {
//     return ((n & (1<<pos)) != 0);
// }
// int main() 
// { 
//     int T;
//     cin>>T;

//     while(T--)
//     {
//         int n,k;
//         cin>>n>>k;
//         vector<int> v(n); 
//         for(int i=0;i<n;i++)
//         {
//             cin>>v[i];
//         }

//         if(*max_element(v.begin(),v.end()) == 0)
//         {
//             cout<<0<<endl;
//             continue;
//         }
//         int max_power = is_power_2(*max_element(v.begin(),v.end()));
//         int ans = 0;
//         for(int p=0;p<=max_power;p++)
//         {
//             int count = 0;
//             for(int i=0;i<n;i++)
//             {
//                 if(getbit(v[i],p))
//                 {
//                     v[i] = v[i]^int(pow(2,p));
//                     count++;
//                 }
//             }
//             count = ceil(float(count)/float(k));
//             ans += count;
//         }

//         cout<<ans<<endl;
//     }
// }

//Problem - 4

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// ll exec(vector<int> v,int max_idx)
// {
//     int temp = 1;
//     ll sum = 0;
//     v[max_idx] = 1;
//     for(int j=0;j<v.size();j++)
//     {
//         sum += (v[j]/temp);
//     }
//     return sum;
// }

// int main()
// {
//     int T;
//     cin>>T;
//     while(T--)
//     {
//         int n;
//         cin>>n;
//         vector<int> v(n);
//         for(int i=0;i<n;i++)
//         {
//             cin>>v[i];
//         }
//         if(n==1)
//         {
//             cout<<1<<endl;
//             continue;
//         }
        // int max_idx = max_element(v.begin(),v.end())-v.begin();
        // sort(v.begin(),v.end());
        
        // int temp1 = v[0];

        // for(int i=1;i<n;i++)
        // {
        //     temp1 = __gcd(temp1,v[i]);
        // }   

        // ll sum = 0;
        // int temp3 = *max_element(v.begin(),v.end());
        // v[max_idx] = temp1;

        // for(int i=0;i<n;i++)
        // {
        //     sum += (v[i]/temp1);
        // }

        // v[max_idx] = temp3;
        // int temp2 = v[1];
        
        // for(int i=2;i<n;i++)
        // {
        //     temp2 = __gcd(temp2,v[i]);
        // }
        // temp3 = v[0];
        // v[0] = temp2;
        // ll sum1 = 0;

        // for(int i=0;i<n;i++)
        // {
        //     sum1 += (v[i]/temp2);
        // }
        // v[0] = temp3;
        // v[max_idx] = temp2;
        // ll sum3 = 0;
        // for(int i=0;i<n;i++)
        // {
        //     sum3 += (v[i]/temp2);
        // }

        // cout<<min(sum3,min(sum1,sum))<<endl;
        // int temp = __gcd(v[n-1],v[n-2]);
        // int idx = 0,count=0;
        // for(int i=n-3;i>=0;i--)
        // {
        //     if(__gcd(temp,v[i]) < temp && count == 0)
        //     {
        //         idx = i;
        //         count = 1;
        //         continue; 
        //     }
        //     temp = __gcd(temp,v[i]);
        // }
        // if(count == 0)
        // {
        //     v[max_idx] = temp;
        // }
        // else if(count == 1)
        // {
        //     v[idx] = temp;
        // }
        // ll sum1 = 0;
        // for(int i=0;i<n;i++)
        // {
        //     sum1 += (v[i]/temp);
        // }
        // cout<<min(sum1,sum)<<endl;
        // int i=0,temp,max_idx = max_element(v.begin(),v.end())-v.begin();
        // while(v[i] == 1)
        // {
        //     i++;
        // }
        // if(i > 1)
        // {   
        //     ll sum = exec(v,max_idx);
        //     cout<<sum<<endl;
        // }
        // else
        // {
        //     temp = v[i];
        //     int count = 0,idx=i;
        //     ll sum = 0,sum1=0;
        //     for(int j=i+1;j<n;j++)
        //     {
        //         if(__gcd(temp,v[j]) == 1 && count==0)
        //         {
        //             idx = j;
        //             count = 1;
        //             continue;
        //         }
        //         temp = __gcd(temp,v[j]);
        //     }     
        //     sum = exec(v,max_idx);
        //     if(temp != 1 && count==0 && i==0)
        //     {
        //         v[max_idx] = temp;
        //     }
        //     else if(temp != 1 && count==0 && i==1)
        //     {
        //         v[0] = temp;
        //     }
        //     else if(temp != 1 && count==1 && i==0)
        //     {
        //         v[idx] = temp;
        //     }
        //     else if(temp != 1 && count==1 && i==1)
        //     {
        //         v[max_idx] = 1;
        //         temp = 1;
        //     }
        //     for(int j=0;j<n;j++)
        //     {
        //         sum1 += (v[j]/temp);
        //     }

            // sort(v.begin(),v.end());
            // int temp3 = v[1];
            // for(int i=2;i<n;i++)
            // {
            //     temp3 = __gcd(temp3,v[i]);
            // }
            // cout<<temp3<<endl; 
            // v[0] = temp3;
            // ll sum3 = 0;
            // for(int i=0;i<n;i++)
            // {
            //     sum3 += (v[i]/temp3);
            // }

            // cout<<min(sum3,min(sum,sum1))<<endl;
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
//         int n;
//         cin>>n;

//         vector<int> v(n);

//         for(int i=0;i<n;i++)
//         {
//             cin>>v[i];
//         }
//         sort(v.begin(),v.end());
//         // int temp = ;
//         if(v[0] == 1)
//         {
//             int temp = v[0];
//             for(int i=1;i<n;i++)
//             {
//                 temp = __gcd(temp,v[i]);
//             }
//             v[max_element(v.begin(),v.end())-v.begin()] = temp;
//             int sum=0;
//             for(int i=0;i<n;i++)
//             {
//                 sum += (v[i]/temp);
//             }

//             int temp1 = v[1];
//             for(int i=2;i<n;i++)
//             {
//                 temp1 = __gcd(temp1,v[i]);
//             }
//             int sum1 = 0;
//             v[0] = temp;
//             for(int i=0;i<n;i++)
//             {

//             }
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
//         int n;
//         cin>>n;
//         vector<int> v(n);
//         for(int i=0;i<n;i++)
//         {
//             cin>>v[i];
//         }
        
//         sort(v.begin(),v.end());
//         int max_idx = v.size()-1;
//         if(n== 1)
//         {
//             cout<<1<<endl;
//             continue;
//         }

//         int temp=v[1],count = 0,idx=0;

//         for(int i=2;i<n;i++)
//         {
//             if(__gcd(temp,v[i]) == 1 && count==0)
//             {
//                 idx = i;
//                 count = 1;
//                 continue;
//             }
//             temp = __gcd(temp,v[i]);
//         }
//         if(temp == 1)
//         {
//             v[max_idx] = temp;
//         }
//         else if(count == 1)
//         {
//             v[idx] = temp;
//         }
//         else if(count == 0 && v[0] < temp)
//         {
//             v[0] = temp;
//         }
//         else if()
//         ll sum=0;

//     }

// }



// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// ll exec(vector<int> v,int max_idx)
// {
//     int temp = 1;
//     ll sum = 0;
//     v[max_idx] = 1;
//     for(int j=0;j<v.size();j++)
//     {
//         sum += (v[j]/temp);
//     }
//     return sum;
// }

// int main()
// {
//     int T;
//     cin>>T;
//     while(T--)
//     {
//         int n;
//         cin>>n;
//         vector<int> v(n);
    
//         for(int i=0;i<n;i++)
//         {
//             cin>>v[i];
//         }
//         vector<int> v1(v.begin(),v.end());
//         if(n==1)
//         {
//             cout<<1<<endl;
//             continue;
//         }
//         int i=0,temp,max_idx = max_element(v.begin(),v.end())-v.begin();
//         while(v[i] == 1)
//         {
//             i++;
//         }
//         if(i > 1)
//         {   
//             ll sum = exec(v,max_idx);
//             cout<<sum<<endl;
//         }
//         else
//         {
//             temp = v[i];
//             int count = 0,idx=i;
//             ll sum = 0,sum1=0;
//             for(int j=i+1;j<n;j++)
//             {
//                 if(__gcd(temp,v[j]) == 1 && count==0)
//                 {
//                     idx = j;
//                     count = 1;
//                     continue;
//                 }
//                 temp = __gcd(temp,v[j]);
//             }     
//             sum = exec(v,max_idx);
//             if(temp != 1 && count==0 && i==0)
//             {
//                 v[max_idx] = temp;
//             }
//             else if(temp != 1 && count==0 && i==1)
//             {
//                 v[0] = temp;
//             }
//             else if(temp != 1 && count==1 && i==0)
//             {
//                 v[idx] = temp; 
//             }
//             else if(temp != 1 && count==1 && i==1)
//             {
//                 v[max_idx] = 1;
//                 temp = 1;
//             }

//             ll sum3 = 0;
//             sort(v1.begin(),v1.end());
//             int temp3 = v1[1];
//             for(int i=2;i<n;i++)
//             {
//                 temp3 = __gcd(temp3,v1[i]);
//             }
//             int temp4 = v[0];
//             v1[0] = temp3;
//             for(int j=0;j<n;j++)
//             {
//                 sum3 += v1[j]/temp3;
//             }
//             ll sum4 = 0;
//             v1[0] = temp4;
//             v1[v1.size()-1] = v1[0];
//             temp4 = __gcd(temp3,v1[0]);
//             for(int j=0;j<n;j++)
//             {
//                 sum4 += v1[j]/temp4;
//             }

//             for(int j=0;j<n;j++)
//             {
//                 sum1 += (v[j]/temp);
//             }
//             // cout<<sum<<" "<<sum1<<" "<<sum3<<" "<<sum4<<endl;
//             cout<<min(sum4,min(sum3,min(sum,sum1)))<<endl;
//         }
//     }
// }


// problem-4 RECODE BETTER WAY
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool is_prime(int n)
{
    if(n==0 || n==1)
    {
        return false;
    }
    for(int i=2;i<=n/2;i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}


int no_of_primes(vector<int> v)
{
    int count = 0;
    for(int i=0;i<v.size();i++)
    {
        if(is_prime(v[i]))
        {
            count++;
        }
    }
    return count;
}


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        vector<int> v(n); 
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        vector<int> v1(v.begin(),v.end());
        if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
        if(n == 2)
        {
            cout<<2<<endl;
            continue;
        }
        // if(no_of_primes(v) > 2)
        // {
        //     int max_idx = max_element(v.begin(),v.end())-v.begin();
        //     v[max_idx] = 1;
        //     ll sum=0;
        //     for(int i=0;i<n;i++)
        //     {
        //         sum += v[i];
        //     }
        //     cout<<sum<<endl;
        // }
        // else
        // {  
            sort(v.begin(),v.end());

            int temp = v[0];
            int hcf_max = v[1];
            
            for(int i=2;i<n;i++)
            {
                hcf_max = __gcd(hcf_max,v[i]);
            }

            v[0] = hcf_max;

            ll sum = 0;
            for(int i=0;i<n;i++)
            {
                sum += (v[i]/hcf_max);
            }            
            v[0] = temp; 
            int hcf_new = __gcd(temp,hcf_max);
            temp = v[v.size()-1];
            v[v.size()-1] = hcf_new;

            ll sum1 = 0;
            for(int i=0;i<n;i++)
            {
                sum1 += (v[i]/hcf_new);
            }

            v[v.size()-1] = temp;
            hcf_new = v[0];
            int id = 0,count=0;
            for(int i=1;i<n;i++)
            {
                if(__gcd(hcf_new,v[i]) < hcf_new && count == 0)
                {
                    id = i;
                    count = 1;
                    continue;
                }
                if(__gcd(hcf_new,v[i]) < hcf_new)
                {
                    count++;
                }
                hcf_new = __gcd(hcf_new,v[i]);
            }

            if(count > 1)
            {
                v[v.size()-1] = __gcd(v[id],hcf_new); 
                hcf_new = __gcd(v[id],hcf_new);
            }
            else if(count == 1)
            {
                v[id] = hcf_new;
            }
            else
            {
                v[v.size()-1] = hcf_new;
            }

            ll sum2 = 0;

            for(int i=0;i<n;i++)
            {
                sum2 += (v[i]/hcf_new);
            }
            cout<<(min(sum2,min(sum,sum1)))<<endl;
        // }
    }
}