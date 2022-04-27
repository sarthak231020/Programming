#include<bits/stdc++.h> 
using namespace std;

// int main() 
// {
//     int n,k;
//     cin>>n>>k;
//     vector<int> v(n);
    
//     for(int i=0;i<n;i++) 
//     {
//         cin>>v[i];
//     }
//     int max_val = INT_MIN;
//     deque<int> dq(k);
//     for(int i=0;i<k;i++)
//     {
//         dq.push_back(v[i]);
//     }
//     cout<<*max_element(dq.begin(),dq.end())<<endl;

//     for(int i=k;i<n;i++)
//     {   
//         dq.pop_front(); 
//         dq.push_back(v[i]); 
//         cout<<*max_element(dq.begin(),dq.end())<<endl; 
//     }
    
// }

//Using multiset
//O(nlogn)
// int main() 
// {
//     int n,k;
//     cin>>n>>k;
//     vector<int> v(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>v[i];
//     }
//     vector<int> ans;
//     multiset<int,greater<int>> st;
//     for(int i=0;i<k;i++) 
//     {
//         st.insert(v[i]);
//     }    
//     ans.push_back(*st.begin());

//     for(int i=k;i<n;i++) 
//     {
//         st.erase(st.lower_bound(v[i-k]));
//         st.insert(v[i]);
//         ans.push_back(*st.begin());
//     }

//     for(auto i:ans)
//     {
//         cout<<i<<" ";
//     }

//     cout<<endl;
// }

//Using Deque

int main() 
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    deque<int> q(k);

    for(int i=0;i<k;i++) 
    {
        while(!q.empty() && q.back() < v[i])
        {
            q.pop_back();
        }
        q.push_back(v[i]);
    }
    for(int i=k;i<n;i++)
    {
        cout<<q.front()<<" "; 
        bool flag = false;
        for(int j=i;j<)

    }
    // for(int i=0;i<k;i++)  
    // {
    //     if(!q.empty() && v[q.back()]
    // }
    // cout<<q.front()<<endl;
    // for(int i=0;i<n;i++)
    // {
    //     q.pop_front(); 
    //     q.push_back(v[i]);
    //     cout<<q.front()<<endl;
    // } 
}