#include<bits/stdc++.h> 
using namespace std;

vector<vector<int>> solve(vector<int> &v,int N,int target) 
{
    sort(v.begin(),v.end());

    vector<vector<int>> ans;


    for(int i=0;i<N;i++) 
    {
        for(int j=i+1;j<N;j++) 
        {
            int target2 = target-(v[i]+v[j]);
            int left = j+1;
            int right = N-1;
            
            while(left < right) 
            {
                int twoSum = v[left]+v[right];
                if(twoSum < target2)
                    left++;
                else if(twoSum > target2) 
                    right--;
                else 
                {
                    vector<int> quad;
                    quad.push_back(v[i]);
                    quad.push_back(v[j]);
                    quad.push_back(v[left]);
                    quad.push_back(v[right]);
                    ans.push_back(quad);

                    //Eliminate the duplicates since we need only unique quadruplets
                    while(left < right && v[left] == quad[2]) 
                        ++left;
                    //Eliminate the duplicates since we need only unique quadruplets
                    while(left < right && v[right] == quad[3]) 
                        --right;
                }
            }
            //Eliminate the duplicates since we need only unique quadruplets
            while(j+1 < N && v[j+1] == v[j])  
                ++j;
        }
        //Eliminate the duplicates since we need only unique quadruplets
        while(i+1 < N && v[i+1] == v[i])
            ++i;
    } 


    return ans;
}

int main() 
{
    int N,target;
    cin>>N>>target;
    vector<int> v(N); 

    for(int i=0;i<N;i++) 
    {
        cin>>v[i];
    }

    vector<vector<int>> ans = solve(v,N,target);

    for(auto i:ans) 
    {
        for(auto j:i) 
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }   

}