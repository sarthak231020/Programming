#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int K;
    cin>>K;

    vector<int> v = {1,2,5,10,20,50,100,500,1000};

    // for(int i=0;i<v.size();i++)   
    // {
    //     cout<<v[i]<<" ";
    // }

    int i=v.size()-1;
    int count = 0;
    vector<int> ans; 
    while(i>=0)
    {
        if(v[i] <= K)
        {
            count += K/v[i];
            for(int j=0;j<K/v[i];j++)
            {
                ans.push_back(v[i]);
            }
            K = K%v[i];
        }
        i--;
    }

    //Can Also be written as 
    // while(i>=0) 
    // {
    //     while(K >= v[i]) 
    //     {
    //         K -= v[i];
    //         ans.push_back(v[i]);  
    //     }
    //     i--;
    // }//Works same .

    for(auto i:ans) 
    {
        cout<<i<<" ";
    }

    cout<<endl;
    cout<<count<<endl;
    
}