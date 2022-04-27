#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int N; 
    cin>>N; 

    vector<int> v(N); 

    for(int i=0;i<N;i++) 
    {
        cin>>v[i];
    }

    stack<int> st;
    vector<int> nge(N);

    for(int i=N-1;i>=0;i--) 
    {
        while(!st.empty() && v[st.top()] <= v[i])
            st.pop();
        if(st.empty()) 
            nge[i] = -1;
        else 
            nge[i] = v[st.top()];
        st.push(i);
    }

    for(auto i:nge)
    {
        cout<<i<<" ";
    }

}