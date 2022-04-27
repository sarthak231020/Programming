#include<bits/stdc++.h>
//#include "testlib.h"
using namespace std;
#define ll long long
#define qi ios::sync_with_stdio(0)

ll a,n,b;

//return log_b(a)
inline double log(ll a,ll b){
	return log10(a)/log10(b);
}

//In order to calculate the number of digits......

inline bool ok(ll x,ll n){
	long double v = floor(x*log(x,b)+log(a,b))+1;
    cout<<"No of digits in base "<<b<<" are :"<<v<<endl;
	if(v>=n)
    {
		return true;
	}
    else
    {
		return false;
	}
}

void solve(){
	//find first
	ll l=1,r=1e9;
	while(l<=r){
		ll m=(l+r)/2;
		if(ok(m,n))
        {
            // cout<<m<<endl;
			r=m-1;
		}
        else
        {
			l=m+1;
//			r=m-1;
		}
	}
	
	cout<<l<<endl;
	
	//find last
	ll l2=1,r2=1e9;
	while(l2<=r2)
    {
		ll m=(l2+r2)/2;
		if(ok(m,n+1))
        {
            // cout<<m<<endl;
			r2=m-1;
		}
        else
        {
			l2=m+1;
		}
	}       
    // cout<<l2<<endl;
	
	cout<<l2-l<<endl;
}

int main(int argc,char* argv[]){
    int  i=1;
	while(cin>>a>>n>>b){
        cout<<"Running for test:"<<i++<<endl;
		solve();
	}
	return 0;
}