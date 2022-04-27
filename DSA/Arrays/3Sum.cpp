#include<bits/stdc++.h> 
using namespace std;



int main() 
{
    int N,target;
    cin>>N>>target;
    vector<int> v(N); 
    for(int i=0;i<N;i++) 
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    vector<vector<int>> ans;

    for(int i=0;i<N-2;i++) 
    {
        int target2 = target-v[i];
        int left = i+1;
        int right = N-1;

        while(left < right) 
        {
            if(v[left]+v[right] < target2) 
            {
                left++;
            }
            else if(v[left]+v[right] > target2)
            {
                right--;
            }
            else 
            {
                vector<int> triplet;
                triplet.push_back(v[i]);
                triplet.push_back(v[left]); 
                triplet.push_back(v[right]);
                while(left < right && v[left] == triplet[1]) 
                    left++;
                while(left < right && v[right] == triplet[2]) 
                    right--;
                ans.push_back(triplet);
            }
        }
        while(i+1 < N && v[i+1] == v[i]) 
            i++;
    }

    for(auto i:ans) 
    {
        for(auto j:i) 
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

}