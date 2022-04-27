// #include<iostream>
// #include<algorithm>
// using namespace std; 

// int main() 
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
    
//     sort(arr,arr+n);

//     for(int i=0;i<n-1;i++)
//     {
//         if(arr[i] == arr[i+1])
//         {
//             cout<<"Repeating:"<<arr[i]<<endl;
//             break;
//         }
//     }
//     for(int i=1;i<n;i++)
//     {
//         if(arr[i] != arr[i-1]+1 && arr[i] != arr[i-1])
//         {
//             cout<<arr[i-1]+1<<" ";
//             return 0;
//         }
//     }
// }


//Using Count Array

// #include<iostream>
// using namespace std;
// #define N 1000000
// int check[N];
// int main() 
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<N;i++)
//     {
//         check[i] = 0;
//     }

//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//         check[arr[i]] += 1;
//     }

//     for(int i=0;i<n;i++)
//     {
//         if(check[arr[i]] > 1)   
//         {
//             cout<<"Repeating Element:"<<arr[i]<<endl;
//             break;
//         }
//     }

//     for(int i=1;i<N;i++)
//     {
//         if(check[i] == 0)
//         {
//             cout<<"Missing Element:"<<i<<endl;
//             break;
//         }
//     }
// }

//Use Elements as Index and mark the visited places

// #include<iostream>
// using namespace std;

// int main() 
// {
//     int n;
//     cin>>n;
//     int arr[n];

//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     for(int i=0;i<n;i++)
//     {   
//         if(arr[abs(arr[i])] < 0)
//         {
//             cout<<"Repeating Element:"<<arr[abs(arr[i])]<<endl;
//         }
//         if(arr[abs(arr[i])] > 0 && abs(arr[i]) < n)
//             arr[abs(arr[i])] = -arr[abs(arr[i])];
//     }

//     for(int i=0;i<n;i++)
//     {
//         if(arr[arr[i]] > 0)
//     }
// }


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main() 
// {
//     int n;
//     cin>>n;
//     int arr[n];
    
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     unordered_set<int> s;

//     for(int i=0;i<n;i++)
//     {
//         if(s.find(arr[i]) != s.end())
//         {
//             cout<<arr[i]<<endl;
//         }
//         s.insert(arr[i]);
//     }

//     for(int i=1;i<=n;i++)
//     {
//         if(s.find(i) == s.end())
//         {
//             cout<<i;
//             break;
//         }
//     }
// }


// https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1#
#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
vector<int> missing_repeating_num(int *A,int n)
{
    long long int len = n;
        long long int Sum_N = (len * (len+1) ) /2, Sum_NSq = (len * (len +1) *(2*len +1) )/6;
        // We simply calculated 1+2+3+....n sum in Sum_N
        // we simply calculated 1^2+2^2+3^2+.....n^2 sum in Sum_NSq
        long long int missingNumber=0, repeating=0;
        cout<<Sum_N<<endl;
        cout<<Sum_NSq<<endl;
        for(int i=0;i<n; i++)
        {
        Sum_N -= (long long int)A[i];
        Sum_NSq -= (long long int)A[i]*(long long int)A[i];
        }
        cout<<Sum_N<<endl;
        cout<<Sum_NSq<<endl;
        missingNumber = (Sum_N + Sum_NSq/Sum_N)/2;
        cout<<missingNumber<<endl;
        repeating= missingNumber - Sum_N;
        cout<<repeating<<endl;
        vector <int> ans;
        ans.push_back(repeating);
        ans.push_back(missingNumber);
        return ans;
}

int main() 
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    vector<int> v;
    v = missing_repeating_num(arr,n);
    cout<<v[0]<<" "<<v[1]<<endl;
}

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];
    }

    int sum=(n*(n+1)/2),sq_sum=(n*(n+1)*(2*n+1)/6);

    for(int i=0;i<n;i++)
    {
        sum -= arr[i];
        sq_sum -= arr[i]*arr[i];
    }

    int x,y;  //Here x for repeating number y for missing number

    x = 
}