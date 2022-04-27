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
    
    //For first variant like if you are looking for next greater in right side 
    vector<int> nge(N);

    for(int i=N-1;i>=0;i--)
    {
        while((st.empty() == false) && st.top() <= v[i]) 
            st.pop();
        if(st.empty())
            nge[i] = -1;
        else 
            nge[i] = st.top();
        st.push(v[i]);
    }

    for(auto i:nge) 
    {
        cout<<i<<" ";
    }

    cout<<endl;
    //For second variation if you are looking for next greater in circular fashion.

    for(int i=(2*N-1);i>=0;i--)
    {
        while((st.empty() == false) && st.top() <= v[i%N])  //This while loop in overall runs maximumly runs for 2*N times overall
            st.pop();
        if(i < N)
        {
        if(st.empty())
            nge[i] = -1;
        else 
            nge[i] = st.top();
        }
        st.push(v[i%N]);
    }

    for(auto i:nge) 
    {
        cout<<i<<" ";
    }

}