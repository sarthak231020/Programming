#include<bits/stdc++.h>
using namespace std;

typedef pair<int,pair<int,int>> ppi;

int main() 
{
    int N;
    cin>>N;

    vector<vector<int>> lists(N,vector<int> ());

    for(int i=0;i<N;i++) 
    {
        int size;
        cin>>size;
        for(int j=0;j<size;j++) 
        {
            int ele; 
            cin>>ele;
            lists[i].push_back(ele);
        }
    }
                //val , list index, data index.
    priority_queue<ppi,vector<ppi>,greater<ppi>> minHeap;

    vector<int> ans;
    for(int i=0;i<N;i++) 
    {
        minHeap.push({lists[i][0],{i,0}});
    }

    while(minHeap.size() > 0) 
    {
        ppi val = minHeap.top();
        minHeap.pop();
        ans.push_back(val.first);
        val.second.second++;
        if(val.second.second < lists[val.second.first].size()) 
        {
            val.first = lists[val.second.first][val.second.second];
            minHeap.push(val);
        }   
    }

    for(auto i:ans)
    {
        cout<<i<<" ";
    }

    cout<<endl;
    
}