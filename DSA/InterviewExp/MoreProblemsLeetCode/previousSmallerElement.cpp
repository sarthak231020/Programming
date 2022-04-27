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

    vector<int> PSE(N);
    stack<int> st;

    for(int i=0;i<N;i++) 
    {
        while(!st.empty() && v[st.top()] > v[i]) 
        {
            st.pop();
        }

        if(st.empty()) 
            PSE[i] = -1;
        else 
            PSE[i] = v[st.top()];
        st.push(i);
    }

    for(auto i:PSE) 
    {
        cout<<i<<" ";
    }

    cout<<endl;

    st = stack<int> ();
    vector<int> NSE(N);

    for(int i=N-1;i>=0;i--) 
    {
        while(!st.empty() && v[st.top()] > v[i]) 
        {
            st.pop();
        }

        if(st.empty()) 
            NSE[i] = -1;
        else 
            NSE[i] = v[st.top()];
        st.push(i);
    }

    for(auto i:NSE)
    {
        cout<<i<<" ";
    }
    cout<<endl;

}