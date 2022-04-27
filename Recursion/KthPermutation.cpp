#include<bits/stdc++.h> 
using namespace std;

class Solution {
public:
    
//     void solve(vector<int> &v,string &ans,int n,int k,int fact) 
//     {
//         if(n == 0) 
//             return;
//         int ind = k/fact;
//         int nextK = k%fact;
//         ans += to_string(v[ind]);
//         v.erase(v.begin()+ind);
//  -       if(v.empty()) 
//             return;
//         solve(v,ans,n-1,nextK,fact/(n-1));
//     }
    
    string getPermutation(int n, int k) {
        string ans = "";
        vector<int> v(n);
        int fact = 1;
        for(int i=1;i<n;i++) 
        {
            fact *= i;
            v[i-1] = i;
        }
        v[n-1] = n;
        k = k-1; //Since it is 0 based Indexing. so reduce K by 1.
        //factorial will contain (n-1)! value initially.
        //v will contain 1 to N numbers.
        while(true) 
        {
            int ind = k/fact; //calculate the value ind to be picked.
            ans +=to_string(v[ind]); //pick that val
            v.erase(v.begin()+ind); //now erase it
            if(v.empty())  
                break;
            k = k%fact; //Now get that permutation in next iter.
            fact = fact/(v.size()); //shift fact of (N-1)! to (N-2)!
        }
        return ans;
    }
};