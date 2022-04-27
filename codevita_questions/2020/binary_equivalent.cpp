#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define loop(i,start,end) for(ll i=(start);i<(end);i++)
#define scan(n) for(auto &i:n) cin>>i;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define vi vector<int>
void calculation(int i,vi &V,int SIZE,int S,int &tot)
{
    if(i==SIZE)
    {
        if(S==0)
            tot++;
        return;
    }
    calculation(i+1,V,SIZE,S+V[i],tot);
    calculation(i+1,V,SIZE,S,tot);
}

int main()
{
    fastio;
    int n;
    cin>>n;
    vector<int> v(n);
    scan(v);
    int m=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]>m)
            m=v[i];
    }
    int TOTAL=0;
    while(m)
    {
        TOTAL++;
        m=m>>1;
    }
    vector<int> V(n,0);
    for(int i=0;i<n;i++)
    {
        while(v[i])
        {
            if(v[i]&1)
                V[i]++;
            v[i]=v[i]>>1;
        }
    }
    int j=0;
    for(int i=0;i<n;i++)
    {
        V[j]=TOTAL-2*V[i];
        if(V[j]==0)
            continue;
        else
            j++;
    }
    int tot=0;
    calculation(0,V,j,0,tot);
    tot-=1;
    tot=tot*(1+n-j)+(1<<(n-j))-1;
        vector<int> BINARY(TOTAL,0); 
        int i=0;
        while (tot > 0) 
        { 
            BINARY[i] = tot &1; 
            tot = tot>>1; 
            i++;
        } 
        for (int j = TOTAL - 1; j >= 0; j--) 
            cout << BINARY[j]; 
    return 0;
}